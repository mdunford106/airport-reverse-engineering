
int gpio_match(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;

  iVar1 = strcmp((void *)*param_2,*(void **)(param_3 + 0xc));
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = 1 - *puRam8012a724;
  if (1 < *puRam8012a724) {
    iVar1 = 0;
  }
  return iVar1;
}
