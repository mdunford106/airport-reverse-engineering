
undefined4 bcmpax_configure(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int aiStack_34 [2];

  (*(code *)((undefined4 *)param_1[1])[0x17])(*(undefined4 *)param_1[1],param_1[2],0x330,0xf);
  iVar2 = pci_get_capability(param_1 + 9,0,0x10,aiStack_34,0);
  if (iVar2 == 0) {
    aprint_error_dev(*param_1,uRam8013851c);
    return 0;
  }
  iVar2 = device_cfdata(*param_1);
  if ((*(uint *)(iVar2 + 0x10) & 1) != 0) {
    bcmpax_conf_write(param_1,0,aiStack_34[0] + 0x30,1);
  }
  iVar2 = 0;
  aiStack_34[0] = aiStack_34[0] + 0x10;
  while( true ) {
    uVar3 = bcmpax_conf_read(param_1,0,aiStack_34[0]);
    if (0xfffff < (uVar3 & 0x3f00000)) break;
    *(undefined1 *)(param_1 + 6) = 0;
    uVar7 = 0;
    if (iVar2 == 0xfa) goto LAB_801380f8;
    delay(1000);
    iVar2 = iVar2 + 1;
  }
  uVar7 = 1;
  *(undefined1 *)(param_1 + 6) = 1;
LAB_801380f8:
  aprint_debug_dev(*param_1,uRam80138520,uVar3,uVar7,(uVar3 & 0x3f00000) >> 0x14,0,uVar7,iVar2);
  puVar1 = puRam80138544;
  if (*(char *)(param_1 + 6) == '\0') {
    return 0;
  }
  if (param_1[0x21] == 0) {
    bcmmdio_mii_writereg(*puRam80138544,0,0x1f,0x8200);
    bcmmdio_mii_writereg(*puVar1,0,0x18,0xf7);
    bcmmdio_mii_writereg(*puVar1,1,0x1f,0x8200);
    bcmmdio_mii_writereg(*puVar1,1,0x18,0xf7);
  }
  else if (param_1[0x21] == 2) {
    (*(code *)((undefined4 *)param_1[1])[0x17])
              (*(undefined4 *)param_1[1],param_1[2],0x1f8,uRam80138554);
    (*(code *)((undefined4 *)param_1[1])[0x17])
              (*(undefined4 *)param_1[1],param_1[2],0x1fc,uRam80138558);
    (*(code *)((undefined4 *)param_1[1])[0x17])
              (*(undefined4 *)param_1[1],param_1[2],0x1f8,uRam8013855c);
    (*(code *)((undefined4 *)param_1[1])[0x17])
              (*(undefined4 *)param_1[1],param_1[2],0x1fc,uRam80138560);
  }
  uVar10 = *puRam80138524;
  uVar3 = (*piRam80138528 - uVar10) + 0xfffff >> 0x14;
  if (uVar3 < 0x81) {
    uVar8 = uVar10 | uVar3;
  }
  else {
    uVar8 = uVar10 | 0x80;
  }
  (*(code *)((undefined4 *)param_1[1])[0x17])
            (*(undefined4 *)param_1[1],param_1[2],uRam8013852c,uVar8);
  (*(code *)((undefined4 *)param_1[1])[0x17])(*(undefined4 *)param_1[1],param_1[2],0xc80,uVar10 | 1)
  ;
  uVar8 = uVar3;
  if (0xff < uVar3) {
    uVar8 = 0x100;
  }
  bcmpax_conf_write(param_1,0,0x14,uVar10);
  if (0x80 < uVar8) {
    uVar10 = uVar10 + 0x8000000;
    if (uVar3 - 0x80 < 0x81) {
      uVar9 = uVar10 | uVar3 - 0x80;
    }
    else {
      uVar9 = uVar10 | 0x80;
    }
    (*(code *)((undefined4 *)param_1[1])[0x17])(*(undefined4 *)param_1[1],param_1[2],0xd10,uVar9);
    (*(code *)((undefined4 *)param_1[1])[0x17])
              (*(undefined4 *)param_1[1],param_1[2],0xcc0,uVar10 | 1);
    bcmpax_conf_write(param_1,0,0x18,uVar10);
  }
  if (uVar8 < uVar3) {
    if (param_2 == 0) goto LAB_801381d4;
    iVar2 = (**(code **)(param_1[3] + 0x44))
                      (param_1[3],*puRam80138524,*puRam80138524 + uVar8 * 0x100000 + -1,param_1 + 3,
                       0);
    if (iVar2 != 0) {
      aprint_error_dev(*param_1,uRam80138550);
      return 0;
    }
  }
  else if (param_2 == 0) goto LAB_801381d4;
  uVar11 = *param_1;
  uVar7 = (*(code *)((undefined4 *)param_1[1])[0xb])(*(undefined4 *)param_1[1],param_1[2],0xc80);
  uVar4 = (*(code *)((undefined4 *)param_1[1])[0xb])
                    (*(undefined4 *)param_1[1],param_1[2],uRam8013852c);
  uVar5 = (*(code *)((undefined4 *)param_1[1])[0xb])(*(undefined4 *)param_1[1],param_1[2],0xcc0);
  uVar6 = (*(code *)((undefined4 *)param_1[1])[0xb])(*(undefined4 *)param_1[1],param_1[2],0xd10);
  aprint_normal_dev(uVar11,uRam80138534,uVar7,uVar4,uVar5,uVar6);
LAB_801381d4:
  uVar10 = *(uint *)(param_1[0x21] * 8 + iRam80138530 + 4);
  uVar3 = *(uint *)(iRam80138530 + param_1[0x21] * 8);
  if (uVar10 != 0) {
    (*(code *)((undefined4 *)param_1[1])[0x17])(*(undefined4 *)param_1[1],param_1[2],0xd20,uVar3);
    (*(code *)((undefined4 *)param_1[1])[0x17])
              (*(undefined4 *)param_1[1],param_1[2],0xd40,uVar3 | 1);
    if (0x4000000 < uVar10) {
      (*(code *)((undefined4 *)param_1[1])[0x17])
                (*(undefined4 *)param_1[1],param_1[2],uRam80138548,uVar3 + 0x4000000);
      (*(code *)((undefined4 *)param_1[1])[0x17])
                (*(undefined4 *)param_1[1],param_1[2],uRam8013854c,uVar3 + 0x4000000 | 1);
    }
  }
  if (param_2 != 0) {
    uVar7 = extent_create(uRam80138538,uVar3,uVar3 + uVar10,0,0,0);
    iVar2 = pci_configure_bus(param_1 + 9,0,uVar7,0,0,*(undefined4 *)(iRam8013853c + 0x14));
    extent_destroy(uVar7);
    if (iVar2 != 0) {
      aprint_normal_dev(*param_1,uRam80138540);
      return 0;
    }
  }
  return 1;
}
