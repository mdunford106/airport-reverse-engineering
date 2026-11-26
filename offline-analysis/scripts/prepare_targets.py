from pathlib import Path
import json,sys
work=Path(sys.argv[1]);out=Path(sys.argv[2]);(out/'reports').mkdir(parents=True,exist_ok=True)
extra={'bcm53xx_bootstrap','bcmccb_mainbus_attach','sysmonioctl_envsys','sysmonioctl','sysmon_envsys_find_40','sysctl_cltm_setup','ContCompute','reset_cltm_stats','bcm53xx_pax2_power_gate','gpiocca_attach','gpiocca_intr','gpiotimer','usbovercurrenttimer','bcmcca_mainbus_attach','bcmcca_print','bcm53xx_device_register','bcmpax_power_gate','bcmpax_suspend','bcmpax_resume','bcmpax_configure'}
prefixes=('applfan','gpio_','GPIO_','iproc_pwmc','pwm_','acltm','cltm','Force_Fan','Set_Fan','emc141x')
for bank in (0,1):
 sy=json.loads((work/f'bank{bank}-symbols.json').read_text());seen=set();allf=[];targets=[]
 for s in sy:
  if s['type']!=2 or s['section']!=1 or s['size']<=0 or s['address'] in seen:continue
  seen.add(s['address']);allf.append(s)
  if s['name'].startswith(prefixes) or s['name'] in extra:targets.append(s)
 for name,items in [('targets',targets),('functions',allf)]:
  (out/'reports'/f'bank{bank}-{name}.tsv').write_text(''.join(f"{s['address']:x}\t{s['size']}\t{s['name']}\n" for s in items))
 print(f'Bank {bank}: {len(targets)} targets / {len(allf)} unique function entries')
