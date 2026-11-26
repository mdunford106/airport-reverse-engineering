
void iproc_pwmc_stop(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 * 4 + param_1 + 0xc);
  iproc_pwmc_clear_set_bit(param_1,0,param_2,0);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}
