
int cltm_stats_reset_sysctl
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              uint param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,void *param_9)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_98 [48];
  undefined4 *puStack_68;
  undefined4 auStack_34 [2];

  memcpy(auStack_98,param_9,0x60);
  puStack_68 = auStack_34;
  auStack_34[0] = **(undefined4 **)((int)param_9 + 0x30);
  iVar1 = sysctl_lookup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_98);
  uVar2 = 1 - param_5;
  if (1 < param_5) {
    uVar2 = 0;
  }
  if (iVar1 != 0) {
    uVar2 = uVar2 | 1;
  }
  if ((uVar2 == 0) && (iVar1 = 6, *piRam8010e1f4 != 0)) {
    *puRam8010e1f8 = auStack_34[0];
    iVar1 = 0;
  }
  return iVar1;
}
