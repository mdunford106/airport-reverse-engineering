# Offline AirPort J28 research

Start with [FINDINGS.md](FINDINGS.md). The repository-root RESEARCH.md and COMMAND_MAP.md incorporate this pass. [PORTING-NOTES.md](PORTING-NOTES.md) separates the recovered interfaces from remaining porting work.

## Reproduce the kernel analysis

Requirements: Python 3, Ghidra 12.2 with a compatible JDK, Bash, and ripgrep. The verified host used macOS, Homebrew Ghidra, and JDK 25. No third-party Python packages are required.

The firmware source directory must contain the previously extracted files:

- `netbsd-analysis/netbsd-flash0.bin` and `netbsd-flash1.bin`
- `filesystem-analysis/bank0-ffs-candidate-005616e0.bin` and bank1 equivalent

These binary inputs are not in Git. By default the scripts read `~/airport-research/firmware`. To use another directory, set `AIRPORT_FIRMWARE_DIR`.

```sh
AIRPORT_FIRMWARE_DIR=/path/to/firmware bash offline-analysis/run-offline.sh
```

Set `GHIDRA_HEADLESS` if the launcher is not at `/opt/homebrew/opt/ghidra/libexec/support/analyzeHeadless`.

Each run creates a fresh analysis-only ELF wrapper, isolated Ghidra projects/settings, and timestamped result files. Scratch lives in `analysis-work/kernel-re-runs/`; outputs live in `offline-analysis/runs/`. Both are ignored by Git. It never opens device nodes, runs ARM firmware, updates an existing GUI project, or writes the source dumps.

The runner reconstructs symbol metadata, exports selected functions, resolves literals, compares both banks, verifies device-to-driver links, extracts the board map, and checks the resulting exports. A successful shell exit alone is insufficient for Ghidra scripts; the runner also checks script logs and expected export counts.

## Committed evidence

- `bank0/` and `bank1/`: selected C-like exports and bounded instruction listings.
- `userspace/`: additional bank0 management callbacks from the earlier isolated multicall project.
- `reports/`: symbol/byte comparisons, literal mappings, ABI/device evidence, and validation status.
- `recovered_abi.h`: local little-endian ABI descriptions, with compile-time sizes. No hardware-control code.
- `scripts/decode_abi.py`: offline decoding of supplied hexadecimal payloads and temperature arithmetic.

Raw firmware, Ghidra databases, repeated console logs, normalized duplicate exports, and the large generated branch-candidate database are deliberately not committed. Reproduction regenerates the relevant evidence. `${AIRPORT_FIRMWARE_DIR}` and `${ANALYSIS_WORK_DIR}` in committed provenance JSON are portable path placeholders.

The userspace exports were generated from a separately analyzed bank0 multicall project. `AirportManagementExport.java` can reproduce them in that project with the usual Ghidra post-script output-directory argument; the kernel runner does not recreate the earlier multicall analysis.

## Interpretation

Decompiled C is an analysis artifact, not recovered original source or a compilable driver. Analyst-added prototypes, function-size bounds, and logged tail-call overrides improve readability. The raw listings and literal reports remain the basis for checking conclusions. Matching normalized exports are supporting evidence, not formal proof of behavioral equivalence.
