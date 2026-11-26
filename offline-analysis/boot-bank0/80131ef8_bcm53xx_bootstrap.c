
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

  puVar24 = puRam801326a0;
  *piRam801326a4 = param_1 + 0x300;
  puVar22 = puRam801326b0;
  uVar21 = uRam801326ac;
  piVar2 = piRam801326a8;
  puVar24 = (undefined4 *)*puVar24;
  *piRam801326a8 = param_1;
  *puVar22 = uVar21;
  iVar3 = (*(code *)puVar24[1])(*puVar24,0x18000000,0x200000,0,piVar2);
  piVar2 = piRam801326b8;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    panic(uRam80132710,uRam80132714,uRam80132718,iVar3);
  }
  puVar24 = (undefined4 *)*puRam801326b4;
  *piRam801326b8 = param_1 + 0x200000;
  iVar3 = (*(code *)puVar24[1])(*puVar24,0x19000000,0x100000,0,piVar2);
  piVar2 = piRam801326b8;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    panic(uRam80132710,uRam80132714,uRam8013271c,iVar3);
  }
  iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  *(int *)(iVar3 + 0x168) = iRam801326bc;
  puVar22 = (undefined4 *)*puRam801326b4;
  iVar3 = *piVar2;
  puVar23 = puRam801326c0 + 5;
  puVar24 = puRam801326c0;
  do {
    uVar21 = *puVar24;
    uVar4 = (*(code *)puVar22[0xb])(*puVar22,iVar3,uVar21);
    if ((uVar4 & 2) == 0) {
      printf(uRam80132708,puVar22,iVar3,uVar21,uVar4,uVar4 | 2);
      (*(code *)puVar22[0x17])(*puVar22,iVar3,uVar21,uVar4 | 2);
    }
    puVar24 = puVar24 + 1;
  } while (puVar24 != puVar23);
  puVar24 = (undefined4 *)*puRam801326a0;
  iVar3 = *piRam801326a8;
  uVar5 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326c4);
  uVar6 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326c8);
  uVar7 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326cc);
  uVar8 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326d0);
  uVar9 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326d4);
  uVar10 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326d8);
  uVar11 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326dc);
  uVar12 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326e0);
  iVar3 = *piRam801326b8;
  puVar24 = (undefined4 *)*puRam801326b4;
  uVar13 = (*(code *)puVar24[0xb])(*puVar24,iVar3,8);
  uVar14 = (*(code *)puVar24[0xb])(*puVar24,iVar3,0xc00);
  uVar15 = (*(code *)puVar24[0xb])(*puVar24,iVar3,uRam801326e4);
  uVar4 = uRam801326ec;
  uVar21 = uRam801326e8;
  iVar3 = iRam801326bc;
  *(uint *)(iRam801326bc + 0x14) = uRam801326ec;
  *(undefined4 *)(iVar3 + 0x18) = uVar21;
  uVar16 = bcm53xx_value_wrap(uVar5,0x70000000);
  uVar17 = bcm53xx_value_wrap(uVar5,0xff00000);
  uVar5 = uVar5 & 0xfffff;
  if (uVar5 == 0 && uVar16 == 1) {
    uVar17 = uVar17 * uVar4;
  }
  else {
    lVar1 = (ulonglong)uRam801326ec * (ulonglong)(uVar17 * 0x40000000 + uVar5);
    uVar21 = (undefined4)lVar1;
    iVar3 = ((uVar17 >> 2) + (uint)CARRY4(uVar17 * 0x40000000,uVar5)) * uRam801326ec +
            (int)((ulonglong)lVar1 >> 0x20);
    uVar25 = CONCAT44(iVar3,uVar21);
    if (1 < uVar16) {
      uVar25 = __udivdi3(CONCAT44(iVar3,uVar21),(ulonglong)uVar16);
    }
    uVar17 = (uint)uVar25 >> 0x1e | (int)(uVar25 >> 0x20) << 2;
  }
  *(uint *)(iRam801326bc + 0x2c) = uVar17;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff000000);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam801326bc + 0x30) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff0000);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam801326bc + 0x34) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff00);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam801326bc + 0x38) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar6,0xff);
  uVar21 = __aeabi_uidivmod(uVar17,uVar21);
  *(undefined4 *)(iRam801326bc + 0x3c) = uVar21;
  uVar4 = bcm53xx_value_wrap(uVar8,0x7000000);
  uVar5 = bcm53xx_value_wrap(uVar7,uRam801326f0);
  uVar7 = uVar7 & 0xfffff;
  if (uVar7 == 0 && uVar4 == 1) {
    uVar5 = *(int *)(iRam801326bc + 0x14) * uVar5;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(iRam801326bc + 0x14) * (ulonglong)(uVar5 * 0x40000000 + uVar7);
    uVar21 = (undefined4)lVar1;
    iVar3 = *(uint *)(iRam801326bc + 0x14) * ((uVar5 >> 2) + (uint)CARRY4(uVar5 * 0x40000000,uVar7))
            + (int)((ulonglong)lVar1 >> 0x20);
    uVar25 = CONCAT44(iVar3,uVar21);
    if (1 < uVar4) {
      uVar25 = __udivdi3(CONCAT44(iVar3,uVar21),(ulonglong)uVar4);
    }
    uVar5 = (uint)uVar25 >> 0x1e | (int)(uVar25 >> 0x20) << 2;
  }
  *(uint *)(iRam801326bc + 0x40) = uVar5;
  uVar21 = bcm53xx_value_wrap(uVar8,0xff0000);
  uVar21 = __aeabi_uidivmod(uVar5,uVar21);
  *(undefined4 *)(iRam801326bc + 0x44) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar8,0xff00);
  uVar21 = __aeabi_uidivmod(uVar5,uVar21);
  *(undefined4 *)(iRam801326bc + 0x48) = uVar21;
  uVar21 = bcm53xx_value_wrap(uVar8,0xff);
  uVar21 = __aeabi_uidivmod(uVar5,uVar21);
  *(undefined4 *)(iRam801326bc + 0x4c) = uVar21;
  uVar6 = bcm53xx_value_wrap(uVar9,0xff0000);
  uVar6 = __aeabi_uidivmod(uVar5,uVar6);
  *(undefined4 *)(iRam801326bc + 0x50) = uVar6;
  iVar18 = bcm53xx_value_wrap(uVar10,0x7000);
  iVar19 = bcm53xx_value_wrap(uVar10,uRam801326f4);
  iVar20 = __aeabi_uidivmod(uVar21,iVar18);
  iVar3 = iRam801326bc;
  iVar20 = iVar20 * iVar19;
  if (iVar20 != iRam801326f8) {
    iVar19 = __aeabi_uidivmod(iRam801326f8,uVar21);
    (*(code *)((undefined4 *)*puRam801326a0)[0x17])
              (*(undefined4 *)*puRam801326a0,*piRam801326a8,uRam801326fc,uRam80132700);
    (*(code *)((undefined4 *)*puRam801326a0)[0x17])
              (*(undefined4 *)*puRam801326a0,*piRam801326a8,uRam801326d8,
               uVar10 & 0xfffff003 | iVar19 * iVar18 * 4);
    (*(code *)((undefined4 *)*puRam801326a0)[0x17])
              (*(undefined4 *)*puRam801326a0,*piRam801326a8,uRam801326fc,0);
    iVar20 = __aeabi_uidivmod(*(undefined4 *)(iVar3 + 0x4c),iVar18);
    iVar20 = iVar20 * iVar19 * iVar18;
  }
  iVar18 = iRam801326bc;
  if ((uVar11 & 0x2000) == 0) {
    iVar19 = 5;
  }
  else {
    iVar19 = 1;
  }
  *(uint *)(iRam801326bc + 0x20) = (uVar11 & uRam80132704) >> 0xe;
  uVar21 = *(undefined4 *)(iVar18 + 0x38);
  *(int *)(iVar3 + 0x54) = iVar20;
  iVar18 = __aeabi_uidivmod(uVar21,(((uVar12 & 0x700) >> 8) - iVar19 & 7) + 1);
  uVar21 = __aeabi_uidivmod((uVar12 & 0xff) * iVar18,((uVar12 & 0x3800) >> 0xb) + 2);
  uVar4 = (uVar13 & 0x70000) >> 0x10;
  *(undefined4 *)(iRam801326bc + 0x1c) = uVar21;
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
    uVar7 = bcm53xx_value_wrap(uVar14,uRam8013270c);
    uVar15 = uVar15 & 0xfffff;
    if (uVar4 == 6) {
      uVar21 = 4;
    }
    else {
      uVar21 = 2;
    }
    if (uVar15 == 0 && uVar5 == 1) {
      uVar7 = *(int *)(iRam801326bc + 0x14) * uVar7;
    }
    else {
      lVar1 = (ulonglong)*(uint *)(iRam801326bc + 0x14) * (ulonglong)(uVar7 * 0x40000000 + uVar15);
      uVar6 = (undefined4)lVar1;
      iVar3 = *(uint *)(iRam801326bc + 0x14) *
              ((uVar7 >> 2) + (uint)CARRY4(uVar7 * 0x40000000,uVar15)) +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar25 = CONCAT44(iVar3,uVar6);
      if (1 < uVar5) {
        uVar25 = __udivdi3(CONCAT44(iVar3,uVar6),(ulonglong)uVar5);
      }
      uVar7 = (uint)uVar25 >> 0x1e | (int)(uVar25 >> 0x20) << 2;
    }
    uVar4 = __aeabi_uidivmod(uVar7,uVar21);
    iVar3 = iRam801326bc;
    *(uint *)(iRam801326bc + 0x28) = uVar4 >> 2;
    *(uint *)(iVar3 + 0x24) = uVar4;
  }
  iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x128) = *(undefined4 *)(iRam801326bc + 0x24);
  *(undefined4 *)(iVar3 + 300) = 0;
  arml2cc_init(*puRam801326b4,*piRam801326b8,0x22000);
  return;
}
