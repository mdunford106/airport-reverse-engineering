
int FUN_00268080(int param_1)

{
  int iVar1;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;

  iVar1 = FUN_005e9760(DAT_00268160,0);
  if (iVar1 != -1) {
    if (param_1 != -1) {
      if (0x100 < param_1 + 1U) {
        return -4;
      }
      local_30 = thunk_FUN_007922c4(param_1 * DAT_00268164,0xff);
    }
    local_34 = DAT_00268164;
    local_2c = 0;
    local_38 = 1;
    local_3c = 0;
    FUN_007928c8(iVar1,DAT_00268168,&local_3c);
    FUN_007928c8(iVar1,DAT_0026816c,&local_3c);
    FUN_007928c8(iVar1,DAT_00268170,&local_3c);
    FUN_007928c8(iVar1,DAT_00268174,&local_3c);
    local_2c = 1;
    FUN_007928c8(iVar1,DAT_00268168,&local_3c);
    FUN_005e9bc8(iVar1);
    iVar1 = 0;
  }
  return iVar1;
}
