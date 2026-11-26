
void GPIO_OverCurrentISR(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  GPIO_read();
  uVar2 = uRam80129950;
  uVar1 = uRam8012994c;
  iVar3 = *piRam80129944;
  *puRam80129948 = 1;
  callout_reset(uVar1,iVar3 / 2,uVar2,0);
  return;
}
