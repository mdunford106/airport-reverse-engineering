
void iproc_pwmc_clear_set_bit(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uStack_24;

  uStack_24 = (*(code *)(*(undefined4 **)(param_1 + 4))[0xb])
                        (**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  uVar2 = 1 << (param_3 & 0x1f);
  iVar1 = (int)param_3 >> 5;
  (&uStack_24)[iVar1] = (&uStack_24)[iVar1] & ~uVar2;
  if ((param_4 == 1) && ((uVar2 & (&uStack_24)[iVar1]) == 0)) {
    (&uStack_24)[iVar1] = uVar2 | (&uStack_24)[iVar1];
  }
  (*(code *)(*(undefined4 **)(param_1 + 4))[0x17])
            (**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2,uStack_24);
  return;
}
