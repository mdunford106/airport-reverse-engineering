
void bcm53xx_bootstrap(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  ulonglong uVar25;

  puVar24 = puRam8013255c;
  *piRam80132560 = param_1 + 0x300;
  puVar22 = puRam8013256c;
  uVar21 = uRam80132568;
  piVar2 = piRam80132564;
  puVar24 = (undefined4 *)*puVar24;
  *piRam80132564 = param_1;
  *puVar22 = uVar21;
  iVar3 = (*(code *)puVar24[1])(*puVar24,0x18000000,0x200000,0,piVar2);
  piVar2 = piRam80132574;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    panic(uRam801325cc,uRam801325d0,uRam801325d4,iVar3);
  }
  puVar24 = (undefined4 *)*puRam80132570;
  *piRam80132574 = param_1 + 0x200000;
  iVar3 = (*(code *)puVar24[1])(*puVar24,0x19000000,0x100000,0,piVar2);
  piVar2 = piRam80132574;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    panic(uRam801325cc,uRam801325d0,uRam801325d8,iVar3);
  }
  iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  *(int *)(iVar3 + 0x168) = iRam80132578;
  puVar22 = (undefined4 *)*puRam80132570;
  iVar3 = *piVar2;
  puVar23 = puRam8013257c + 5;
  puVar24 = puRam8013257c;
  do {
    uVar21 = *puVar24;
    uVar4 = (*(code *)puVar22[0xb])(*puVar22,iVar3,uVar21);
    if ((uVar4 & 2) == 0) {
      printf(uRam801325c4,puVar22,iVar3,uVar21,uVar4,uVar4 | 2);
      (*(code *)puVar22[0x17])(*puVar22,iVar3,uVar21,uVar4 | 2);
    }
    puVar24 = puVar24 + 1;
  } while (puVar24 != puVar23);
  puVar24 = (undefined4 *)*puRam8013255c;
  iVar3 = *piRam80132564;
  uVar5 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam80132580);
  uVar6 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam80132584);
  uVar7 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam80132588);
  uVar8 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam8013258c);
  uVar9 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam80132590);
  uVar10 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam80132594);
  uVar11 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam80132598);
  uVar12 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam8013259c);
  iVar3 = *piRam80132574;
  puVar24 = (undefined4 *)*puRam80132570;
  uVar13 = (*(code *)puVar24[0xb])(*puVar24,iVar3,8);
  uVar14 = (*(code *)puVar24[0xb])(*puVar24,iVar3,0xc00);
  uVar15 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801325a0);
  uVar4 = uRam801325a8;
  uVar21 = uRam801325a4;
  iVar3 = iRam80132578;
  *(uint *)(iRam80132578 + 0x14) = uRam801325a8;
  *(undefined4 *)(iVar3 + 0x18) = uVar21;
  uVar16 = bcm53xx_value_wrap(uVar5,0x70000000);
  uVar17 = bcm53xx_value_wrap(uVar5,0xff00000);
  uVar5 = uVar5 & 0xfffff;
  if (uVar5 == 0 && uVar16 == 1) {
    uVar17 = uVar17 * uVar4;
  }
  else {
    lVar1 = (ulonglong)uRam801325a8 * (ulonglong)(uVar17 * 0x40000000 + uVar5);
    uVar21 = (undefined4)lVar1;
    iVar3 = ((uVar17 >> 2) + (uint)CARRY4(uVar17 * 0x40000000,uVar5)) * uRam801325a8 +
            (int)((ulonglong)lVar1 >> 0x20);
    uVar25 = CONCAT44(iVar3,uVar21);
    if (1 < uVar16) {
      uVar25 = __udivdi3(CONCAT44(iVar3,uVar21),(ulonglong)uVar16);
    }
    uVar17 = (uint)uVar25 >> 0x1e | (int)(uVar25 >> 0x20) << 2;
  }
  *(uint *)(iRam80132578 + 0x2c) = uVar17;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff000000);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam80132578 + 0x30) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff0000);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam80132578 + 0x34) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff00);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam80132578 + 0x38) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam80132578 + 0x3c) = uVar21;
  uVar4 = bcm53xx_value_wrap(uVar8,0x7000000);
  uVar5 = bcm53xx_value_wrap(uVar7,uRam801325ac);
  uVar7 = uVar7 & 0xfffff;
  if (uVar7 == 0 && uVar4 == 1) {
    uVar5 = *(int *)(iRam80132578 + 0x14) * uVar5;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(iRam80132578 + 0x14) * (ulonglong)(uVar5 * 0x40000000 + uVar7);
    uVar21 = (undefined4)lVar1;
    iVar3 = *(uint *)(iRam80132578 + 0x14) * ((uVar5 >> 2) + (uint)CARRY4(uVar5 * 0x40000000,uVar7))
            + (int)((ulonglong)lVar1 >> 0x20);
    uVar25 = CONCAT44(iVar3,uVar21);
    if (1 < uVar4) {
      uVar25 = __udivdi3(CONCAT44(iVar3,uVar21),(ulonglong)uVar4);
    }
    uVar5 = (uint)uVar25 >> 0x1e | (int)(uVar25 >> 0x20) << 2;
  }
  *(uint *)(iRam80132578 + 0x40) = uVar5;
  uVar21 = bcm53xx_value_wrap(uVar8,0xff0000);
  uVar21 = __aeabi_uidivmod(uVar5,uVar21);
  *(undefined4 *)(iRam80132578 + 0x44) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar8,0xff00);
  uVar21 = __aeabi_uidivmod(uVar5,uVar21);
  *(undefined4 *)(iRam80132578 + 0x48) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar8,0xff);
  uVar21 = __aeabi_uidivmod(uVar5,uVar21);
  *(undefined4 *)(iRam80132578 + 0x4c) = uVar21;
  uVar6 = bcm53xx_value_wrap(uVar9,0xff0000);
  uVar6 = __aeabi_uidivmod(uVar5,uVar6);
  *(undefined4 *)(iRam80132578 + 0x50) = uVar6;
  iVar18 = bcm53xx_value_wrap(uVar10,0x7000);
  iVar19 = bcm53xx_value_wrap(uVar10,uRam801325b0);
  iVar20 = __aeabi_uidivmod(uVar21,iVar18);
  iVar3 = iRam80132578;
  iVar20 = iVar20 * iVar19;
  if (iVar20 != iRam801325b4) {
    iVar19 = __aeabi_uidivmod(iRam801325b4,uVar21);
    (*(code *)((undefined4 *)*puRam8013255c)[0x17])
              (*(undefined4 *)*puRam8013255c,*piRam80132564,uRam801325b8,uRam801325bc);
    (*(code *)((undefined4 *)*puRam8013255c)[0x17])
              (*(undefined4 *)*puRam8013255c,*piRam80132564,uRam80132594,
               uVar10 & 0xfffff003 | iVar19 * iVar18 * 4);
    (*(code *)((undefined4 *)*puRam8013255c)[0x17])
              (*(undefined4 *)*puRam8013255c,*piRam80132564,uRam801325b8,0);
    iVar20 = __aeabi_uidivmod(*(undefined4 *)(iVar3 + 0x4c),iVar18);
    iVar20 = iVar20 * iVar19 * iVar18;
  }
  iVar18 = iRam80132578;
  if ((uVar11 & 0x2000) == 0) {
    iVar19 = 5;
  }
  else {
    iVar19 = 1;
  }
  *(uint *)(iRam80132578 + 0x20) = (uVar11 & uRam801325c0) >> 0xe;
  uVar21 = *(undefined4 *)(iVar18 + 0x38);
  *(int *)(iVar3 + 0x54) = iVar20;
  iVar18 = __aeabi_uidivmod(uVar21,(((uVar12 & 0x700) >> 8) - iVar19 & 7) + 1);
  uVar21 = __aeabi_uidivmod((uVar12 & 0xff) * iVar18,((uVar12 & 0x3800) >> 0xb) + 2);
  uVar4 = (uVar13 & 0x70000) >> 0x10;
  *(undefined4 *)(iRam80132578 + 0x1c) = uVar21;
  if (uVar4 == 0) {
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x14);
  }
  else if (uVar4 == 1) {
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x18) >> 2;
    *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x18);
  }
  else {
    uVar5 = bcm53xx_value_wrap(uVar14,0x7000000);
    uVar7 = bcm53xx_value_wrap(uVar14,uRam801325c8);
    uVar15 = uVar15 & 0xfffff;
    if (uVar4 == 6) {
      uVar21 = 4;
    }
    else {
      uVar21 = 2;
    }
    if (uVar15 == 0 && uVar5 == 1) {
      uVar7 = *(int *)(iRam80132578 + 0x14) * uVar7;
    }
    else {
      lVar1 = (ulonglong)*(uint *)(iRam80132578 + 0x14) * (ulonglong)(uVar7 * 0x40000000 + uVar15);
      uVar6 = (undefined4)lVar1;
      iVar3 = *(uint *)(iRam80132578 + 0x14) *
              ((uVar7 >> 2) + (uint)CARRY4(uVar7 * 0x40000000,uVar15)) +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar25 = CONCAT44(iVar3,uVar6);
      if (1 < uVar5) {
        uVar25 = __udivdi3(CONCAT44(iVar3,uVar6),(ulonglong)uVar5);
      }
      uVar7 = (uint)uVar25 >> 0x1e | (int)(uVar25 >> 0x20) << 2;
    }
    uVar4 = __aeabi_uidivmod(uVar7,uVar21);
    iVar3 = iRam80132578;
    *(uint *)(iRam80132578 + 0x28) = uVar4 >> 2;
    *(uint *)(iVar3 + 0x24) = uVar4;
  }
  iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x128) = *(undefined4 *)(iRam80132578 + 0x24);
  *(undefined4 *)(iVar3 + 300) = 0;
  arml2cc_init(*puRam80132570,*piRam80132574,0x22000);
  return;
}
