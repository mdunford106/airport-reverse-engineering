from pathlib import Path
import sys,json,re
root=Path(sys.argv[1]);summary=[]
for bank in (0,1):
 targets=(root/'reports'/f'bank{bank}-targets.tsv').read_text().splitlines();manifest=(root/f'bank{bank}'/'manifest.txt').read_text();success=manifest.count('completed=true')
 assert success==len(targets),(bank,success,len(targets))
 assert 'completed=false' not in manifest
 for row in targets:
  addr,size,name=row.split('\t');prefix=f'{int(addr,16):08x}_';cs=list((root/f'bank{bank}').glob(prefix+'*.c'));asm=list((root/f'bank{bank}').glob(prefix+'*.asm.txt'))
  assert len(cs)==1 and cs[0].stat().st_size>30
  assert len(asm)==1
  lines=asm[0].read_text().splitlines();assert lines
  assert len(lines)>1 or int(size)<=8,(name,'suspiciously short listing')
  start=int(addr,16);end=start+int(size)
  assert all(start<=int(x.split()[0],16)<end for x in lines),(name,'listing out of bounds')
 summary.append(dict(bank=bank,targets=len(targets),successful_exports=success,instruction_listing_bounds_checked=True))
(root/'reports/export-validation.json').write_text(json.dumps(summary,indent=2)+'\n')
print('Verified decompilation completion and instruction-listing coverage:',summary)
