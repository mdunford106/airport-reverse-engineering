
undefined4 emc141x_match(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;

  if (*(int *)(param_3 + 0x10) == 0) {
    sVar1 = *(short *)(param_3 + 4);
    if ((((sVar1 == 0x3c || sVar1 == 0x1c) || (sVar1 == 0x4c)) || (sVar1 == 0x5c)) ||
       ((sVar1 == 0x6c || (sVar1 == 0x7c)))) {
      aprint_normal(uRam801827ec);
      return 1;
    }
  }
  else {
    iVar2 = iic_compat_match(param_3,uRam801827e4);
    if (iVar2 != 0) {
      aprint_normal(uRam801827e8);
      return 1;
    }
  }
  return 0;
}
