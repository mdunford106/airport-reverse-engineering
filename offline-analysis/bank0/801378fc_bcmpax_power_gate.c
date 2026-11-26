
void bcmpax_power_gate(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = device_private();
  if (param_2 == 0) {
    pmf_device_recursive_suspend(param_1,iVar1 + 0x238);
    return;
  }
  pmf_device_subtree_resume(param_1,iVar1 + 0x238);
  return;
}
