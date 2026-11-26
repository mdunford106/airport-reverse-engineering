# AirPort J28: offline driver and thermal findings

Analysis date: 2026-11-25. This pass extends the bank0 fan, temperature, and GPIO investigation into both kernels, the management callbacks, thermal policy, and disk power management. All operations were static analysis on local files. No extracted firmware was run, no device was contacted, and no flash or Git operation occurred.

## What is now established

- The fan interface is PWM control, not an RPM target interface. Its five-word payload and six request codes are decoded below.
- The temperature helper returns tenths of a degree Celsius, narrowed to 16 bits. Sensor fault sentinels can pass its validity checks.
- Logical GPIO 6 controls HDD power with active-low enable. Userspace exposes the input bit as `DiskHasSpunDown`; it is a power-state indicator, not a direct measurement of platter motion.
- Logical GPIO 7 is registered to the named fan tachometer interrupt routine. The eight-byte GPIO interface does not imply 64 ordinary pins: bit 63 is synthesized from a separate status register.
- The kernel runs a periodic thermal controller, including fan control, virtual temperature models, fault detection, and radio throttling. A one-shot fan setting is not a substitute for that policy.
- Bank0 adds PCIe suspend/resume coordination around HDD power gating. The corresponding bank1 registration directly uses the GPIO power callback.

## Provenance and method

The raw bank0 kernel SHA-256 is `88204bdeaef30658c7e50d32d9dfc70e88c434940a56afdcdbace8e998f558bd`; bank1 is `daf950b241576ae06ce625ba852489b070f40c3ebbf71dc074d767ebd81dd4ba`. The bank0 multicall hash remains `7a1e5fae541f8fd112d98f261b18eb3ac3ac1c8be02e3223660d5b1b7cc2e05b`.

Both raw kernels contain ARM32 ELF symbol metadata at file offset `0x497e9c`. Its load address, allocated sections, and data/BSS boundary support the mapping `virtual address = raw offset + 0x80100000`. Reconstructed **analysis-only** ELF wrappers retain every original payload byte and attach the recovered metadata. Missing non-allocated debug/comment sections are omitted, rather than invented. The wrappers are neither original boot files nor deployment artifacts.

Ghidra projects are isolated under this workspace's `work/` directory. The original GUI project was untouched. Function bodies are bounded using symbol sizes. Explicit unconditional branches to other named function entries are recorded as tail calls; `panic` is marked non-returning. Selected prototypes are analyst annotations, not recovered C declarations. These adjustments eliminate the earlier accidental inclusion of unrelated routines and literal pools in some exports.

The evidence includes C-like exports, bounded ARM instruction listings, literal values, symbol-backed data tables, input hashes, and validation results. Decompiler output still requires interpretation: completion alone is not proof that every inferred type or expression is correct.

## Device-to-driver connections

The UFS1 inodes and the kernel character-device table agree in **both** banks:

| Device | Inode | Encoded device | Major/minor | Kernel switch |
|---|---:|---|---|---|
| `/dev/applgpio0` | 1068 | `0x9600` | 150/0 | `applgpio_cdevsw` |
| `/dev/applfan0` | 1069 | `0xd300` | 211/0 | `applfan_cdevsw` |
| `/dev/sysmon` | 181 | `0x6500` | 101/0 | `sysmon_cdevsw` |

`applgpio_cdevsw` opens through `gpio_open`, which creates an eight-byte per-open mask and clones a descriptor using `gpio_fileops`. That file-operations table contains `gpio_read`, `gpio_write`, and `gpio_ioctl`. This resolves the earlier uncertainty about whether the generic-looking GPIO handler belongs to the Apple device.

Evidence: `reports/device-driver-links.json`, `reports/data-tables.json`, and the `gpio_open` export. Sleuth Kit reports device-number words as invalid data-block addresses for the two Apple nodes; the raw inode fields and matching switch-table entries were checked independently.

## Fan ABI and behavior

Bank0 userspace helper: `0x00268080`; reference: `0x00268098`.
Kernel handler: `applfanpwm_ioctl`, `0x80128da0` in both banks.

| Byte offset | Recovered field |
|---:|---|
| 0 | channel index |
| 4 | polarity/inversion selection |
| 8 | period in nanoseconds |
| 12 | duty interval in nanoseconds |
| 16 | enable flag |

| Request | Recovered operation | Relevant payload field |
|---|---|---|
| `0x40045003` | Return channel count, 4 | separate 4-byte output |
| `0xc0145004` | Set polarity | offset 4 |
| `0xc0145005` | Set period | offset 8 |
| `0xc0145006` | Set duty interval | offset 12 |
| `0xc0145007` | Disable/enable | offset 16 |
| `0xc0145008` | Read channel configuration | all five words |

Operation names in the report and header are analyst-assigned. The binary establishes their behavior; original Apple header spellings were not recovered.

