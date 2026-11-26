
uint ContCompute(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  piVar3 = piRam8010e774;
  piVar2 = piRam8010e778;
  if (*piRam8010e774 != 0) {
    param_2[10] = param_2[7];
    piVar2 = piRam8010e778;
    *piVar3 = 0;
  }
  piVar3 = piRam8010e780;
  iVar4 = param_2[9] + (*piVar2 * param_2[3] * param_3 >> 10);
  iVar8 = (int)((longlong)iRam8010e77c * (longlong)(param_2[2] * param_3) >> 0x25) -
          (param_2[2] * param_3 >> 0x1f);
  iVar5 = param_2[5];
  if ((iVar4 <= (int)param_2[5]) && (iVar5 = param_2[4], iVar5 <= iVar4)) {
    iVar5 = iVar4;
  }
  param_2[9] = iVar5;
  iVar7 = iVar5 + iVar8;
  iVar4 = 0;
  if (*piVar3 != 0) {
    printf(uRam8010e784,*param_2,iVar7,param_3,iVar8,iVar5);
    iVar4 = *piVar3;
  }
  uVar1 = iVar7 >> 10;
  uVar6 = param_2[7];
  if (((int)uVar1 <= (int)param_2[7]) && (uVar6 = param_2[6], (int)uVar6 <= (int)uVar1)) {
    uVar6 = uVar1;
  }
  if (iVar4 != 0) {
    printf(uRam8010e788,*param_2,uVar6);
  }
  iVar5 = param_2[0xb];
  param_2[10] = uVar6;
  iVar4 = iVar5 * 0x48 + param_1;
  if (uVar6 < *(uint *)(iVar4 + 0x6b8)) {
    *(uint *)(iVar4 + 0x6b8) = uVar6;
    iVar5 = param_2[0xb];
  }
  iVar4 = iVar5 * 0x48 + param_1;
  if (*(uint *)(iVar4 + 0x6bc) < uVar6) {
    *(uint *)(iVar4 + 0x6bc) = uVar6;
    iVar5 = param_2[0xb];
  }
  *(undefined4 *)(iVar5 * 0x48 + param_1 + 0x6b4) = param_2[9];
  iVar5 = param_3 * 2 + 0x1800 >> 10;
  *(undefined4 *)(param_2[0xb] * 0x48 + param_1 + 0x6b0) = param_2[10];
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xc < iVar5) {
    iVar5 = 0xd;
  }
  param_1 = (param_2[0xb] * 0x12 + iVar5) * 4 + param_1;
  *(int *)(param_1 + 0x6c0) = *(int *)(param_1 + 0x6c0) + 1;
  return uVar6;
}
