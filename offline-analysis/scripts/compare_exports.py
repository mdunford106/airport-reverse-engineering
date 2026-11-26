from pathlib import Path
import json,re,difflib,sys
root=Path(sys.argv[1]);groups=[]
for bank in (0,1):
 lits=json.loads((root/'reports'/f'bank{bank}-literal-values.json').read_text());group={};dest=root/f'bank{bank}'/'normalized';dest.mkdir(exist_ok=True)
 for p in (root/f'bank{bank}').glob('*.c'):
  entry=int(p.name[:8],16);name=p.name[9:];text=p.read_text();values={int(x['literal_address'],16):x for x in lits.get(p.name,[])}
  def resolve(m):
   addr=int(m.group(1),16);v=values.get(addr)
   if not v:return m.group(0)
   if v.get('symbol_names'):return 'REF_'+sorted(v['symbol_names'])[0]
   if v.get('string'):return 'STRING_'+json.dumps(v['string'])
   return 'VALUE_'+v['value']
  text=re.sub(r'(?:_UNK_|DAT_|[A-Za-z]+Ram)([0-9a-f]{8})',resolve,text)
  text=re.sub(r'LAB_([0-9a-f]{8})',lambda m:'LABEL_'+hex(int(m.group(1),16)-entry),text)
  text=re.sub(r'/\*.*?\*/','',text,flags=re.S);text='\n'.join(x.rstrip() for x in text.splitlines() if x.strip())+'\n'
  group.setdefault(name,[]).append((p.name,text));(dest/p.name).write_text('/* Comparison-only normalization; not compilable recovered source. */\n'+text)
 groups.append(group)
summary=[];diffs=[]
for name in sorted(set(groups[0])|set(groups[1])):
 a=sorted(groups[0].get(name,[]));b=sorted(groups[1].get(name,[]))
 for i in range(max(len(a),len(b))):
  left=a[i] if i<len(a) else ('missing','');right=b[i] if i<len(b) else ('missing','')
  equal=left[1]==right[1];summary.append(dict(name=name,bank0=left[0],bank1=right[0],normalized_text_equal=equal))
  if not equal:diffs.extend(difflib.unified_diff(left[1].splitlines(True),right[1].splitlines(True),fromfile=left[0],tofile=right[0]))
(root/'reports/export-comparison.json').write_text(json.dumps(summary,indent=2)+'\n')
(root/'reports/export-differences.patch').write_text(''.join(diffs))
print('Normalized text equal:',sum(x['normalized_text_equal'] for x in summary),'of',len(summary),'(not a proof of semantic equivalence)')
