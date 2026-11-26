
void gpiotimer(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte in_Q;

  callout_reset(uRam8012aca0,
                (int)((longlong)iRam8012ac9c * (longlong)*piRam8012ac98 >> 0x23) -
                (*piRam8012ac98 >> 0x1f),uRam8012aca4,0);
  if (*piRam8012aca8 == 0) {
    return;
  }
  iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  uVar4 = *(uint *)(iVar2 + 0x158);
  if ((int)uVar4 < 5) {
    pic_set_priority(iVar2,5);
  }
  piVar1 = piRam8012acac;
  iVar2 = *piRam8012acac;
  if (*piRam8012acac == 1) {
    GPIO_write(0x800,0x800);
    iVar2 = 2;
  }
  if (*piVar1 == 2) {
    GPIO_write(0x800,0);
    iVar2 = 3;
  }
  if (*piVar1 == 3) {
    iVar2 = 0;
  }
  *piVar1 = iVar2;
  iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  uVar3 = *(uint *)(iVar2 + 0x158);
  if (uVar4 == uVar3) {
    return;
  }
  disableIRQinterrupts();
  *(int *)(iVar2 + 0x164) = *(int *)(iVar2 + 0x164) + 1;
  pic_do_pending_ints((uint)(byte)(((int)(uVar4 - uVar3) < 0) << 4 | (uVar3 <= uVar4) << 2 |
                                   SBORROW4(uVar4,uVar3) << 1 | in_Q) << 0x1b,uVar4,0);
  *(int *)(iVar2 + 0x164) = *(int *)(iVar2 + 0x164) + -1;
  enableIRQinterrupts();
  iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  if ((*(int *)(iVar2 + 0x164) == 0) &&
     (*(uint *)(iVar2 + 0x17c) >> (*(uint *)(iVar2 + 0x158) & 0xff) != 0)) {
    dosoftints();
  }
  return;
}
