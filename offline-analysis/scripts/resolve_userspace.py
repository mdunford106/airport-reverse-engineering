import os
from pathlib import Path
import struct,re,json,sys
out=Path(sys.argv[1]);p=(Path(os.environ.get('AIRPORT_FIRMWARE_DIR', str(Path.home()/'airport-research/firmware')))/'system-analysis/bank0/multicall.bin');b=p.read_bytes();ph=struct.unpack_from('<I',b,28)[0];sz,n=struct.unpack_from('<HH',b,42);segs=[struct.unpack_from('<8I',b,ph+i*sz) for i in range(n)]
def rd(a,n=4):
 for t,o,v,_,fs,ms,f,al in segs:
  if t==1 and v<=a and a+n<=v+fs:return b[o+a-v:o+a-v+n]
 raise ValueError(hex(a))
def text(v):
 try:
  st=rd(v,160).split(b'\0')[0]
  if st and all(c in (9,10,13) or 32<=c<127 for c in st):return st.decode('ascii')
 except ValueError:pass
 return None
reports={}
paths=list((out/'userspace').glob('*.c'))+list((out.parent/'airport-followup/callers').glob('*.c'))+list((out.parent/'airport-batch/results').glob('*.c'))
for f in paths:
 rows=[]
 for a in sorted({int(x,16) for x in re.findall(r'(?:DAT_|(?:[A-Za-z]+Ram))([0-9a-f]{8})',f.read_text())}):
  try:v=int.from_bytes(rd(a),'little')
  except ValueError:continue
  row={'literal_address':hex(a),'value':hex(v)}
  if all(32<=x<127 for x in v.to_bytes(4,'big')):row['fourcc_be']=v.to_bytes(4,'big').decode('ascii')
  if text(v):row['pointed_string']=text(v)
  try:
   if rd(v,8)==bytes.fromhex('56070000ffffff7f') and text(v+8):row['inline_constant_string']=text(v+8)
  except ValueError:pass
  rows.append(row)
 reports[str(f)]=rows
(out/'reports/userspace-literals.json').write_text(json.dumps(reports,indent=2)+'\n')
print('Resolved literal pointers and inline constant strings.')
