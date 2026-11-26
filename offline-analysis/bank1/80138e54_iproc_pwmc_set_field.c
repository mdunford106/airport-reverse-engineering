
void iproc_pwmc_set_field(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;

  uVar1 = (*(code *)(*(undefined4 **)(param_1 + 4))[0xb])
                    (**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  (*(code *)(*(undefined4 **)(param_1 + 4))[0x17])
            (**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2,
             uVar1 & ~param_3 | param_5 << (param_4 & 0xff));
  return;
}
