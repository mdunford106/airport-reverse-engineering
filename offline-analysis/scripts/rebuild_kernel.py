"""Reconstruct an analysis-only ELF wrapper around unchanged raw kernel bytes."""
import os
from pathlib import Path
import struct,json,hashlib,sys
source=(Path(os.environ.get('AIRPORT_FIRMWARE_DIR', str(Path.home()/'airport-research/firmware')))/'netbsd-analysis')
work=Path(sys.argv[1]).resolve();work.mkdir(parents=True,exist_ok=True)
reports=[]
for bank in (0,1):
 p=source/f'netbsd-flash{bank}.bin';raw=p.read_bytes();embedded=raw.find(b'\x7fELF\x01\x01\x01')
 h=list(struct.unpack_from('<16sHHIIIIIHHHHHH',raw,embedded));assert h[2]==40 and h[11]==40 and h[12]==22
 sections=[list(struct.unpack_from('<10I',raw,embedded+h[6]+i*40)) for i in range(h[12])]
 text_base=sections[1][3];assert text_base==0x80100000
 assert sections[11][3]-text_base+sections[11][5]==len(raw)
 assert sections[14][3]==text_base+len(raw)
 names_sec=sections[h[13]];names=raw[embedded+names_sec[4]:embedded+names_sec[4]+names_sec[5]]
 sy=sections[20];st=sections[21];symbols=[]
 strdata=raw[embedded+st[4]:embedded+st[4]+st[5]]
 for pos in range(embedded+sy[4],embedded+sy[4]+sy[5],16):
  name,value,size,info,other,index=struct.unpack_from('<IIIBBH',raw,pos)
  assert name<len(strdata)
  symbols.append(dict(name=strdata[name:].split(b'\0')[0].decode('ascii','replace'),address=value,size=size,type=info&15,section=index))
 # Preserve all raw bytes with their virtual address relationship; retain symbol indices.
 payload_offset=0x1000
 elf=bytearray(payload_offset)+raw
 sections[0]=[0]*10
 for i,s in enumerate(sections[1:],1):
  if s[2]&2:
   assert s[3]>=text_base
   s[4]=payload_offset+s[3]-text_base
   if s[1]!=8:assert s[4]+s[5]<=len(elf)
  elif i in (19,20,21):
   original=raw[embedded+s[4]:embedded+s[4]+s[5]];assert len(original)==s[5]
   while len(elf)%4:elf.append(0)
   s[4]=len(elf);elf+=original
  else:
   s[4]=0;s[5]=0 # unavailable original non-allocated metadata, not invented
 while len(elf)%4:elf.append(0)
 shoff=len(elf)
 for s in sections:elf+=struct.pack('<10I',*s)
 h[5]=52;h[6]=shoff;h[8]=52;h[9]=32;h[10]=2
 elf[:52]=struct.pack('<16sHHIIIIIHHHHHH',*h)
 data_offset=sections[11][3]-text_base
 ph1=(1,payload_offset,text_base,text_base,data_offset,data_offset,5,0x1000)
 ph2=(1,payload_offset+data_offset,sections[11][3],sections[11][3],len(raw)-data_offset,len(raw)-data_offset+sections[14][5],6,0x1000)
 elf[52:116]=struct.pack('<8I',*ph1)+struct.pack('<8I',*ph2)
 assert elf[payload_offset:payload_offset+len(raw)]==raw
 target=work/f'bank{bank}-analysis-only.elf';target.write_bytes(elf)
 (work/f'bank{bank}-symbols.json').write_text(json.dumps(symbols,indent=2)+'\n')
 reports.append(dict(bank=bank,source=str(p),source_sha256=hashlib.sha256(raw).hexdigest(),analysis_elf=str(target),analysis_sha256=hashlib.sha256(elf).hexdigest(),embedded_metadata_offset=hex(embedded),load_base=hex(text_base),raw_bytes_preserved=True,symbols=len(symbols),note='Synthetic ELF for static analysis only. Original raw bytes unchanged; unavailable debug/comment sections omitted.'))
print(json.dumps(reports,indent=2))
(work/'reconstruction.json').write_text(json.dumps(reports,indent=2)+'\n')
