
/* WARNING: Removing unreachable block (ram,0x8010f498) */

undefined4 acltm_run_PI_loops(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 auStack_40 [5];

  puVar7 = puRam8010f4e0;
  puVar6 = puRam8010f4dc;
  iVar9 = *piRam8010f4d4;
  *puRam8010f4dc = *puRam8010f4d8;
  *puVar7 = 100;
  if (iVar9 != 0) {
    *(int *)(param_1 + 0x370) = iVar9;
  }
  if (*piRam8010f4e4 != 0) {
    *(int *)(param_1 + 0x490) = *piRam8010f4e4;
  }
  ContCompute(param_1,param_1 + 0x2f0,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x310));
  ContCompute(param_1,param_1 + 0x410,*(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x54));
  ContCompute(param_1,param_1 + 800,*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x340));
  ContCompute(param_1,param_1 + 0x440,*(int *)(param_1 + 0x460) - *(int *)(param_1 + 0xc4));
  ContCompute(param_1,param_1 + 0x350,*(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x370));
  ContCompute(param_1,param_1 + 0x470,*(int *)(param_1 + 0x490) - *(int *)(param_1 + 0x134));
  ContCompute(param_1,param_1 + 0x380,*(int *)(param_1 + 0x1a4) - *(int *)(param_1 + 0x3a0));
  ContCompute(param_1,param_1 + 0x4a0,*(int *)(param_1 + 0x4c0) - *(int *)(param_1 + 0x1a4));
  ContCompute(param_1,param_1 + 0x3b0,*(int *)(param_1 + 0x214) - *(int *)(param_1 + 0x3d0));
  ContCompute(param_1,param_1 + 0x4d0,*(int *)(param_1 + 0x4f0) - *(int *)(param_1 + 0x214));
  ContCompute(param_1,param_1 + 0x3e0,*(int *)(param_1 + 0x284) - *(int *)(param_1 + 0x400));
  ContCompute(param_1,param_1 + 0x500,*(int *)(param_1 + 0x520) - *(int *)(param_1 + 0x284));
  uVar10 = *(uint *)(param_1 + 0x318);
  uVar11 = *puVar6;
  if (*puVar6 < uVar10) {
    *puVar6 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x348);
  if (uVar11 < uVar10) {
    *puVar6 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x378);
  if (uVar11 < uVar10) {
    *puVar6 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x3a8);
  if (uVar11 < uVar10) {
    *puVar6 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x3d8);
  if (uVar11 < uVar10) {
    *puVar6 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x408);
  if (uVar11 < uVar10) {
    *puVar6 = uVar10;
    uVar11 = uVar10;
  }
  piVar1 = piRam8010f4e8;
  *(uint *)(param_1 + 0xa28) = uVar11;
  if (*piVar1 != 0) {
    printf(uRam8010f50c);
  }
  uVar10 = *(uint *)(param_1 + 0x438);
  uVar11 = *puVar7;
  if (uVar10 < *puVar7) {
    *puVar7 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x468);
  if (uVar10 < uVar11) {
    *puVar7 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x498);
  if (uVar10 < uVar11) {
    *puVar7 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x4c8);
  if (uVar10 < uVar11) {
    *puVar7 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x4f8);
  if (uVar10 < uVar11) {
    *puVar7 = uVar10;
    uVar11 = uVar10;
  }
  uVar10 = *(uint *)(param_1 + 0x528);
  if (uVar10 < uVar11) {
    *puVar7 = uVar10;
    uVar11 = uVar10;
  }
  *(uint *)(param_1 + 0xa34) = uVar11;
  *(uint *)(param_1 + 0xa40) = uVar11;
  if (*piVar1 != 0) {
    printf(uRam8010f510,uVar11);
  }
  iVar9 = *piRam8010f4ec;
  bVar3 = 0;
  bVar4 = 0;
  do {
    if (iVar9 != 0) {
      reset_cltm_stats(param_1);
    }
    microuptime(auStack_40);
    *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
    puVar6 = puRam8010f4f0;
    *(undefined4 *)(param_1 + 0x5bc) = auStack_40[0];
    puVar7 = puRam8010f4f4;
    *(uint *)(param_1 + 0xa10) = *puVar6;
    puVar6 = puRam8010f4f8;
    *(uint *)(param_1 + 0xa18) = *puVar7;
    *(uint *)(param_1 + 0xa20) = *puVar6;
    puVar6 = puRam8010f4f4;
    *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | *puRam8010f4f0;
    *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) | *puVar6;
    uVar10 = *(uint *)(param_1 + 0xa64);
    uVar11 = *puRam8010f4f8;
    if (uVar10 < *(uint *)(param_1 + 0xa68)) {
      *(uint *)(param_1 + 0xa68) = uVar10;
    }
    if (*(uint *)(param_1 + 0xa6c) < uVar10) {
      *(uint *)(param_1 + 0xa6c) = uVar10;
    }
    *(uint *)(param_1 + 0xa24) = *(uint *)(param_1 + 0xa24) | uVar11;
    uVar11 = *(uint *)(param_1 + 0xa70);
    iVar9 = *(int *)(param_1 + 0xa74);
    uVar13 = *(uint *)(param_1 + 0xa4c);
    uVar15 = *(uint *)(param_1 + 0xa50);
    *(ulonglong *)(param_1 + iRam8010f4fc) =
         (ulonglong)uVar10 * (ulonglong)uVar10 + *(longlong *)(param_1 + iRam8010f4fc);
    uVar8 = *(uint *)(param_1 + 0xa58);
    if (uVar13 < uVar15) {
      *(uint *)(param_1 + 0xa50) = uVar13;
    }
    if (*(uint *)(param_1 + 0xa54) < uVar13) {
      *(uint *)(param_1 + 0xa54) = uVar13;
    }
    *(uint *)(param_1 + 0xa70) = uVar11 + uVar10;
    *(uint *)(param_1 + 0xa74) = iVar9 + (uint)CARRY4(uVar11,uVar10);
    if (uVar8 < *(uint *)(param_1 + 0xa5c)) {
      *(uint *)(param_1 + 0xa5c) = uVar8;
    }
    if (*(uint *)(param_1 + 0xa60) < uVar8) {
      *(uint *)(param_1 + 0xa60) = uVar8;
    }
    uVar11 = *(uint *)(param_1 + 0xa28);
    if (uVar11 < *(uint *)(param_1 + 0xa2c)) {
      *(uint *)(param_1 + 0xa2c) = uVar11;
    }
    if (*(uint *)(param_1 + 0xa30) < uVar11) {
      *(uint *)(param_1 + 0xa30) = uVar11;
    }
    uVar11 = *(uint *)(param_1 + 0xa34);
    iVar9 = 0;
    if (uVar11 < *(uint *)(param_1 + 0xa38)) {
      *(uint *)(param_1 + 0xa38) = uVar11;
    }
    if (*(uint *)(param_1 + 0xa3c) < uVar11) {
      *(uint *)(param_1 + 0xa3c) = uVar11;
    }
    uVar11 = *(uint *)(param_1 + 0xa40);
    if (uVar11 < *(uint *)(param_1 + 0xa44)) {
      *(uint *)(param_1 + 0xa44) = uVar11;
    }
    iVar14 = param_1;
    iVar16 = param_1;
    if (*(uint *)(param_1 + 0xa48) < uVar11) {
      *(uint *)(param_1 + 0xa48) = uVar11;
    }
    do {
      while( true ) {
        puVar12 = (ulonglong *)(iVar14 + 0x5d0);
        uVar11 = (uint)((ulonglong)(uint)(*(int *)(iVar16 + 0xc) + iRam8010f500) *
                        (ulonglong)uRam8010f504 >> 0x28);
        if (uVar11 < *(uint *)(iVar14 + 0x5c0)) {
          *(uint *)(iVar14 + 0x5c0) = uVar11;
        }
        if (*(uint *)(iVar14 + 0x5c4) < uVar11) {
          *(uint *)(iVar14 + 0x5c4) = uVar11;
        }
        uVar5 = *puVar12;
        uVar2 = (ulonglong)uVar11 * (ulonglong)uVar11 + *puVar12;
        uVar10 = *(uint *)(iVar14 + iRam8010f508);
        uVar8 = ((uint *)(iVar14 + iRam8010f508))[1];
        piVar1 = (int *)(iVar14 + iRam8010f508);
        *piVar1 = uVar10 + uVar11;
        piVar1[1] = uVar8 + CARRY4(uVar10,uVar11);
        iVar9 = iVar9 + 1;
        if (uVar5 <= uVar2) break;
        bVar4 = 1;
        *puVar12 = uVar2;
        iVar14 = iVar14 + 0x18;
        iVar16 = iVar16 + 0xc;
        if (iVar9 == 6) goto LAB_8010f458;
      }
      *puVar12 = uVar2;
      iVar14 = iVar14 + 0x18;
      iVar16 = iVar16 + 0xc;
    } while (iVar9 != 6);
LAB_8010f458:
    piVar1 = piRam8010f4ec;
    if (!(bool)(bVar4 & (bVar3 ^ 1))) {
      return 0;
    }
    *piRam8010f4ec = 1;
    bVar3 = 1;
    iVar9 = *piVar1;
  } while( true );
}
