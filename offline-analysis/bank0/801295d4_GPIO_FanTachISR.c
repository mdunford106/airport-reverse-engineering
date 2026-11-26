
void GPIO_FanTachISR(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar3 = iRam80129644;
  piVar1 = piRam8012963c;
  iVar2 = *piRam8012963c;
  *piRam80129640 = iVar2;
  microtime(iVar2 * 0x10 + iVar3);
  iVar3 = *piVar1 + 1;
  *piVar1 = iVar3 + ((int)((longlong)iRam80129648 * (longlong)iVar3 >> 0x25) - (iVar3 >> 0x1f)) *
                    -100;
  return;
}
