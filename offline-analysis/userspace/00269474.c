
int FUN_00269474(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  int iStack_28;
  int aiStack_24 [2];

  aiStack_24[0] = 0;
  iVar1 = FUN_0050be5c(0,in_stack_00000000,in_r3,aiStack_24);
  if (iVar1 == 0) {
    iVar2 = FUN_0050f370(aiStack_24[0]);
    iVar3 = thunk_FUN_00515cb4();
    if (iVar2 == iVar3) {
      iVar2 = FUN_0050ed00(aiStack_24[0],DAT_00269584);
      if (iVar2 == 0) {
        iVar1 = DAT_00269588;
      }
      else {
        iVar3 = FUN_0050f370();
        iVar4 = thunk_FUN_00516054();
        if (iVar3 == iVar4) {
          iVar2 = FUN_0050eb80(iVar2,9,&iStack_28);
          if (iVar2 == 0) {
            iVar1 = DAT_00269590;
          }
          else if (iStack_28 != 0) {
            iStack_28 = 1;
            iVar2 = FUN_0074c0d4(DAT_00269594,0,0,&iStack_28,4);
            if (iVar2 != 0) {
              piVar5 = (int *)FUN_00792904();
              if (*piVar5 == 0) {
                iVar1 = DAT_00269598;
              }
              else {
                piVar5 = (int *)FUN_00792904();
                iVar1 = *piVar5;
              }
            }
          }
        }
        else {
          iVar1 = DAT_0026958c;
        }
      }
    }
    else {
      iVar1 = -0xb;
    }
  }
  if (aiStack_24[0] != 0) {
    thunk_FUN_00516b38();
  }
  return iVar1;
}
