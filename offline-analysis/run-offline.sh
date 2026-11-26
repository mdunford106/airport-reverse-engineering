#!/bin/bash
set -euo pipefail
umask 077
ROOT="$(cd "$(dirname "$0")" && pwd)"
BASE="$(cd "$ROOT/.." && pwd)"
RUN="$(date +%Y%m%d-%H%M%S)"
WORK="$BASE/analysis-work/kernel-re-runs/$RUN"
RESULT="$ROOT/runs/$RUN"
GHIDRA="${GHIDRA_HEADLESS:-/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless}"
mkdir -p "$WORK/projects" "$RESULT/reports"
python3 "$ROOT/scripts/rebuild_kernel.py" "$WORK" > "$RESULT/reports/reconstruction.json"
python3 "$ROOT/scripts/prepare_targets.py" "$WORK" "$RESULT"
for BANK in 0 1; do
 export GHIDRA_HEADLESS_JAVA_OPTIONS="-Dapplication.settingsdir=$WORK/settings-$BANK -Dapplication.cachedir=$WORK/cache-$BANK"
 "$GHIDRA" "$WORK/projects" "Kernel-bank$BANK" \
  -import "$WORK/bank$BANK-analysis-only.elf" -noanalysis \
  -scriptPath "$ROOT/scripts" \
  -postScript KernelExport.java "$RESULT/reports/bank$BANK-targets.tsv" "$RESULT/bank$BANK" "$RESULT/reports/bank$BANK-functions.tsv" \
  -log "$RESULT/reports/bank$BANK-ghidra.log" > "$RESULT/reports/bank$BANK-console.log" 2>&1
 if rg -q 'ERROR|completed=false|Function body conflict|Function seed conflict' "$RESULT/reports/bank$BANK-console.log"; then
  echo "Review required: $RESULT/reports/bank$BANK-console.log"
  exit 1
 fi
done
python3 "$ROOT/scripts/resolve_literals.py" "$RESULT" "$WORK"
python3 "$ROOT/scripts/index_kernel.py" "$RESULT" "$WORK"
python3 "$ROOT/scripts/verify_device_links.py" "$RESULT" "$WORK"
python3 "$ROOT/scripts/extract_board_map.py" "$RESULT" "$WORK"
python3 "$ROOT/scripts/compare_exports.py" "$RESULT"
python3 "$ROOT/scripts/validate_exports.py" "$RESULT"
python3 "$ROOT/scripts/decode_abi.py" --self-check
printf 'Offline results: %s\n' "$RESULT"
