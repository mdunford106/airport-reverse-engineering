
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Force_Fan_Init(int arg0)

{
  undefined4 *puVar1;
  int *piVar2;
  void *arg0_00;
  int iVar3;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;

  piVar2 = piRam80128d98;
  puVar1 = puRam80128d90;
  arg0_00 = (void *)*puRam80128d90;
  iVar3 = -1;
  if (arg0_00 != (void *)0x0) {
    if (*piRam80128d94 == 0xc) {
      *piRam80128d98 = 100;
    }
    uStack_3c = 0;
    uStack_38 = 0x10;
    iproc_pwmc_config(arg0_00,&uStack_3c);
    delay(1);
    iStack_30 = *piVar2;
    uStack_38 = 2;
    iproc_pwmc_config((void *)*puVar1,&uStack_3c);
    delay(1);
    iVar3 = *piVar2 * arg0;
    iStack_34 = ((int)((ulonglong)((longlong)iRam80128d9c * (longlong)iVar3) >> 0x20) + iVar3 >> 7)
                - (iVar3 >> 0x1f);
    uStack_38 = 1;
    iproc_pwmc_config((void *)*puVar1,&uStack_3c);
    delay(1);
    uStack_38 = 4;
    uStack_2c = 1;
    iproc_pwmc_config((void *)*puVar1,&uStack_3c);
    delay(1);
    uStack_38 = 8;
    iVar3 = iproc_pwmc_config((void *)*puVar1,&uStack_3c);
  }
  return iVar3;
}
