
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong GPIO_read(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;

  puVar2 = puRam80129878;
  puVar1 = puRam80129874;
  uVar3 = (*(code *)((undefined4 *)*puRam80129874)[0xb])
                    (*(undefined4 *)*puRam80129874,*puRam80129878,0x60);
  uVar4 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam8012987c);
  return CONCAT44((uVar4 & 2) << 0x1e,uVar3);
}
