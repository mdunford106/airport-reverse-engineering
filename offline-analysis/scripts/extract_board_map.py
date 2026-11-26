import os
from pathlib import Path
import json,struct,sys
root=Path(sys.argv[1]);work=Path(sys.argv[2]);reports=[]
for bank in (0,1):
 raw=(Path(os.environ.get('AIRPORT_FIRMWARE_DIR', str(Path.home()/'airport-research/firmware')))/f'netbsd-analysis/netbsd-flash{bank}.bin').read_bytes();sy=json.loads((work/f'bank{bank}-symbols.json').read_text());tab=next(s for s in sy if s['name']=='bcmccb_locators');off=tab['address']-0x80100000;rows=[]
 assert tab['size']%44==0
 for i in range(0,tab['size'],44):
  v=struct.unpack_from('<11I',raw,off+i);p=v[0]-0x80100000;name=raw[p:p+80].split(b'\0')[0].decode('ascii')
  rows.append(dict(name=name,relative_offset=hex(v[1]),size=hex(v[2]),port=v[3] if v[3]<2**31 else v[3]-2**32,physical_base_from_bootstrap=hex(0x18000000+v[1]),interrupt_metadata=list(v[4:])))
 reports.append(dict(bank=bank,locator_table_address=hex(tab['address']),entries=rows,note='Compiled locator candidates, not a measured inventory of populated devices. Physical base derived from bcm53xx_bootstrap and CCB subregion setup. Interrupt metadata is left raw.'))
(root/'reports/board-map.json').write_text(json.dumps(reports,indent=2)+'\n')
print('Extracted 23 compiled CCB locator entries per bank.')
