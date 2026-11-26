
bool applfanpwm_match(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;

  iVar1 = strcmp((void *)*param_2,*(void **)(param_3 + 0xc));
  if (iVar1 != 0) {
    aprint_naive(uRam80129488);
  }
  return iVar1 == 0;
}
