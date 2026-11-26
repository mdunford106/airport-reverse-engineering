
int cltm_setfreq(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,void *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_98 [48];
  int *piStack_68;
  int aiStack_34 [2];

  memcpy(auStack_98,param_9,0x60);
  piStack_68 = aiStack_34;
  aiStack_34[0] = **(int **)((int)param_9 + 0x30);
  iVar1 = sysctl_lookup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_98);
  uVar3 = 1 - param_5;
  if (1 < param_5) {
    uVar3 = 0;
  }
  if (iVar1 != 0) {
    uVar3 = uVar3 | 1;
  }
  if (uVar3 == 0) {
    iVar1 = 0x16;
    if (0 < aiStack_34[0]) {
      iVar2 = *piRam8010e49c;
      *piRam8010e4a0 = aiStack_34[0];
      iVar1 = 0;
      if (iVar2 != 0) {
        wakeup(iVar2);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
