
void GPIO_OverCurrentISR(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  GPIO_read();
  uVar2 = uRam80129adc;
  uVar1 = uRam80129ad8;
  iVar3 = *piRam80129ad0;
  *puRam80129ad4 = 1;
  callout_reset(uVar1,iVar3 / 2,uVar2,0);
  return;
}
