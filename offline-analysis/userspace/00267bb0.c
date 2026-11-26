
int FUN_00267bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  bool bVar2;
  uint auStack_24 [2];

  iVar1 = FUN_00267b54(DAT_00267c24,auStack_24);
  if (iVar1 == 0) {
    bVar2 = 1 < auStack_24[0];
    auStack_24[0] = 1 - auStack_24[0];
    if (bVar2) {
      auStack_24[0] = 0;
    }
    iVar1 = FUN_00290d94(4,auStack_24,param_4,param_3,param_5,param_6);
  }
  return iVar1;
}
