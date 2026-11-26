import os
from pathlib import Path
import json,struct,sys
root=Path(sys.argv[1]);work=Path(sys.argv[2]);src=Path(os.environ.get('AIRPORT_FIRMWARE_DIR', str(Path.home()/'airport-research/firmware')))
rows=[]
for bank in (0,1):
 fs=(src/f'filesystem-analysis/bank{bank}-ffs-candidate-005616e0.bin').read_bytes();raw=(src/f'netbsd-analysis/netbsd-flash{bank}.bin').read_bytes();sy=json.loads((work/f'bank{bank}-symbols.json').read_text());byname={s['name']:s for s in sy};byaddr={s['address']:s['name'] for s in sy if s['name'] and s['section'] not in (0,0xfff1)}
 table=byname['cdevsw0']['address']-0x80100000
 for inode,name,expected in [(1068,'/dev/applgpio0','applgpio_cdevsw'),(1069,'/dev/applfan0','applfan_cdevsw'),(181,'/dev/sysmon','sysmon_cdevsw')]:
  # Group 0 inode table: fragment 56, 512-byte fragments, 128-byte UFS1 inode.
  off=56*512+inode*128;mode=struct.unpack_from('<H',fs,off)[0];dev=struct.unpack_from('<I',fs,off+40)[0]
  assert mode&0xf000==0x2000
  major=(dev>>8)&0xfff;minor=(dev&255)|((dev>>12)&0xfff00)
  ptr=struct.unpack_from('<I',raw,table+major*4)[0];assert ptr==byname[expected]['address']
  row=dict(bank=bank,path=name,inode=inode,inode_file_offset=hex(off),mode=oct(mode),raw_device_number=hex(dev),major=major,minor=minor,cdevsw_symbol=expected,cdevsw_address=hex(ptr))
  row['operations']=[]
  for i in range(0,byname[expected]['size']-3,4):
   value=struct.unpack_from('<I',raw,ptr-0x80100000+i)[0]
   row['operations'].append(dict(offset=i,value=hex(value),symbol=byaddr.get(value)))
  rows.append(row)
(root/'reports/device-driver-links.json').write_text(json.dumps(rows,indent=2)+'\n')
print('Verified all six filesystem-device -> kernel-switch links.')
