
void gpio_attach(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = (*(code *)((undefined4 *)*param_3)[3])
                    (*(undefined4 *)*param_3,param_3[1],param_3[4],param_3[5],param_2 + 0x180);
  if (iVar4 == 0) {
    aprint_naive(uRam8012a5dc);
    aprint_normal(uRam8012a5e4);
    puVar1 = puRam8012a5e8;
    *(undefined4 *)(param_2 + 0x178) = *param_3;
    uVar2 = uRam8012a5ec;
    *(undefined4 *)(param_2 + 0x17c) = param_3[4];
    uVar3 = uRam8012a5f0;
    *puVar1 = 1;
    config_search_ia(uVar2,param_2,uVar3,0);
    return;
  }
  aprint_error(uRam8012a5e0);
  return;
}
