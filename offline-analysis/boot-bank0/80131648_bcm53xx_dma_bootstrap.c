
void bcm53xx_dma_bootstrap(uint param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = iRam80131698;
  iVar1 = iRam80131694;
  if (param_1 < 0x10000001) {
    *(uint *)(iRam80131690 + 8) = param_1;
    *(undefined4 *)(iVar1 + 4) = 1;
    iVar1 = iRam8013169c;
    *(uint *)(iRam80131698 + 8) = param_1;
    *(undefined4 *)(iVar1 + 4) = 1;
    return;
  }
  *(uint *)(iRam80131690 + 0x18) = param_1 + 0xf0000000;
  *(uint *)(iVar2 + 0x18) = param_1 + 0xf0000000;
  return;
}
