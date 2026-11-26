
void arm32_kernel_vm_init(int param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint auStack_a8 [6];
  int iStack_90;
  undefined1 *puStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  undefined1 auStack_6c [4];
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 auStack_58 [4];
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;

  piVar1 = piRam8012c354;
  puStack_8c = (undefined1 *)auStack_a8;
  iVar8 = piRam8012c354[2] - (piRam8012c354[1] & 0xffc00000U);
  uVar11 = (iVar8 + iRam8012c35c + ((uint)(iVar8 + iRam8012c358) >> 0x16) & 0xfffff000) + 0x3fffff
           >> 0x16;
  auStack_a8[2] = (uint)param_5;
  piStack_88 = piRam8012c354 + uVar11 * 5 + 0x24;
  iVar8 = -(uVar11 * 0x14 + 0x18a & 0xfffffff8);
  piVar6 = (int *)((int)auStack_a8 + iVar8 + 8);
  auStack_a8[3] = param_4;
  auStack_a8[4] = param_3;
  auStack_a8[5] = param_2;
  iStack_90 = param_1;
  if (uVar11 != 0xffffffed) {
    uVar4 = 0;
    puStack_8c = (undefined1 *)auStack_a8;
    do {
      uVar4 = uVar4 + 1;
      *piVar6 = piVar1[4];
      piVar1[4] = (int)piVar6;
      piVar6 = piVar6 + 5;
    } while (uVar4 < uVar11 + 0x13);
  }
  iVar15 = iRam8012c364;
  iVar13 = iRam8012c360;
  uVar4 = 0;
  *(undefined4 *)(iRam8012c360 + 4) = 0;
  *(undefined4 *)(iVar13 + 8) = 0;
  *(undefined4 *)((int)auStack_a8 + iVar8) = 2;
  valloc_pages(iVar15 + -0x68,iVar15,1,3);
  add_pages(iRam8012c364 + -0x68);
  if (uVar11 != 0) {
    iVar13 = iRam8012c364 + 0x28;
    do {
      *(undefined4 *)((int)auStack_a8 + iVar8) = 2;
      valloc_pages(piRam8012c354,iVar13,1,3);
      uVar4 = uVar4 + 1;
      add_pages(piRam8012c354,iVar13);
      iVar13 = iVar13 + 0x14;
    } while (uVar11 != uVar4);
  }
  iVar13 = iRam8012c368;
  piVar6 = piStack_88;
  do {
    *(undefined4 *)((int)auStack_a8 + iVar8) = 2;
    valloc_pages(piRam8012c354,piVar6,1,3);
    add_pages(piRam8012c354,piVar6);
    piVar6 = piVar6 + 5;
  } while (piVar6 != (int *)(uVar11 * 0x14 + iVar13));
  if (auStack_a8[4] != 0) {
    *(undefined4 *)((int)auStack_a8 + iVar8) = 2;
    valloc_pages(piRam8012c354,piRam8012c354 + 0x1f,1,3);
    add_pages(piRam8012c354,piRam8012c354 + 0x1f);
  }
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,uRam8012c36c,1,3);
  add_pages(piRam8012c354,uRam8012c36c);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,uRam8012c370,1,3);
  add_pages(piRam8012c354,uRam8012c370);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,uRam8012c374,1,3);
  add_pages(piRam8012c354,uRam8012c374);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,uRam8012c378,1,3);
  add_pages(piRam8012c354,uRam8012c378);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,uRam8012c37c,2,3);
  add_pages(piRam8012c354,uRam8012c37c);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,uRam8012c380,2,3);
  add_pages(piRam8012c354,uRam8012c380);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages_nozero(piRam8012c354,auStack_44,4,3);
  add_pages(piRam8012c354,auStack_44);
  *puRam8012c384 = uStack_40;
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  valloc_pages(piRam8012c354,iRam8012c388,1,3);
  iVar13 = iRam8012c360;
  iVar15 = *(int *)(iRam8012c360 + 8);
  *(uint *)(iRam8012c388 + 8) = auStack_a8[5];
  if ((iVar15 == 0) && ((*(uint *)(iVar13 + 4) == 0 || ((*(uint *)(iVar13 + 4) & 0x3fff) != 0)))) {
                    /* WARNING: Subroutine does not return */
    panic(uRam8012c3a0,uRam8012c3a4);
  }
  uStack_84 = *(undefined4 *)(iRam8012c360 + 4);
  pmap_link_l2pt(iVar15,auStack_a8[5] & 0xffc00000,iRam8012c364);
  iVar13 = ((piVar1[1] & 0xffc00000U) - *(int *)(iRam8012c364 + -0x68)) + -0x80000000;
  if (uVar11 != 0) {
    uVar4 = 0;
    iVar14 = iRam8012c38c;
    do {
      uVar4 = uVar4 + 1;
      pmap_link_l2pt(iVar15,iVar13,iVar14);
      iVar13 = iVar13 + 0x400000;
      iVar14 = iVar14 + 0x14;
    } while (uVar11 != uVar4);
  }
  piVar9 = piStack_88;
  iVar13 = iStack_90;
  do {
    piVar10 = piVar9 + 5;
    pmap_link_l2pt(iVar15,iVar13,piVar9);
    iVar13 = iVar13 + 0x400000;
    piVar9 = piVar10;
  } while (piVar10 != piVar6);
  if (auStack_a8[4] != 0) {
    pmap_link_l2pt(iVar15,auStack_a8[4] & 0xffc00000,uRam8012c3a8);
  }
  piVar6 = piRam8012c354;
  iStack_54 = piVar1[1];
  iVar13 = piVar1[2];
  uVar11 = (*piVar1 - iStack_54) + iRam8012c390 & 0xfffff000;
  iStack_50 = (iStack_54 - *piVar1) + -0x80000000;
  *piRam8012c394 = iStack_90 + 0x2000000;
  iVar13 = iVar13 - iStack_54;
  uStack_47 = 3;
  uStack_48 = 1;
  uStack_4c = uVar11;
  add_pages(piVar6,auStack_58);
  iStack_68 = uVar11 + iStack_54;
  iStack_60 = iVar13 - uVar11;
  iStack_64 = uVar11 + iStack_50;
  uStack_5b = 3;
  uStack_5c = 1;
  add_pages(piVar6,auStack_6c);
  puVar12 = (undefined4 *)piVar1[5];
  if ((auStack_a8[2] == 0) || (iStack_7c = *piVar6, puVar12[1] == iStack_7c)) {
    uStack_80 = *puVar12;
    iStack_7c = puVar12[1];
    iStack_78 = puVar12[2];
    iStack_74 = puVar12[3];
    uStack_70 = puVar12[4];
    puVar12 = (undefined4 *)*puVar12;
    if (puVar12 == (undefined4 *)0x0) goto LAB_8012c178;
  }
  else {
    iStack_74 = puVar12[1] - iStack_7c;
    iStack_78 = -0x80000000;
    uStack_70 = CONCAT22(uStack_70._2_2_,0x300);
    uStack_70 = CONCAT31(uStack_70._1_3_,1);
  }