For an ordinary input `x` in 0–255, userspace prepares channel 0, polarity 1, period 100,000 ns, and duty `floor(x * 100000 / 255)` ns. It disables, sets polarity, sets period, sets duty, and enables. That period corresponds to 10 kHz. The driver converts nanoseconds using a stored 1 MHz tick rate, so the effective duty resolution is coarser than 256 distinct settings at a 100-tick period.

The helper accepts `-1` as a special case but skips initializing the duty word before using the payload. It ignores all five ioctl return values. An out-of-range ordinary input returns after opening the descriptor without the normal close path. These are recovered control-flow observations, not an endorsed control sequence.

The kernel thermal path instead calls `Force_Fan_Init` / `Force_Fan_Duty_Cycle`. Its stored `applfan_pwm_period` starts at 200 ticks and becomes 100 for board revision 12. Do not conflate that path with the userspace helper's fixed 100,000 ns request. The driver's `Fan_dcy` sensor reports `Forced_Fan_Duty_Cycle`, not a tachometer measurement.

## Temperature, sensors, and error representation

Bank0 userspace helper `0x00268178` opens `/dev/sysmon` and uses `0xc0204502`. The kernel's `sysmonioctl_envsys` implements this legacy envsys request. Its 32-byte layout is:

`sensor, current, minimum, maximum, average, warning_flags, valid_flags, units` — eight 32-bit words.

The helper scans sensor indices until it finds a valid sensor with units 0. It does **not** select by a sensor description. For a nonzero current value, its conversion is:

`wire_value = trunc_toward_zero((microkelvin - 273150000) / 100000) & 0xffff`

Its caller at `0x00274140` returns two bytes. Registration identifies the management property as `tmpC`. A value of zero also represents several failure/absence paths, so zero alone does not distinguish 0°C from an unsuccessful reading. This helper checks the sensor-valid bit, not all data-validity conditions.

The local `emc141x_refresh` code independently confirms microkelvin scaling. NetBSD's documented envsys ABI provides corroboration for the field/flag names and temperature units: [legacy envsys interface](https://man.netbsd.org/NetBSD-3.1/envsys.4), [sensor API](https://man.netbsd.org/sysmon_envsys.9). Those documents describe upstream interfaces, not Apple's entire modified driver.

The firmware includes an EMC1413/EMC1414-compatible driver with four channels named `T_internal`, `T_external1`, `T_external2`, and `T_external3`. Its register tables are:

| Channel | High-temperature register | Fractional register |
|---:|---|---|
| 0 | `0x00` | `0x29` |
| 1 | `0x01` | `0x10` |
| 2 | `0x23` | `0x24` |
| 3 | `0x2a` | `0x2b` |

Successful reads form `high * 1000000 + 273150000 + ((low * 1000000) >> 8)`. The implemented error paths use 145150000 (−128°C) and 148150000 (−125°C), while setting the sensor state to the same valid-state value used for ordinary readings. The thermal controller separately treats temperature values below 273150000 as bad samples. The userspace `tmpC` path does not perform that same rejection.

The Apple fan driver's `T_hdd` refresh path supplies a fixed 273150000 (0°C) placeholder. This path is not evidence of a real HDD temperature measurement; other firmware temperature paths have not all been excluded. I2C match addresses are candidates accepted by the driver, not confirmation of the populated chip's physical address.

## GPIO and disk power

`GPIO_map_output_pin` accepts logical pins 0–23. `gpio_ioctl` request `0xc0284700` maps the selected output and adds it to the descriptor's output mask. `gpio_write` combines that mask with supplied data; this explains why `twiddle-gpio` writes an eight-byte all-ones value for logical high.

`GPIO_hdd_powerctl` changes bit 6 at GPIO output-register offset `0x64`: argument zero sets bit 6 and prints “down”; nonzero clears bit 6 and prints “up”. `GPIO_Setup` configures pin 6 as an output and initially clears it. Userspace helper `0x00267dec` reads GPIO bit 6 and serializes it under the inline constant string `DiskHasSpunDown`, registered as property `dSpn`.

`GPIO_Setup` registers logical pin 7 with `GPIO_FanTachISR`. The tach code uses a 100-entry timestamp ring; the RPM routine checks sample age and span and computes a value using `3000000 / elapsed_milliseconds`. Pulses per physical revolution have not been validated.

`GPIO_read` returns a low 32-bit GPIO input register at offset `0x60` and synthesizes bit 63 from bit 1 of a separate register at offset `0x22050`. The USB overcurrent timer tests that high/sign bit. Logical bit numbering here is **not** a connector pinout or an electrical-voltage specification.

## Thermal policy

The named `cltmthread` initializes sensor and virtual-temperature records, runs six fan loops and six radio loops, and periodically repeats them. Static defaults include `Ts = 10`, `g_disabled = 0`, `g_override_fan = -1`, and `min_fan_duty_cycle = 57`. These are firmware defaults, not observed live settings.

Fan demand is the maximum of the fan-loop outputs and the minimum-duty floor. Radio output is the minimum of the corresponding radio-loop outputs. Bad-sensor, bad-fan, or over-temperature state forces fan demand to 255. A nonnegative configured fan override is applied **after** that fault substitution. The disabled flag suppresses the regular fan write. This ordering matters when interpreting management settings.

