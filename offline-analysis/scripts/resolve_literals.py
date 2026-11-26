import os
from pathlib import Path
import json,re,struct,sys
root=Path(sys.argv[1]);work=Path(sys.argv[2]);source=(Path(os.environ.get('AIRPORT_FIRMWARE_DIR', str(Path.home()/'airport-research/firmware')))/'netbsd-analysis')
for bank in (0,1):
 raw=(source/f'netbsd-flash{bank}.bin').read_bytes();symbols=json.loads((work/f'bank{bank}-symbols.json').read_text());byaddr={}
 for s in symbols:
  if s['name']:byaddr.setdefault(s['address'],[]).append(s['name'])
 report={}
 for p in (root/f'bank{bank}').glob('*.c'):
  entries=[]
  for txt in sorted(set(re.findall(r'(?:_UNK_|DAT_|[A-Za-z]+Ram)([0-9a-f]{8})',p.read_text()))):
   a=int(txt,16);off=a-0x80100000
   if not 0<=off<=len(raw)-4:continue
   v=struct.unpack_from('<I',raw,off)[0];entry={'literal_address':hex(a),'value':hex(v),'signed':v if v<2**31 else v-2**32,'symbol_names':byaddr.get(v,[])}
   po=v-0x80100000
   if 0<=po<len(raw):
    st=raw[po:po+160].split(b'\0')[0]
    if len(st)>0 and all(c in (9,10,13) or 32<=c<=126 for c in st):entry['string']=st.decode('ascii')
   entries.append(entry)
  report[p.name]=entries
 (root/'reports'/f'bank{bank}-literal-values.json').write_text(json.dumps(report,indent=2)+'\n')
print('Saved literal values, symbols and printable pointer targets.')
