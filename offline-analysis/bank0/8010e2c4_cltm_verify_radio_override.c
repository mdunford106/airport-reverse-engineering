
int cltm_verify_radio_override
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  iVar2 = sysctl_lookup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_98);
  iVar1 = aiStack_34[0];
  uVar3 = 1 - param_5;
  if (1 < param_5) {
    uVar3 = 0;
  }
  if (iVar2 != 0) {
    uVar3 = uVar3 | 1;
  }
  if (uVar3 == 0) {
    iVar2 = 0x16;
    if (aiStack_34[0] + 1U < 0x66) {
      iVar2 = strcmp((void *)((int)param_9 + 8),pvRam8010e3b0);
      if (iVar2 == 0) {
        *piRam8010e3b4 = iVar1;
        iVar2 = 0;
      }
      else {
        *piRam8010e3b8 = iVar1;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
