
void gpiocca_attach(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 auStack_68 [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;

  iVar3 = device_private(param_2);
  iVar4 = (*(code *)((undefined4 *)*param_3)[3])
                    (*(undefined4 *)*param_3,param_3[1],param_3[2],param_3[3],iVar3 + 8);
  piVar1 = piRam8012a47c;
  if (iVar4 != 0) {
    aprint_error(uRam8012a480);
    return;
  }
  aprint_naive(uRam8012a484);
  aprint_normal(uRam8012a488);
  uVar5 = device_private(param_1);
  bcmcca_gpio_intr_establish(uVar5,uRam8012a48c,iVar3);
  iVar4 = *piVar1;
  *piRam8012a490 = iVar3;
  *puRam8012a494 = *param_3;
  puVar2 = puRam8012a49c;
  *puRam8012a498 = param_3[1];
  if (iVar4 != 0) {
    return;
  }
  auStack_68[0] = *puVar2;
  auStack_68[1] = puVar2[1];
  auStack_68[2] = puVar2[2];
  auStack_68[3] = puVar2[3];
  uStack_58 = puVar2[4];
  uStack_54 = puVar2[5];
  uStack_50 = puVar2[6];
  uStack_4c = puVar2[7];
  uStack_48 = puVar2[8];
  uStack_44 = puVar2[9];
  uStack_40 = puVar2[10];
  uStack_3c = puVar2[0xb];
  uStack_38 = puVar2[0xc];
  uStack_34 = puVar2[0xd];
  uStack_30 = puVar2[0xe];
  uStack_2c = puVar2[0xf];
  callout_init(uRam8012a4a0,0);
  callout_reset(uRam8012a4a0,
                (int)((longlong)iRam8012a4ac * (longlong)*piRam8012a4a4 >> 0x23) -
                (*piRam8012a4a4 >> 0x1f),uRam8012a4a8,0);
  callout_init(uRam8012a4b0,0);
  GPIO_Setup();
  uVar6 = *puRam8012a4b4;
  *piVar1 = 1;
  if (uVar6 < 0x10) {
    printf(uRam8012a4b8,auStack_68[uVar6]);
    return;
  }
  printf(uRam8012a4bc,uVar6);
  return;
}