LAB_8012c06c:
  do {
    while (auStack_a8[2] != 0) {
      iVar3 = concat_pvaddr(&uStack_80,puVar12);
      iVar2 = iStack_74;
      iVar14 = iStack_78;
      iVar13 = iStack_7c;
      if (iVar3 != 0) goto LAB_8012c16c;
      if ((uint)puVar12[1] <= (uint)(iStack_7c + iStack_74)) break;
      if ((uStack_70 & 0xffff) == uRam8012c398) {
        iStack_74 = puVar12[1] - iStack_78;
        goto LAB_8012c06c;
      }
      *(uint *)((int)auStack_a8 + iVar8) = uStack_70 >> 8 & 0xff;
      *(uint *)((int)auStack_a8 + iVar8 + 4) = uStack_70 & 0xff;
      pmap_map_chunk(iVar15,iVar14,iVar13,iVar2);
      iStack_7c = iStack_7c + iStack_74;
      iStack_78 = iStack_78 + iStack_74;
      iStack_74 = puVar12[1] - iStack_78;
      uStack_70 = CONCAT22(uStack_70._2_2_,0x301);
    }
    iVar2 = iStack_74;
    iVar14 = iStack_78;
    iVar13 = iStack_7c;
    *(uint *)((int)auStack_a8 + iVar8) = uStack_70 >> 8 & 0xff;
    *(uint *)((int)auStack_a8 + iVar8 + 4) = uStack_70 & 0xff;
    pmap_map_chunk(iVar15,iVar14,iVar13,iVar2);
    uStack_80 = *puVar12;
    iStack_7c = puVar12[1];
    iStack_78 = puVar12[2];
    iStack_74 = puVar12[3];
    uStack_70 = puVar12[4];
LAB_8012c16c:
    puVar12 = (undefined4 *)*puVar12;
  } while (puVar12 != (undefined4 *)0x0);
LAB_8012c178:
  iVar2 = iStack_74;
  iVar14 = iStack_78;
  iVar13 = iStack_7c;
  if ((auStack_a8[2] != 0) && ((uint)(iStack_7c + iStack_74) < (uint)piVar1[3])) {
    if ((uStack_70 & 0xffff) == uRam8012c398) {
      iStack_74 = piVar1[3] - iStack_7c;
    }
    else {
      *(uint *)((int)auStack_a8 + iVar8) = uStack_70 >> 8 & 0xff;
      *(uint *)((int)auStack_a8 + iVar8 + 4) = uStack_70 & 0xff;
      pmap_map_chunk(iVar15,iVar14,iVar13,iVar2);
      iStack_7c = iStack_7c + iStack_74;
      iStack_78 = iStack_78 + iStack_74;
      iStack_74 = piRam8012c354[3] - iStack_7c;
      uStack_70 = CONCAT22(uStack_70._2_2_,0x300);
      uStack_70 = CONCAT31(uStack_70._1_3_,1);
    }
  }
  iVar2 = iStack_74;
  iVar14 = iStack_78;
  iVar13 = iStack_7c;
  *(uint *)((int)auStack_a8 + iVar8) = uStack_70 >> 8 & 0xff;
  *(uint *)((int)auStack_a8 + iVar8 + 4) = uStack_70 & 0xff;
  pmap_map_chunk(iVar15,iVar14,iVar13,iVar2);
  uVar7 = *(undefined4 *)(iRam8012c388 + 4);
  uVar5 = *(undefined4 *)(iRam8012c388 + 8);
  *(undefined4 *)((int)auStack_a8 + iVar8) = 1;
  pmap_map_entry(iVar15,uVar5,uVar7,3);
  if (auStack_a8[3] != 0) {
    pmap_devmap_bootstrap(iVar15,auStack_a8[3]);
  }
  iVar8 = iRam8012c39c;
  (**(code **)(iRam8012c39c + 0xc))(1);
  (**(code **)(iVar8 + 0x58))();
  (**(code **)(iVar8 + 0x10))(uStack_84,1);
  (**(code **)(iVar8 + 0x1c))();
  (**(code **)(iVar8 + 0xc))(1);
  return;
}
