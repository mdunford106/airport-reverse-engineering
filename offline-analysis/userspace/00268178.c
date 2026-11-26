
undefined2 FUN_00268178(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  uint local_20;
  int local_1c;

  local_38 = 0;
  iVar2 = FUN_005e9760(DAT_00268258,0);
  if (iVar2 == -1) {
    FUN_0077476c(DAT_0026825c,DAT_00268258);
    uVar1 = 0;
  }
  else {
    while( true ) {
      iVar3 = FUN_007928c8(iVar2,DAT_00268260,&local_38);
      if (iVar3 == -1) {
        FUN_0077476c(DAT_00268264);
      }
      if ((local_20 & 1) == 0) {
        local_38 = local_38 + 1;
        FUN_005e9bc8(iVar2);
        goto LAB_00268220;
      }
      if (local_1c == 0) break;
      local_38 = local_38 + 1;
    }
    FUN_005e9bc8(iVar2);
    if (local_34 == 0) {
LAB_00268220:
      uVar1 = 0;
    }
    else {
      uVar1 = thunk_FUN_007922c4(local_34 + DAT_00268268,DAT_0026826c);
    }
  }
  return uVar1;
}
