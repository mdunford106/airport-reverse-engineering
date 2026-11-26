
void iproc_pwmc_config_duty_ticks(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;

  iVar1 = param_2 * 0xc;
  iVar4 = *(int *)(param_2 * 4 + param_1 + 0xc);
  uVar5 = *(uint *)(iVar1 + iRam80139410);
  uVar8 = *(uint *)(iVar1 + iRam80139410 + 4);
  uVar2 = (*(code *)(*(undefined4 **)(param_1 + 4))[0xb])
                    (**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(iVar1 + iRam80139410 + 8));
  uVar9 = *(undefined4 *)(iVar1 + iRam80139414);
  uVar6 = *(undefined4 *)(iVar1 + iRam80139414 + 4);
  uVar7 = *(undefined4 *)(iVar1 + iRam80139414 + 8);
  uVar3 = __aeabi_uidivmod(*(undefined4 *)(param_3 + 8),((uVar5 & uVar2) >> (uVar8 & 0xff)) + 1);
  iproc_pwmc_set_field(param_1,uVar7,uVar9,uVar6,uVar3);
  uVar2 = (*(code *)(*(undefined4 **)(param_1 + 4))[0xb])
                    (**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
  if ((uVar2 & 1 << (param_2 & 0xff) & 0xf) != 0) {
    iproc_pwmc_stop(param_1,param_2);
    delay(1);
    iproc_pwmc_start(param_1,param_2);
  }
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_3 + 8);
  return;
}
