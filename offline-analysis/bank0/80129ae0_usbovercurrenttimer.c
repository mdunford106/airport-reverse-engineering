
void usbovercurrenttimer(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte in_Q;
  ulonglong uVar6;

  iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  uVar5 = *(uint *)(iVar3 + 0x158);
  if ((int)uVar5 < 7) {
    pic_set_priority(iVar3,7);
  }
  piVar2 = piRam80129c84;
  pcVar1 = pcRam80129c80;
  if ((*pcRam80129c80 == '\0') || (9 < *piRam80129c84)) {
    if ((*pcRam80129c80 == '\0') && (param_1 == 0)) {
      uVar6 = GPIO_read();
      if ((longlong)uVar6 < 0) {
        if (*piRam80129c88 != 0) {
          knote(piRam80129c88,0x8000000);
        }
      }
      else if (*piRam80129c88 != 0) {
        knote(piRam80129c88,0x2000000);
      }
    }
    else {
      if (*piRam80129c88 != 0) {
        knote(piRam80129c88,0x8000000);
      }
      callout_reset(uRam80129c90,*piRam80129c8c << 1,uRam80129c94,0);
    }
    *piVar2 = 0;
    *pcVar1 = '\0';
    iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar4 = *(uint *)(iVar3 + 0x158);
    if (uVar5 == uVar4) {
      return;
    }
  }
  else {
    callout_reset(uRam80129c90,*piRam80129c8c << 1,uRam80129c94,param_1);
    *piVar2 = *piVar2 + 1;
    *pcVar1 = '\0';
    iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar4 = *(uint *)(iVar3 + 0x158);
    if (uVar5 == uVar4) {
      return;
    }
  }
  disableIRQinterrupts();
  *(int *)(iVar3 + 0x164) = *(int *)(iVar3 + 0x164) + 1;
  pic_do_pending_ints((uint)(byte)(((int)(uVar5 - uVar4) < 0) << 4 | (uVar4 <= uVar5) << 2 |
                                   SBORROW4(uVar5,uVar4) << 1 | in_Q) << 0x1b,uVar5);
  *(int *)(iVar3 + 0x164) = *(int *)(iVar3 + 0x164) + -1;
  enableIRQinterrupts();
  iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  if ((*(int *)(iVar3 + 0x164) == 0) &&
     (*(uint *)(iVar3 + 0x17c) >> (*(uint *)(iVar3 + 0x158) & 0xff) != 0)) {
    dosoftints();
    return;
  }
  return;
}
