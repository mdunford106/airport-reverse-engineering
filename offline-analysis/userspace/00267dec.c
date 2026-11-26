
int gpio_status_candidate
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint auStack_38 [2];
  uint uStack_30;
  undefined4 auStack_2c [2];

  iVar1 = FUN_005e9760(DAT_00267f54,0);
  if (iVar1 < 0) {
    piVar2 = (int *)FUN_00792904();
    if (*piVar2 == 0) {
      return DAT_00267f58;
    }
    piVar2 = (int *)FUN_00792904();
    if (*piVar2 != 0) {
      return *piVar2;
    }
  }
  iVar3 = FUN_005e94f8(iVar1,auStack_38,8);
  if (iVar3 != 8) {
    piVar2 = (int *)FUN_00792904();
    if (*piVar2 == 0) {
      iVar3 = DAT_00267f58;
      goto LAB_00267f38;
    }
    piVar2 = (int *)FUN_00792904();
    iVar3 = *piVar2;
    if (iVar3 != 0) goto LAB_00267f38;
  }
  uStack_30 = auStack_38[0] >> 6 & 1;
  iVar3 = FUN_0050ed84(0,0,DAT_00267f5c,DAT_00267f60);
  if (iVar3 == 0) {
    iVar3 = DAT_00267f64;
  }
  else {
    uVar4 = FUN_0050ec40(0,3,&uStack_30);
    thunk_FUN_00517134(iVar3,DAT_00267f68,uVar4);
    thunk_FUN_00516b38(uVar4);
    iVar3 = FUN_0050c558(0,iVar3,auStack_2c);
    if (iVar3 == 0) {
      uVar4 = FUN_0050eee8(auStack_2c[0]);
      uVar5 = FUN_0050eebc(auStack_2c[0]);
      iVar3 = FUN_00290d94(uVar4,uVar5,param_4,param_3,param_5,param_6);
      thunk_FUN_00516b38(auStack_2c[0]);
    }
  }
LAB_00267f38:
  if (-1 < iVar1) {
    FUN_005e9bc8(iVar1);
  }
  return iVar3;
}
