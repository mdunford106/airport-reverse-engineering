
void gpio_add_event(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte in_Q;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  uStack_38 = param_2;
  uStack_34 = param_1;
  microtime(&uStack_30);
  puVar3 = (undefined4 *)kern_malloc(0x20,uRam8012ae88,1);
  if (puVar3 == (undefined4 *)0x0) {
    printf(uRam8012ae9c);
  }
  else {
    puVar3[2] = uStack_30;
    puVar3[3] = uStack_2c;
    puVar3[4] = uStack_28;
    puVar3[5] = uStack_24;
    puVar3[1] = uStack_34;
    *puVar3 = uStack_38;
    iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar6 = *(uint *)(iVar4 + 0x158);
    if ((int)uVar6 < 5) {
      pic_set_priority(iVar4,5);
    }
    piVar1 = piRam8012ae8c;
    iVar4 = *piRam8012ae8c;
    if (0x13 < iVar4) {
      printf(uRam8012ae98);
      gpio_get_next_event(&uStack_30,&uStack_34,&uStack_38);
      iVar4 = *piVar1;
    }
    iVar2 = iRam8012ae90;
    *piVar1 = iVar4 + 1;
    puVar3[6] = 0;
    **(int **)(iVar2 + 4) = (int)puVar3;
    *(undefined4 **)(iVar2 + 4) = puVar3 + 6;
    wakeup(iVar2);
    if (*piRam8012ae94 != 0) {
      knote(piRam8012ae94,0x10000000);
    }
    iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar5 = *(uint *)(iVar4 + 0x158);
    if (uVar6 != uVar5) {
      disableIRQinterrupts();
      *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + 1;
      pic_do_pending_ints((uint)(byte)(((int)(uVar6 - uVar5) < 0) << 4 | (uVar5 <= uVar6) << 2 |
                                       SBORROW4(uVar6,uVar5) << 1 | in_Q) << 0x1b,uVar6,0);
      *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + -1;
      enableIRQinterrupts();
      iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      if ((*(int *)(iVar4 + 0x164) == 0) &&
         (*(uint *)(iVar4 + 0x17c) >> (*(uint *)(iVar4 + 0x158) & 0xff) != 0)) {
        dosoftints();
      }
    }
  }
  return;
}
