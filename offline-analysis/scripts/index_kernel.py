"""Inventory and compare symbol-bounded bytes; branch matches are candidates."""
import os
from pathlib import Path
import json,struct,hashlib,csv,sys,collections
root=Path(sys.argv[1]);work=Path(sys.argv[2]);src=(Path(os.environ.get('AIRPORT_FIRMWARE_DIR', str(Path.home()/'airport-research/firmware')))/'netbsd-analysis')
inventories=[];calls=[]
for bank in (0,1):
 raw=(src/f'netbsd-flash{bank}.bin').read_bytes();sy=json.loads((work/f'bank{bank}-symbols.json').read_text());funcs=sorted([s for s in sy if s['type']==2 and s['size']>0 and s['section']==1],key=lambda s:s['address']);byaddr={s['address']:s['name'] for s in funcs};seen=collections.Counter();items={}
 for f in funcs:
  name=f['name'];seen[name]+=1;key=f'{name}#{seen[name]}';off=f['address']-0x80100000;body=raw[off:off+f['size']]
  assert len(body)==f['size']
  items[key]={**f,'sha256':hashlib.sha256(body).hexdigest()}
  for i in range(0,len(body)-3,4):
   w=struct.unpack_from('<I',body,i)[0]
   if w&0x0f000000!=0x0b000000 or w>>28==15:continue
   delta=w&0xffffff
   if delta&0x800000:delta-=0x1000000
   target=f['address']+i+8+delta*4
   if target in byaddr:calls.append(dict(bank=bank,caller=name,site=hex(f['address']+i),callee=byaddr[target],target=hex(target),evidence='ARM BL encoding within function symbol; confirm code/data classification'))
 inventories.append(items)
with (root/'reports/function-comparison.csv').open('w') as out:
 fields=['name','bank0_address','bank1_address','bank0_size','bank1_size','status'];w=csv.DictWriter(out,fields);w.writeheader();counts=collections.Counter()
 for key in sorted(set(inventories[0])|set(inventories[1])):
  a=inventories[0].get(key);b=inventories[1].get(key);status='bank0_only' if b is None else 'bank1_only' if a is None else 'identical_bytes' if a['sha256']==b['sha256'] else 'different_bytes';counts[status]+=1
  w.writerow(dict(name=key,bank0_address=hex(a['address']) if a else '',bank1_address=hex(b['address']) if b else '',bank0_size=a['size'] if a else '',bank1_size=b['size'] if b else '',status=status))
(root/'reports/direct-call-candidates.json').write_text(json.dumps(calls,indent=2)+'\n')
(root/'reports/comparison-summary.json').write_text(json.dumps(dict(counts=counts,note='Different bytes can result solely from changed addresses or literals. Duplicate symbol names paired by ascending address, not guaranteed identity.'),indent=2)+'\n')
# Selected symbol-backed data structures and defaults, with raw bytes and pointer names.
sy=json.loads((work/'bank0-symbols.json').read_text());raw=(src/'netbsd-flash0.bin').read_bytes();names={}
for s in sy:
 if s['section'] not in (0,0xfff1,0xfff2):names.setdefault(s['address'],[]).append(s['name'])
wanted={'applgpio_cdevsw','applfan_cdevsw','gpio_fileops','applfan_pwm_period','g_override_fan','Ts','g_disabled','min_fan_duty_cycle','EMC141X_TEMP_REGS','EMC141X_TEMP_LOW_REGS','emc141x_compats','GPIO_Board_Revision'}
data=[]
for s in sy:
 if s['name'] not in wanted:continue
 off=s['address']-0x80100000;body=raw[off:off+s['size']];words=[]
 for i in range(0,len(body)-3,4):
  v=struct.unpack_from('<I',body,i)[0];words.append(dict(offset=i,value=hex(v),symbols=names.get(v,[])))
 data.append(dict(name=s['name'],address=hex(s['address']),hex_bytes=body.hex(),words=words))
(root/'reports/data-tables.json').write_text(json.dumps(data,indent=2)+'\n')
print(dict(counts));print('Direct call candidates:',len(calls))
