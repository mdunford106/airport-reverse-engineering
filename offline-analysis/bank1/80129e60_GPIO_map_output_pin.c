
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int GPIO_map_output_pin(uint arg0)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;

  puVar2 = puRam80129f78;
  puVar1 = puRam80129f74;
  if (arg0 < 0x12) {
    uVar3 = (*(code *)((undefined4 *)*puRam80129f74)[0xb])
                      (*(undefined4 *)*puRam80129f74,*puRam80129f78,uRam80129f7c);
    uVar4 = 1 << (arg0 & 0xff);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129f7c,uVar3 | uVar4);
  }
  else if (arg0 - 0x12 < 3) {
    uVar4 = 1 << (arg0 & 0xff);
  }
  else {
    if (2 < arg0 - 0x15) {
      return 0x16;
    }
    uVar3 = (*(code *)((undefined4 *)*puRam80129f74)[0xb])
                      (*(undefined4 *)*puRam80129f74,*puRam80129f78,uRam80129f7c);
    uVar4 = 1 << (arg0 & 0xff);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129f7c,uVar3 | 1 << (arg0 - 3 & 0xff));
  }
  uVar3 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x68);
  (*(code *)((undefined4 *)*puVar1)[0x17])(*(undefined4 *)*puVar1,*puVar2,0x68,uVar4 | uVar3);
  return 0;
}
