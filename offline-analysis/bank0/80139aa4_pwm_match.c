
int pwm_match(undefined4 param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;

  uVar1 = strcmp((void *)*param_2,*(void **)(param_3 + 0xc));
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}
