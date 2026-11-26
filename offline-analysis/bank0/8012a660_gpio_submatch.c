
bool gpio_submatch(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  uStack_38 = *(undefined4 *)(param_1 + 0x178);
  uStack_34 = *(undefined4 *)(param_1 + 0x180);
  puVar2 = *(undefined4 **)(param_2 + 0xc);
  uStack_30 = *puVar2;
  uStack_2c = puVar2[1];
  uStack_28 = puVar2[2];
  uStack_24 = puVar2[3];
  iVar1 = config_match(param_1,param_2,&uStack_38);
  if (iVar1 != 0) {
    config_attach(param_1,param_2,&uStack_38,uRam8012a6e8);
  }
  return iVar1 != 0;
}
