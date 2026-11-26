
undefined4 GPIO_interrupt_pin_ex(uint param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte in_Q;

  uVar6 = 1 << (param_1 & 0xff);
  bVar7 = param_2 != 0;
  if (bVar7 && param_3 == 3) {
    *puRam8012ab34 = uVar6 | *puRam8012ab34;
  }
  else {
    *puRam8012ab34 = ~uVar6 & *puRam8012ab34;
  }
  puVar1 = puRam8012ab3c;
  if (bVar7 && param_3 == 2) {
    *puRam8012ab38 = uVar6 | *puRam8012ab38;
  }
  else {
    *puRam8012ab38 = ~uVar6 & *puRam8012ab38;
  }
  puVar2 = puRam8012ab40;
  uVar3 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puRam8012ab40,0x7c);
  if (param_3 == 2) {
    uVar3 = uVar6 | uVar3;
  }
  else {
    uVar3 = uVar3 & ~uVar6;
  }
  (*(code *)((undefined4 *)*puVar1)[0x17])(*(undefined4 *)*puVar1,*puVar2,0x7c,uVar3);
  uVar3 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x74);
  if (param_3 == 3) {
    uVar3 = uVar6 | uVar3;
  }
  else {
    uVar3 = uVar3 & ~uVar6;
  }
  (*(code *)((undefined4 *)*puVar1)[0x17])(*(undefined4 *)*puVar1,*puVar2,0x74,uVar3);
  *(int *)(param_1 * 0x14 + iRam8012ab44 + 0xc) = param_2;
  puVar2 = puRam8012ab40;
  puVar1 = puRam8012ab3c;
  iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  uVar3 = *(uint *)(iVar4 + 0x158);
  if ((int)uVar3 < 5) {
    pic_set_priority(iVar4,5);
  }
  uVar5 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x60);
  if ((bVar7) && ((uVar6 & uVar5) != 0)) {
    uVar5 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x70);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,0x70,uVar5 ^ uVar6 & *puRam8012ab34);
    (*(code *)((undefined4 *)*puVar1)[0x17])(*(undefined4 *)*puVar1,*puVar2,0x78,uVar6);
    uVar5 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x84);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,0x84,uVar5 ^ uVar6 & *puRam8012ab38);
    printf(uRam8012ab48,param_1);
  }
  iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  uVar6 = *(uint *)(iVar4 + 0x158);
  if (uVar3 != uVar6) {
    disableIRQinterrupts();
    *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + 1;
    pic_do_pending_ints((uint)(byte)(((int)(uVar3 - uVar6) < 0) << 4 | (uVar6 <= uVar3) << 2 |
                                     SBORROW4(uVar3,uVar6) << 1 | in_Q) << 0x1b,uVar3,0);
    *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + -1;
    enableIRQinterrupts();
    iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    if ((*(int *)(iVar4 + 0x164) == 0) &&
       (*(uint *)(iVar4 + 0x17c) >> (*(uint *)(iVar4 + 0x158) & 0xff) != 0)) {
      dosoftints();
    }
  }
  return 0;
}
