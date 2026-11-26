# J28 porting handoff — static evidence only

## Available evidence

The analysis now supplies a recoverable kernel symbol inventory, raw-to-virtual address mapping, board register locator table, fan/GPIO/envsys ABI, EMC141x sensor register tables, and a documented storage-power-management difference between firmware banks. See FINDINGS.md and the linked evidence directories.

## Dependencies a port must preserve or replace

1. **Thermal management:** the fan PWM driver alone is insufficient. The firmware runs sensor filtering, virtual-temperature estimates, fan PI control, radio throttling, fault handling, and tachometer plausibility checks. The exported CLTM routines are the reference implementation to study; their constants are not validated tuning advice for another OS.
2. **GPIO distinction:** pin 6 is the firmware's active-low HDD power enable; pin 7 is registered for fan tach input. The GPIO character interface also contains a synthesized high-bit status. A generic 64-pin GPIO assumption would be wrong.
3. **Storage power sequencing:** bank0 coordinates the PCIe unit-2 PM subtree with HDD power. Merely toggling the power bit omits the new firmware's suspend/resume sequence.
4. **Sensor failures:** the EMC141x driver returns numeric fault sentinels under a valid state. A port needs explicit error propagation, rather than treating all valid-state numbers as temperatures.
5. **Different temperature paths:** `tmpC` takes the first valid temperature-unit sensor, while CLTM selects descriptions and computes virtual temperatures. The fan driver's `T_hdd` value is a placeholder. They must not be merged into a single assumed temperature sensor.
6. **Board enumeration:** the compiled locator table contains possible devices, not a live enumeration. Device-tree nodes, clocks, interrupt bindings, chip variants, and pin multiplexing need their own validation.

## Remaining offline investigations

- Recover full boot memory/reservation layout and the CFE/kernel handoff contract.
- Trace NAND/QSPI flash partitions, boot-bank selection, image authentication/checksums, and recovery flow from code. Current preserved dump boundaries alone are not a deployment specification.
- Continue PCIe/SATA configuration and reset tracing beyond the power-management paths decoded here.
- Trace Ethernet switch/PHY setup and board-specific network parameters; verify which compiled locators attach.
- Identify wireless firmware/calibration dependencies and licensing/reuse constraints from the actual files and sources.
- Reconstruct complete CLTM structure layouts, coefficient tables, and numerical behavior with independent instruction-level checks.
- Trace all management-property dispatch and serialization semantics, including authorization, without sending requests.

## Evidence that needs a physical device eventually

Actual board revision, populated chips, connector pin numbering, electrical levels, tach pulse behavior, cooling response, timing, boot viability, interrupt delivery, and storage integrity after suspend/resume cannot be established from these exports alone.

No flashable image, device-control utility, or untested device tree is included. The executable tools in this package run only host-side static analysis or decode supplied bytes.
