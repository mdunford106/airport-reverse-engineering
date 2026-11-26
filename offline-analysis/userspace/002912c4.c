
undefined4
FUN_002912c4(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;

  FUN_00290274(DAT_00291364,DAT_00291360);
  uVar3 = 0xfffffff2;
  if (param_2 == 0) {
    piVar2 = (int *)FUN_007560c4(1,0x1c);
    piVar1 = DAT_00291368;
    uVar3 = 0xfffffffd;
    if (piVar2 != (int *)0x0) {
      *piVar2 = *DAT_00291368;
      *piVar1 = (int)piVar2;
      piVar2[1] = param_1;
      piVar2[3] = param_3;
      piVar2[4] = param_4;
      piVar2[5] = param_5;
      piVar2[2] = 0;
      uVar3 = 0;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = piVar2;
        uVar3 = 0;
      }
    }
  }
  FUN_00290464(DAT_00291364,DAT_0029136c);
  return uVar3;
}
