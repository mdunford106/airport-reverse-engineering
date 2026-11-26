# Bank0 boot memory investigation

Static analysis of the existing bank0 kernel; no firmware execution or hardware access.
Evidence: `boot-bank0/` contains 12 decompiled functions, corresponding ARM
instruction listings, and export-completion manifests. Decompiled prototypes
are inferred and can omit arguments; assembly is authoritative.

## Validated behavior

- `initarm` (0x801371c0) prints four saved `uboot_args` words. This naming
  alone does not identify the bootloader or establish its complete contract.
- Instruction 0x80137254 clears the first byte of `bootargs` with `strb`;
  it does not clear a pointer.
- `bcm53xx_memprobe` (0x801313c8) reads controller offsets 0x10004,
  0x10148, 0x10158, and 0x1015c through the bus-space interface.
  It derives capacity from register bit fields. Live values are unavailable.
- `initarm` replaces a probe result with 0x10000000 bytes when
  `(result >> 20) >= 257`. Results below that threshold remain unchanged.
  This is not proof of installed RAM capacity.
- The boot-memory call receives RAM start 0x80000000 and kernel start
  0x80100000, as verified with 32-bit ARM arithmetic.
- `_end` is 0x816b72d8; its page-rounded end is 0x816b8000.
  The initial kernel span is 5560 pages. Before subsequent allocations,
  the below-kernel extent contains 256 pages.
- `initarm_common` passes virtual bounds 0xc0000000 and 0xf3000000
  to `pmap_bootstrap`; these are not physical RAM bounds.

## Allocator and reservations

`valloc_pages` (0x8012b9d0) forwards five arguments to
`valloc_pages_nozero` (0x8012ba0c), then zeros `page_count << 12` bytes
at the returned virtual address. Its three-argument decompiled prototype
is incomplete.

Allocation records use a 20-byte stride, with physical address at +4,
virtual address at +8, byte length at +12, and attribute bytes at +16/+17.
The allocator searches free extents for sufficient contiguous space,
advances their addresses, reduces their lengths, and updates the free-page
count. Exhaustion calls panic.

A one-time allocation reserves four pages for `kernel_l1pt` when the first
free extent is 16 KiB-aligned and its remaining size exceeds 0x3fff.
The `l1pt_found` flag is set before recursively allocating those pages.
This establishes a 16 KiB-aligned, 16 KiB first-level page table.

The VM initializer requests:
- Four exception stacks (abort, FIQ, IRQ, undefined): one 4 KiB page each.
- Idle and kernel stacks: two pages (8 KiB) each.
- Message buffer: four pages (16 KiB), without zeroing.
- System/vector page: one page (4 KiB), mapped at 0xffff0000.
- Additional translation tables, whose complete allocation map remains open.

The allocator can change attribute value 2 to 1 when the ordinary and
page-table cache-mode globals match for all three tested descriptor classes.
Numeric attribute meanings require further verification.

## Remaining work

Recover the complete reservation map, early entry/argument capture, and
bootloader handoff contract. Validate inferred helper prototypes and mapping
attributes. Compare this boot path with bank1. Installed RAM and live
controller values cannot be established from these static exports.

No flashable image or device-control code is provided.
