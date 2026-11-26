
void bcmcca_mainbus_attach(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  puVar7 = puRam80132e9c;
  piVar1 = piRam80132e98;
  *piRam80132e98 = param_2;
  *(int **)(param_2 + 0x38) = piVar1;
  puVar3 = puRam80132ea0;
  puVar7 = (undefined4 *)*puVar7;
  piVar1[1] = (int)puVar7;
  (*(code *)puVar7[3])(*puVar7,*puVar3,0,0x1000,piVar1 + 2);
  uVar4 = (*(code *)((undefined4 *)piVar1[1])[0xb])(*(undefined4 *)piVar1[1],piVar1[2],0);
  aprint_naive(uRam80132ea4);
  aprint_normal(uRam80132ea8,uVar4 & 0xffff,((uVar4 & 0xf0000) >> 0x12) + 0x41,
                (uVar4 & 0xf0000) >> 0x10 & 3);
  iVar5 = intr_establish(0x75,5,3,uRam80132eac,piVar1);
  piVar1[7] = iVar5;
  if (iVar5 == 0) {
    aprint_error_dev(*piVar1,uRam80132eb8);
    return;
  }
  aprint_normal_dev(*piVar1,uRam80132eb0,0x75);
  iStack_34 = piVar1[1];
  iStack_30 = piVar1[2];
  uStack_2c = 0x300;
  uStack_24 = 0;
  uStack_28 = 8;
  iVar5 = config_found(*piVar1,&iStack_34,uRam80132eb4);
  if (iVar5 != 0) {
    iVar6 = device_private();
    piVar1[3] = iVar6;
  }
  uStack_2c = 0x400;
  uStack_24 = 1;
  iVar6 = config_found(*piVar1,&iStack_34,uRam80132eb4);
  piVar2 = piRam80132e98;
  if (iVar6 == 0) {
    if (iVar5 == 0) goto LAB_80132e40;
  }
  else {
    iVar5 = device_private();
    piVar2[4] = iVar5;
    piVar2[8] = piVar2[8] & 0xffff0fff;
  }
  uVar4 = (*(code *)((undefined4 *)piVar1[1])[0xb])(*(undefined4 *)piVar1[1],piVar1[2],0x24);
  (*(code *)((undefined4 *)piVar1[1])[0x17])(*(undefined4 *)piVar1[1],piVar1[2],0x24,uVar4 | 0x40);
LAB_80132e40:
  iStack_34 = piVar1[1];
  iStack_30 = piVar1[2];
  uStack_2c = 0x60;
  uStack_28 = 0x20;
  uStack_24 = 0xffffffff;
  config_found(*piVar1,&iStack_34,uRam80132eb4);
  return;
}
