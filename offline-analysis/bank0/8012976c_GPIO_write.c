
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GPIO_write(ulonglong arg0,ulonglong arg1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;

  puVar2 = puRam801297d8;
  puVar1 = puRam801297d4;
  uVar3 = (*(code *)((undefined4 *)*puRam801297d4)[0xb])
                    (*(undefined4 *)*puRam801297d4,*puRam801297d8,100,(int)(arg1 >> 0x20));
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,100,(uint)arg0 & (uint)arg1 | uVar3 & ~(uint)arg0);
  return;
}
