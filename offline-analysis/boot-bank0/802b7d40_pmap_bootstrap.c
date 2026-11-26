
void pmap_bootstrap(int param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iStack_38;

  pbVar2 = pbRam802b81fc;
  uVar12 = 0;
  *(undefined4 *)(pbRam802b81fc + 4) = uRam802b81f8;
  iVar13 = iRam802b8200;
  pbVar2[0x10] = 0xff;
  pbVar2[0x11] = 0xff;
  pbVar2[0x12] = 0xff;
  pbVar2[0x13] = 0xff;
  uVar14 = *(uint *)(iVar13 + 8);
  *pbVar2 = 0;
  pbVar2[2] = 1;
  mutex_init(pbVar2 + 0x40,2,0);
  uvm_obj_init(pbVar2 + 0x14,0,0,1);
  uvm_obj_setlock(pbVar2 + 0x14,pbVar2 + 0x40);
  iVar13 = 0;
  iStack_38 = 0;
  do {
    while (uVar8 = *(uint *)(uVar14 + uVar12 * 4), (uVar8 & 3) != 1) {
LAB_802b7dc0:
      uVar12 = uVar12 + 1;
      if (uVar12 == 0x1000) goto LAB_802b7e88;
    }
    uVar8 = uVar8 & 0xfffffc00;
    iVar9 = kernel_pt_lookup(uVar8);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      panic(uRam802b828c,uVar12 << 0x14,uVar8);
    }
    uVar11 = uVar12 >> 2 & 0x3fc;
    piVar15 = *(int **)(pbVar2 + uVar11 + 0x44);
    if (piVar15 == (int *)0x0) {
      if (iVar13 == 0x10) {
                    /* WARNING: Subroutine does not return */
        panic(uRam802b8290);
      }
      iVar13 = iVar13 + 1;
      piVar15 = (int *)(iStack_38 + iRam802b8288);
      iStack_38 = iStack_38 + 0xc4;
      *(int **)(pbVar2 + uVar11 + 0x44) = piVar15;
    }
    uVar11 = uVar12 & 0xf;
    *piVar15 = *piVar15 + 1;
    piVar15[uVar11 * 3 + 1] = iVar9;
    piVar15[uVar11 * 3 + 2] = uVar8;
    *(short *)(piVar15 + uVar11 * 3 + 3) = (short)uVar12;
    iVar10 = 0;
    do {
      puVar1 = (uint *)(iVar10 + iVar9);
      iVar10 = iVar10 + 4;
      if ((*puVar1 & 3) != 0) {
        *(short *)((int)piVar15 + uVar11 * 0xc + 0xe) =
             *(short *)((int)piVar15 + uVar11 * 0xc + 0xe) + 1;
      }
    } while (iVar10 != 0x400);
    iVar10 = pmap_set_pt_cache_mode(uVar14,iVar9);
    if (iVar10 == 0) goto LAB_802b7dc0;
    uVar12 = uVar12 + 1;
    printf(uRam802b8204,iVar9);
  } while (uVar12 != 0x1000);
LAB_802b7e88:
  for (uVar12 = uVar14; uVar12 < uVar14 + 0x4000; uVar12 = uVar12 + 0x1000) {
    while (iVar13 = pmap_set_pt_cache_mode(uVar14,uVar12), iVar13 != 0) {
      uVar8 = uVar12 + 0x1000;
      printf(uRam802b8208,uVar12);
      uVar12 = uVar8;
      if (uVar14 + 0x4000 <= uVar8) goto LAB_802b7ed4;
    }
  }
LAB_802b7ed4:
  (**(code **)(iRam802b820c + 0x3c))();
  (**(code **)(iRam802b820c + 0x1c))();
  (**(code **)(iRam802b820c + 4))();
  piVar15 = piRam802b821c;
  puVar4 = puRam802b8218;
  puVar1 = puRam802b8214;
  uVar12 = *puRam802b8210;
  iVar13 = (uVar12 >> 0xc) + 1;
  *piRam802b821c = param_2;
  *puVar1 = uVar12 + param_1 & ~uVar12;
  puVar5 = puRam802b8224;
  pmap_alloc_specials(puVar1,iVar13,uRam802b8220,puVar4);
  pmap_set_pt_cache_mode(uVar14,*puVar4);
  pmap_alloc_specials(puVar1,iVar13,uRam802b8228,puVar5);
  pmap_set_pt_cache_mode(uVar14,*puVar5);
  pmap_alloc_specials(puVar1,iVar13,uRam802b822c,0);
  pmap_alloc_specials(puVar1,4,uRam802b8230,0);
  uVar12 = (*piVar15 - *piRam802b8234) + 0xfffffU >> 0x14;
  pmap_alloc_specials(puVar1,uVar12 * 0x400 + 0xfff >> 0xc,uRam802b8238,0);
  pmap_alloc_specials(puVar1,(uVar12 + 0xf >> 4) * 0xc4 + 0xfff >> 0xc,uRam802b823c,0);
  mutex_init(uRam802b8240,2,5);
  puVar4 = puRam802b8244;
  *puRam802b8248 = 0;
  uVar3 = uRam802b81f8;
  puVar4[1] = puVar4;
  *puVar4 = 0;
  pmap_init_l1(uVar3,uVar14);
  uVar12 = *puRam802b824c;
  if ((int)uVar12 < 0) {
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
  }
  else {
    iVar13 = *(int *)(pbVar2 + (uVar12 >> 0x18) * 4 + 0x44);
    *(uint *)(pbVar2 + 8) = *(int *)(*(int *)(pbVar2 + 4) + 0x24) + (uVar12 >> 0x14) * 4;
    if ((iVar13 == 0) ||
       (iVar13 = iVar13 + (uVar12 >> 0x14 & 0xf) * 0xc, iVar9 = iVar13 + 4,
       *(int *)(iVar13 + 4) == 0)) {
      iVar9 = 0;
    }
    *(uint *)(pbVar2 + 0xc) = *(uint *)(iVar9 + 4) | 1 | (uint)*pbVar2 << 5;
  }
  puVar4 = puRam802b8260;
  pool_cache_bootstrap(uRam802b8258,uRam802b825c,0,0,0,uRam802b8250,0,0,uRam802b8254,0,0);
  uVar6 = uRam802b8268;
  uVar3 = uRam802b8264;
  *puVar4 = pbVar2;
  uVar7 = uRam802b826c;
  *(undefined4 **)(pbVar2 + 0x450) = puVar4;
  pbVar2[0x44c] = 0;
  pbVar2[0x44d] = 0;
  pbVar2[0x44e] = 0;
  pbVar2[0x44f] = 0;
  pool_init(uVar7,0x10,0,0,0,uVar3,uVar6,0);
  pool_cache_bootstrap(uRam802b8278,0xc4,0,0,0,uRam802b8270,0,0,uRam802b8274,0,0);
  pool_cache_bootstrap(uRam802b8284,0x400,0,0x400,0,uRam802b827c,0,0,uRam802b8280,0,0);
  (**(code **)(iRam802b820c + 0x3c))();
  return;
}