Bad and good sample counters use a greater-than-three threshold. Fan plausibility checks compare measured RPM to 10–50 times the last duty setting; repeated failures set the bad-fan flag. The code can adjust the minimum fan setting downward when its RPM/duty conditions are met. The gain tables, filtering, and virtual-temperature models remain in the exports; they have not been validated against real sensor behavior.

Management callbacks recovered in bank0:

| Property | Behavior |
|---|---|
| `fDCY` | Four-byte setter calls the PWM helper |
| `RPMs` | Four-byte setter copies its input and returns success; no RPM-control action in this callback |
| `dSpn` | Returns `DiskHasSpunDown` from GPIO bit 6 |
| `tmpC` | Returns the two-byte temperature-helper result |
| `TMEn` | Getter/setter invert the `kern.cltm.disabled` value |
| `CLTM` | Getter builds thermal statistics; a `reset_stats` setter uses `kern.cltm.reset_stats` |

This documents registered callbacks, not authorization rules or a tested remote-control protocol.

## Cross-bank storage change

Bank0's `bcm53xx_device_register` marks `bcmpax` unit 2 as `pmf-enabled` and places `bcm53xx_pax2_power_gate` in the `powergating` property for `wd0`. On power-down that wrapper invokes PCIe power management before the HDD GPIO routine; on power-up it raises HDD power first and then resumes PCIe. Bank1 registers `GPIO_hdd_powerctl` directly.

Five named functions are present only in bank0's recovered table: `bcm53xx_pax2_power_gate`, `bcmpax_power_gate`, `bcmpax_suspend`, `bcmpax_resume`, and `bcmpax_configure`. This supports a real storage-power-management change, not merely shifted addresses. It does not prove how either version behaves on this particular physical device.

## Code-derived board register map

`bcm53xx_bootstrap` maps a 2 MiB I/O region at physical `0x18000000` and a separate 1 MiB ARM-core region at `0x19000000`. The CCB attach code uses a subregion beginning at offset zero of the I/O mapping and iterates 44-byte locator records. The compiled table contains 23 candidates; it is not evidence that every candidate is populated or attached.

| Compiled locator | Derived physical base | Size |
|---|---|---|
| `applfan` / `bcmpwm` | `0x18002000` | `0x1000` |
| `applgpio` CCB attachment | `0x18001000` | `0x1000` |
| `bcmi2c` | `0x18009000` | `0x1000` |
| `bcmqspi` | `0x18029000` | `0x1000` |
| `bcmpax` units 0/1/2 | `0x18012000` / `0x18013000` / `0x18014000` | `0x1000` each |
| `bcmusb` | `0x18021000` | `0x2000` |

The GPIO routines discussed above use the CCA parent I/O handle: their input, output, and output-enable accesses are offsets `0x60`, `0x64`, and `0x68` from `0x18000000`. Do not confuse the separate `applgpio` CCB attachment window with these CCA register offsets. The synthetic GPIO bit 63 comes from register `0x18022050`, within the compiled USB window.

`reports/board-map.json` retains all entries and raw interrupt metadata. These addresses follow the firmware's mapping code; no MMIO reads or writes were performed. A Linux device-tree description still requires checking the target kernel's bindings and actual board population.

## Artifacts and validation

- `recovered_abi.h`: analysis-only structures and named request constants; compiled with static size assertions.
- `scripts/decode_abi.py`: offline payload decoders and arithmetic checks. All 256 ordinary fan settings and representative temperature/sentinel values were checked.
- `bank0/`, `bank1/`: 99 and 94 successful C-like exports respectively, with bounded ARM instruction listings. All 193 exports passed completion and listing-bound checks.
- `userspace/`: seven additional management/registration exports.
- `reports/`: input provenance, literal resolutions, device links, global function inventory, branch candidates, comparison evidence, and validation results.
- `run-offline.sh`: timestamped, isolated reconstruction/import/export pipeline. Its end-to-end run completed successfully with the core target set; the latest additions are checked separately by the same export validator.

Global symbol-bounded comparison found 4,897 identical-byte entries, 6,950 differing-byte entries, and five bank0-only entries. Duplicate names are paired by ascending address, so this inventory is a navigation aid rather than a semantic equivalence proof. Of 99 selected named entries, 93 match after normalizing decompiler address/literal references, one common registration function differs, and five exist only in bank0; the raw and normalized evidence are both retained. Branch-encoding candidates are not automatically promoted to confirmed code cross-references.

## Remaining limits

No bootability, timing, interrupt delivery, fan response, board revision, actual sensor population, connector mapping, or electrical characteristic has been measured. Further offline work remains possible on full boot initialization, flash layout/recovery, Ethernet and wireless integration, calibration data, and complete management-protocol behavior. This pass substantially resolves the fan/temperature/GPIO questions; it does not finish an OpenWrt port or certify a hardware-control implementation.
