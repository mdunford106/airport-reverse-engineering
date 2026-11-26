
void applfan_refresh(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;

  uVar3 = uRam80128864;
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == 1) {
    uVar1 = GPIO_FanTachISR_RPMs();
    iVar2 = *(int *)(param_2 + 0xc);
    uVar3 = extraout_r2;
    if (iVar2 == 0) {
      uVar3 = uRam80128864;
    }
    *(undefined4 *)(param_2 + 0x10) = 10;
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 10;
      *(undefined4 *)(param_2 + 0x20) = uVar3;
      return;
    }
  }
  else if (iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x10) = 10;
    *(undefined4 *)(param_2 + 0x20) = uVar3;
    return;
  }
  if (iVar2 == 10) {
    uVar3 = *puRam80128868;
    *(undefined4 *)(param_2 + 0x10) = 10;
    *(undefined4 *)(param_2 + 0x20) = uVar3;
  }
  return;
}
