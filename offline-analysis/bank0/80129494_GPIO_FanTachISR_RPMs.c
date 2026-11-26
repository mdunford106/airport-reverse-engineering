
longlong GPIO_FanTachISR_RPMs(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;

  microtime(&uStack_30);
  iVar10 = *(int *)(*piRam801295c0 * 0x10 + iRam801295c4 + 8);
  puVar1 = (uint *)(*piRam801295c0 * 0x10 + iRam801295c4);
  uVar6 = *puVar1;
  uVar8 = puVar1[1];
  uVar2 = uStack_30 - uVar6;
  uVar4 = iStack_2c - (uVar8 + (uStack_30 < uVar6));
  if (iStack_28 - iVar10 < 0) {
    bVar11 = uVar2 != 0;
    uVar2 = uVar2 - 1;
    uVar4 = (uVar4 - 1) + (uint)bVar11;
  }
  if ((uVar4 == 0) && (uVar2 < 4)) {
    uVar4 = *piRam801295c8 * 0x10;
    uVar2 = *(uint *)(uVar4 + iRam801295c4);
    uVar7 = uVar6 - uVar2;
    iVar9 = uVar8 - (((uint *)(uVar4 + iRam801295c4))[1] + (uint)(uVar6 < uVar2));
    iVar10 = iVar10 - *(int *)(uVar4 + iRam801295c4 + 8);
    if (iVar10 < 0) {
      bVar11 = uVar7 != 0;
      uVar7 = uVar7 - 1;
      iVar9 = iVar9 + -1 + (uint)bVar11;
      iVar10 = iVar10 + 1000000;
    }
    if ((iVar9 == 0) && (uVar7 < 9)) {
      lVar12 = (ulonglong)uRam801295cc * (ulonglong)uVar7 + (longlong)iVar10;
      uVar3 = (undefined4)lVar12;
      uVar5 = (undefined4)((ulonglong)lVar12 >> 0x20);
      if (lVar12 == 0) {
        uVar3 = 0xffffffff;
      }
      if (lVar12 == 0) {
        return CONCAT44(uVar5,uVar3);
      }
      lVar12 = __divdi3(CONCAT44(uVar5,uVar3),1000);
      lVar12 = __divdi3((ulonglong)uRam801295d0,lVar12);
      return lVar12;
    }
  }
  return (ulonglong)uVar4 << 0x20;
}
