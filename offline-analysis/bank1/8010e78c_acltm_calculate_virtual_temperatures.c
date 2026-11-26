
undefined4 acltm_calculate_virtual_temperatures(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iStack_38;

  iStack_38 = 0;
  iVar19 = param_1;
  do {
    uVar13 = *(undefined4 *)(iVar19 + 0xc);
    if (*piRam8010eed0 != 0) {
      printf(uRam8010eed4,*(undefined4 *)(iVar19 + 8));
    }
    piVar1 = piRam8010eebc;
    iVar7 = __aeabi_uidivmod(*piRam8010eebc + *(int *)(iVar19 + 0x5c),*piRam8010eebc);
    iVar8 = __aeabi_uidivmod(uVar13,iVar7);
    iVar9 = __aeabi_uidivmod(*(undefined4 *)(iVar19 + 0x60),iVar7);
    uVar10 = (iVar7 + -1) * iVar9 + iVar8;
    *(uint *)(iVar19 + 0x60) = uVar10;
    iVar7 = __aeabi_uidivmod(*piVar1 + *(int *)(iVar19 + 0xcc),*piVar1);
    iVar8 = __aeabi_uidivmod(uVar13,iVar7);
    iVar9 = __aeabi_uidivmod(*(undefined4 *)(iVar19 + 0xd0),iVar7);
    piVar1 = piRam8010eebc;
    *(int *)(iVar19 + 0xd0) = (iVar7 + -1) * iVar9 + iVar8;
    iVar7 = __aeabi_uidivmod(*piVar1 + *(int *)(iVar19 + 0x13c),*piVar1);
    iVar8 = __aeabi_uidivmod(uVar13,iVar7);
    iVar9 = __aeabi_uidivmod(*(undefined4 *)(iVar19 + 0x140),iVar7);
    piVar1 = piRam8010eebc;
    *(int *)(iVar19 + 0x140) = (iVar7 + -1) * iVar9 + iVar8;
    iVar7 = __aeabi_uidivmod(*piVar1 + *(int *)(iVar19 + 0x1ac),*piVar1);
    iVar8 = __aeabi_uidivmod(uVar13,iVar7);
    iVar9 = __aeabi_uidivmod(*(undefined4 *)(iVar19 + 0x1b0),iVar7);
    piVar1 = piRam8010eebc;
    *(int *)(iVar19 + 0x1b0) = (iVar7 + -1) * iVar9 + iVar8;
    iVar7 = __aeabi_uidivmod(*piVar1 + *(int *)(iVar19 + 0x21c),*piVar1);
    iVar8 = __aeabi_uidivmod(uVar13,iVar7);
    iVar9 = __aeabi_uidivmod(*(undefined4 *)(iVar19 + 0x220),iVar7);
    piVar1 = piRam8010eebc;
    *(int *)(iVar19 + 0x220) = (iVar7 + -1) * iVar9 + iVar8;
    iVar7 = __aeabi_uidivmod(*piVar1 + *(int *)(iVar19 + 0x28c),*piVar1);
    iVar8 = __aeabi_uidivmod(uVar13,iVar7);
    iVar9 = __aeabi_uidivmod(*(undefined4 *)(iVar19 + 0x290),iVar7);
    *(int *)(iVar19 + 0x290) = (iVar7 + -1) * iVar9 + iVar8;
    uVar14 = uRam8010eec0;
    uVar17 = *(uint *)(iVar19 + 0xd0);
    uVar24 = uVar10;
    if (uVar10 <= uRam8010eec0) {
      uVar24 = uRam8010eec4;
    }
    uVar22 = *(uint *)(iVar19 + 0x140);
    if (uVar10 <= uRam8010eec0) {
      *(uint *)(iVar19 + 0x60) = uVar24;
    }
    uVar24 = uVar17;
    if (uVar17 <= uVar14) {
      uVar24 = uRam8010eec4;
    }
    uVar10 = *(uint *)(iVar19 + 0x1b0);
    if (uVar17 <= uVar14) {
      *(uint *)(iVar19 + 0xd0) = uVar24;
    }
    uVar17 = uVar22;
    if (uVar22 <= uVar14) {
      uVar17 = uRam8010eec4;
    }
    if (uVar22 <= uVar14) {
      *(uint *)(iVar19 + 0x140) = uVar17;
    }
    uVar22 = uVar10;
    if (uVar10 <= uVar14) {
      uVar22 = uRam8010eec4;
    }
    uVar15 = *(uint *)(iVar19 + 0x290);
    if (uVar10 <= uVar14) {
      *(uint *)(iVar19 + 0x1b0) = uVar22;
    }
    iVar7 = iRam8010eec8;
    uVar16 = uRam8010eec4;
    uVar10 = *(uint *)(iVar19 + 0x220);
    if (*(uint *)(iVar19 + 0x220) <= uVar14) {
      *(uint *)(iVar19 + 0x220) = uRam8010eec4;
      uVar10 = uVar16;
    }
    uVar16 = uVar15;
    if (uVar15 <= uVar14) {
      uVar16 = uRam8010eec4;
    }
    if (uVar15 <= uVar14) {
      *(uint *)(iVar19 + 0x290) = uVar16;
    }
    uVar2 = (ulonglong)uRam8010eecc;
    uVar3 = (ulonglong)uRam8010eecc;
    uVar4 = (ulonglong)uRam8010eecc;
    uVar5 = (ulonglong)uRam8010eecc;
    uVar6 = (ulonglong)uRam8010eecc;
    iStack_38 = iStack_38 + 1;
    *(uint *)(iVar19 + 100) =
         (uint)((ulonglong)(uint)(*(int *)(iVar19 + 0x60) + iVar7) * (ulonglong)uRam8010eecc >> 0x28
               );
    *(uint *)(iVar19 + 0xd4) = (uint)((uVar24 + iVar7) * uVar2 >> 0x28);
    *(uint *)(iVar19 + 0x144) = (uint)((uVar17 + iVar7) * uVar3 >> 0x28);
    *(uint *)(iVar19 + 0x1b4) = (uint)((uVar22 + iVar7) * uVar4 >> 0x28);
    *(uint *)(iVar19 + 0x224) = (uint)((uVar10 + iVar7) * uVar5 >> 0x28);
    *(uint *)(iVar19 + 0x294) = (uint)((uVar16 + iVar7) * uVar6 >> 0x28);
    iVar19 = iVar19 + 0xc;
  } while (iStack_38 != 6);
  iVar23 = *(int *)(param_1 + 0x58);
  iVar21 = *(int *)(param_1 + 200);
  iVar9 = *(int *)(param_1 + 0x138);
  iVar8 = *(int *)(param_1 + 0x1a8);
  iVar20 = *(int *)(param_1 + 0x218);
  iVar18 = *(int *)(param_1 + 0x288);
  *(int *)(param_1 + 0x54) = iVar23;
  *(int *)(param_1 + 0xc4) = iVar21;
  *(int *)(param_1 + 0x134) = iVar9;
  *(int *)(param_1 + 0x1a4) = iVar8;
  *(int *)(param_1 + 0x214) = iVar20;
  *(int *)(param_1 + 0x284) = iVar18;
  iVar19 = param_1;
  iVar7 = param_1;
  do {
    iVar11 = *(int *)(iVar7 + 0x114);
    iVar23 = iVar23 + (*(int *)(iVar7 + 0xa4) * *(int *)(iVar19 + 100) >> 10);
    *(int *)(param_1 + 0x54) = iVar23;
    iVar12 = *(int *)(iVar7 + 0x184);
    iVar21 = iVar21 + (iVar11 * *(int *)(iVar19 + 0xd4) >> 10);
    *(int *)(param_1 + 0xc4) = iVar21;
    iVar11 = *(int *)(iVar7 + 500);
    iVar9 = iVar9 + (iVar12 * *(int *)(iVar19 + 0x144) >> 10);
    iVar12 = *(int *)(iVar7 + 0x264);
    *(int *)(param_1 + 0x134) = iVar9;
    iVar8 = iVar8 + (iVar11 * *(int *)(iVar19 + 0x1b4) >> 10);
    *(int *)(param_1 + 0x1a4) = iVar8;
    iVar11 = *(int *)(iVar7 + 0x2d4);
    iVar20 = iVar20 + (iVar12 * *(int *)(iVar19 + 0x224) >> 10);
    *(int *)(param_1 + 0x214) = iVar20;
    piVar1 = (int *)(iVar19 + 0x294);
    iVar19 = iVar19 + 0xc;
    iVar18 = iVar18 + (iVar11 * *piVar1 >> 10);
    *(int *)(param_1 + 0x284) = iVar18;
    iVar7 = iVar7 + 4;
  } while (param_1 + 0x48 != iVar19);
  if (0x19c00 < iVar21) {
    *puRam8010eed8 = *puRam8010eed8 | 2;
    iVar21 = *(int *)(param_1 + 0xc4);
  }
  iVar19 = iRam8010eedc;
  if (iVar21 <= iRam8010eedc) {
    *puRam8010eed8 = *puRam8010eed8 & 0xfffffffd;
  }
  iVar7 = *(int *)(param_1 + 0x134);
  if (0x19c00 < iVar7) {
    *puRam8010eed8 = *puRam8010eed8 | 4;
    iVar7 = *(int *)(param_1 + 0x134);
  }
  if (iVar7 <= iVar19) {
    *puRam8010eed8 = *puRam8010eed8 & 0xfffffffb;
  }
  iVar19 = *(int *)(param_1 + 0x1a4);
  if (0xe800 < iVar19) {
    *puRam8010eed8 = *puRam8010eed8 | 8;
    iVar19 = *(int *)(param_1 + 0x1a4);
  }
  if (iVar19 < 0xe000) {
    *puRam8010eed8 = *puRam8010eed8 & 0xfffffff7;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xbc) * 0xc + param_1 + 0x668) =
       *(undefined4 *)(param_1 + 0x54);
  iVar19 = *(int *)(param_1 + 0xbc);
  uVar24 = *(uint *)(param_1 + 0x54);
  iVar7 = iVar19 * 0xc + param_1;
  uVar14 = *(uint *)(iVar7 + 0x66c);
  if (uVar24 < uVar14) {
    *(uint *)(iVar7 + 0x66c) = uVar24;
    iVar19 = *(int *)(param_1 + 0xbc);
  }
  iVar19 = iVar19 * 0xc + param_1;
  if (uVar24 < uVar14) {
    uVar24 = *(uint *)(param_1 + 0x54);
  }
  if (*(uint *)(iVar19 + 0x670) < uVar24) {
    *(uint *)(iVar19 + 0x670) = uVar24;
  }
  *(undefined4 *)(*(int *)(param_1 + 300) * 0xc + param_1 + 0x668) = *(undefined4 *)(param_1 + 0xc4)
  ;
  iVar19 = *(int *)(param_1 + 300);
  uVar14 = *(uint *)(param_1 + 0xc4);
  iVar7 = iVar19 * 0xc + param_1;
  if (uVar14 < *(uint *)(iVar7 + 0x66c)) {
    *(uint *)(iVar7 + 0x66c) = uVar14;
    iVar19 = *(int *)(param_1 + 300);
    uVar14 = *(uint *)(param_1 + 0xc4);
  }
  iVar19 = iVar19 * 0xc + param_1;
  if (*(uint *)(iVar19 + 0x670) < uVar14) {
    *(uint *)(iVar19 + 0x670) = uVar14;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x19c) * 0xc + param_1 + 0x668) =
       *(undefined4 *)(param_1 + 0x134);
  iVar19 = *(int *)(param_1 + 0x19c);
  iVar7 = iVar19 * 0xc + param_1;
  uVar24 = *(uint *)(param_1 + 0x134);
  uVar14 = *(uint *)(iVar7 + 0x66c);
  if (uVar24 < uVar14) {
    *(uint *)(iVar7 + 0x66c) = uVar24;
    iVar19 = *(int *)(param_1 + 0x19c);
  }
  iVar19 = iVar19 * 0xc + param_1;
  if (uVar24 < uVar14) {
    uVar24 = *(uint *)(param_1 + 0x134);
  }
  if (*(uint *)(iVar19 + 0x670) < uVar24) {
    *(uint *)(iVar19 + 0x670) = uVar24;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x20c) * 0xc + param_1 + 0x668) =
       *(undefined4 *)(param_1 + 0x1a4);
  iVar19 = *(int *)(param_1 + 0x20c);
  uVar14 = *(uint *)(param_1 + 0x1a4);
  iVar7 = iVar19 * 0xc + param_1;
  if (uVar14 < *(uint *)(iVar7 + 0x66c)) {
    *(uint *)(iVar7 + 0x66c) = uVar14;
    iVar19 = *(int *)(param_1 + 0x20c);
    uVar14 = *(uint *)(param_1 + 0x1a4);
  }
  iVar19 = iVar19 * 0xc + param_1;
  if (*(uint *)(iVar19 + 0x670) < uVar14) {
    *(uint *)(iVar19 + 0x670) = uVar14;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x27c) * 0xc + param_1 + 0x668) =
       *(undefined4 *)(param_1 + 0x214);
  iVar19 = *(int *)(param_1 + 0x27c);
  uVar24 = *(uint *)(param_1 + 0x214);
  iVar7 = iVar19 * 0xc + param_1;
  uVar14 = *(uint *)(iVar7 + 0x66c);
  if (uVar24 < uVar14) {
    *(uint *)(iVar7 + 0x66c) = uVar24;
    iVar19 = *(int *)(param_1 + 0x27c);
  }
  iVar19 = iVar19 * 0xc + param_1;
  if (uVar24 < uVar14) {
    uVar24 = *(uint *)(param_1 + 0x214);
  }
  if (*(uint *)(iVar19 + 0x670) < uVar24) {
    *(uint *)(iVar19 + 0x670) = uVar24;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2ec) * 0xc + param_1 + 0x668) =
       *(undefined4 *)(param_1 + 0x284);
  iVar19 = *(int *)(param_1 + 0x2ec);
  uVar24 = *(uint *)(param_1 + 0x284);
  iVar7 = iVar19 * 0xc + param_1;
  uVar14 = *(uint *)(iVar7 + 0x66c);
  if (uVar24 < uVar14) {
    *(uint *)(iVar7 + 0x66c) = uVar24;
    iVar19 = *(int *)(param_1 + 0x2ec);
  }
  piVar1 = piRam8010eed0;
  iVar19 = iVar19 * 0xc + param_1;
  if (uVar24 < uVar14) {
    uVar24 = *(uint *)(param_1 + 0x284);
  }
  if (*(uint *)(iVar19 + 0x670) < uVar24) {
    *(uint *)(iVar19 + 0x670) = uVar24;
  }
  if (*piVar1 != 0) {
    printf(uRam8010eee0,*(undefined4 *)(param_1 + 0x54));
    printf(uRam8010eee4,*(undefined4 *)(param_1 + 0xc4));
    printf(uRam8010eee8,*(undefined4 *)(param_1 + 0x134));
    printf(uRam8010eeec,*(undefined4 *)(param_1 + 0x1a4));
    printf(uRam8010eef0,*(undefined4 *)(param_1 + 0x214));
    printf(uRam8010eef4,*(undefined4 *)(param_1 + 0x284));
  }
  return 0;
}
