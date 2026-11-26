
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Force_Fan_Duty_Cycle(int arg0)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *arg0_00;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;

  piVar2 = piRam80128c74;
  puVar1 = puRam80128c70;
  arg0_00 = (void *)*puRam80128c70;
  iVar3 = -1;
  if (arg0_00 != (void *)0x0) {
    iStack_28 = *piRam80128c74;
    *piRam80128c78 = arg0;
    uStack_34 = 0;
    uStack_30 = 2;
    iproc_pwmc_config(arg0_00,&uStack_34);
    delay(1);
    iVar3 = *piVar2 * arg0;
    iStack_2c = ((int)((ulonglong)((longlong)iRam80128c7c * (longlong)iVar3) >> 0x20) + iVar3 >> 7)
                - (iVar3 >> 0x1f);
    uStack_30 = 1;
    iVar3 = iproc_pwmc_config((void *)*puVar1,&uStack_34);
  }
  return iVar3;
}
