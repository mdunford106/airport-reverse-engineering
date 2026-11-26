
undefined4
cltm_stats_sysctl(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 void *param_9)

{
  undefined4 uVar1;
  undefined1 auStack_550 [1224];
  undefined1 auStack_88 [48];
  undefined1 *puStack_58;

  memcpy(auStack_88,param_9,0x60);
  puStack_58 = auStack_550;
  uVar1 = 6;
  if (*piRam8010e11c != 0) {
    memcpy(puStack_58,(void *)(*piRam8010e11c + 0x5b8),uRam8010e120);
    uVar1 = sysctl_lookup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_88
                         );
    if (*piRam8010e124 != 0) {
      *puRam8010e128 = 1;
    }
  }
  return uVar1;
}
