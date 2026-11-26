
/* Dispatch names: twiddle-gpio. GPIO configuration and manipulation */

void cmd_twiddle_gpio(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_50 [10];
  int local_28;
  int local_24;

  bVar1 = param_1 != 3 && param_1 != 1;
  local_28 = 0;
  local_24 = 0;
  if (param_1 != 3 && param_1 != 1) {
    FUN_00765090(DAT_00309dd4);
    FUN_00765090(DAT_00309dd8);
    FUN_00765090(DAT_00309ddc);
                    /* WARNING: Subroutine does not return */
    FUN_00739280(2,DAT_00309de0);
  }
  if (param_1 == 3) {
    uVar7 = FUN_0076ca54(*(undefined4 *)(param_2 + 4),bVar1,bVar1);
    uVar7 = uVar7 & 0xff;
    local_28 = FUN_0076ca54(*(undefined4 *)(param_2 + 8),bVar1,bVar1);
  }
  else {
    uVar7 = 0xff;
  }
  local_24 = 0;
  iVar2 = FUN_005e9760(DAT_00309de4,2);
  if (iVar2 < 0) {
    puVar3 = (undefined4 *)FUN_00792904();
                    /* WARNING: Subroutine does not return */
    FUN_00739280(1,DAT_00309de8,*puVar3);
  }
  if (param_1 == 1) {
    uVar8 = FUN_005e94f8(iVar2,&local_28,8);
    iVar4 = (int)uVar8;
    if (iVar4 < 0) {
      puVar3 = (undefined4 *)FUN_00792904();
      uVar6 = *puVar3;
      uVar5 = DAT_00309dec;
      goto LAB_00309db0;
    }
    FUN_0077476c(DAT_00309df0,(int)((ulonglong)uVar8 >> 0x20),local_28,local_24);
  }
  else {
    FUN_0078cf10(local_50,0,0x28);
    local_50[1] = 0;
    local_50[0] = uVar7;
    iVar4 = FUN_007928c8(iVar2,DAT_00309df4,local_50);
    if (iVar4 < 0) {
      puVar3 = (undefined4 *)FUN_00792904();
      FUN_0077476c(DAT_00309df8,*puVar3);
    }
    if ((local_28 == 1) && (local_24 == 0)) {
      local_28 = -1;
      local_24 = -1;
    }
    iVar4 = FUN_005e93a0(iVar2,&local_28,8);
    if (-1 < iVar4) {
      FUN_005e9bc8(iVar2);
      iVar4 = 0;
      goto LAB_00309dc0;
    }
    puVar3 = (undefined4 *)FUN_00792904();
    uVar6 = *puVar3;
    uVar5 = DAT_00309dfc;
LAB_00309db0:
    FUN_0077476c(uVar5,uVar6);
  }
  FUN_005e9bc8(iVar2);
LAB_00309dc0:
                    /* WARNING: Subroutine does not return */
  FUN_007743c4(iVar4);
}
