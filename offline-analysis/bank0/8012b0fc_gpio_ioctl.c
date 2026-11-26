
int gpio_ioctl(int param_1,uint param_2,ulonglong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  byte in_Q;
  ulonglong uVar7;

  puVar5 = *(uint **)(param_1 + 0x10);
  if (param_2 == uRam8012b548) {
    iVar2 = GPIO_interrupt_pin((int)*param_3,1);
    return iVar2;
  }
  if (param_2 <= uRam8012b548) {
    if (param_2 == uRam8012b548 - 3) {
      iVar2 = GPIO_map_output_pin((uint)*param_3);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar4 = (uint)*param_3;
      uVar6 = 1 >> (0x20 - uVar4 & 0xff);
      if (-1 < (int)(uVar4 - 0x20)) {
        uVar6 = 1 << (uVar4 - 0x20 & 0xff);
      }
      *puVar5 = *puVar5 | 1 << (uVar4 & 0xff);
      puVar5[1] = puVar5[1] | uVar6;
      return 0;
    }
    if (uRam8012b548 - 3 < param_2) {
      if (param_2 == uRam8012b550) {
        iVar2 = GPIO_map_input_pin((uint)*param_3);
        return iVar2;
      }
      if (param_2 == uRam8012b550 + 1) {
        iVar2 = GPIO_invert_input_pin((int)*param_3);
        return iVar2;
      }
    }
    else {
      if (param_2 == uRam8012b548 + 0x80000002) {
        uVar7 = GPIO_read();
        microtime(param_3 + 2);
        *(int *)(param_3 + 1) = (int)(uVar7 >> 0x20);
        *(undefined4 *)((int)param_3 + 0xc) = 0;
        *param_3 = uVar7;
        return 0;
      }
      if (param_2 == uRam8012b548 + 0x80000003) {
        iVar2 = *piRam8012b558;
        *(int *)param_3 = iVar2;
        *(int *)((int)param_3 + 4) = iVar2 >> 0x1f;
        *(undefined4 *)(param_3 + 1) = 0x16;
        *(undefined4 *)((int)param_3 + 0xc) = 0;
        puVar5 = puRam8012b55c;
        *(undefined4 *)(param_3 + 4) = 0x16;
        if ((*puVar5 & 0x20000) == 0) {
          *(undefined4 *)((int)param_3 + 0x24) = 1;
          printf(uRam8012b560);
          return 0;
        }
        *(undefined4 *)((int)param_3 + 0x24) = 2;
        return 0;
      }
    }
LAB_8012b148:
    iVar2 = gpio_platform_ioctl(param_2,param_3);
    return iVar2;
  }
  if (param_2 == uRam8012b54c) {
    iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar6 = *(uint *)(iVar2 + 0x158);
    if ((int)uVar6 < 5) {
      pic_set_priority(iVar2,5);
    }
    *puRam8012b564 = 1;
    iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar4 = *(uint *)(iVar2 + 0x158);
    if (uVar6 != uVar4) {
      bVar1 = ((int)(uVar6 - uVar4) < 0) << 4 | (uVar4 <= uVar6) << 2 | SBORROW4(uVar6,uVar4) << 1 |
              in_Q;
      disableIRQinterrupts();
      *(int *)(iVar2 + 0x164) = *(int *)(iVar2 + 0x164) + 1;
LAB_8012b380:
      pic_do_pending_ints((uint)bVar1 << 0x1b,uVar6,0);
      *(int *)(iVar2 + 0x164) = *(int *)(iVar2 + 0x164) + -1;
      enableIRQinterrupts();
      iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      if ((*(int *)(iVar2 + 0x164) == 0) &&
         (*(uint *)(iVar2 + 0x17c) >> (*(uint *)(iVar2 + 0x158) & 0xff) != 0)) {
        dosoftints();
      }
      return 0;
    }
  }
  else if (param_2 < uRam8012b54c) {
    if (param_2 == uRam8012b54c - 4) {
      iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      uVar6 = *(uint *)(iVar2 + 0x158);
      if ((int)uVar6 < 5) {
        pic_set_priority(iVar2,5);
      }
      iVar2 = 0;
      do {
        iVar3 = gpio_get_next_event(param_3 + 2,param_3 + 4,(int)param_3 + 0x24);
        if (iVar3 != 0) break;
        iVar2 = tsleep(uRam8012b570,uRam8012b568,uRam8012b56c);
      } while (iVar2 == 0);
      iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      uVar4 = *(uint *)(iVar3 + 0x158);
      if (uVar6 == uVar4) {
        return iVar2;
      }
      disableIRQinterrupts();
      *(int *)(iVar3 + 0x164) = *(int *)(iVar3 + 0x164) + 1;
      pic_do_pending_ints((uint)(byte)(((int)(uVar6 - uVar4) < 0) << 4 | (uVar4 <= uVar6) << 2 |
                                       SBORROW4(uVar6,uVar4) << 1 | in_Q) << 0x1b,uVar6,0);
      *(int *)(iVar3 + 0x164) = *(int *)(iVar3 + 0x164) + -1;
      enableIRQinterrupts();
      iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      if (*(int *)(iVar3 + 0x164) != 0) {
        return iVar2;
      }
      if (*(uint *)(iVar3 + 0x17c) >> (*(uint *)(iVar3 + 0x158) & 0xff) == 0) {
        return iVar2;
      }
      dosoftints();
      return iVar2;
    }
    if (param_2 != uRam8012b54c - 1) goto LAB_8012b148;
  }
  else {
    if (param_2 == uRam8012b554) {
      GPIO_write(*param_3,param_3[1]);
      return 0;
    }
    if (param_2 < uRam8012b554) {
      iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      uVar6 = *(uint *)(iVar2 + 0x158);
      if ((int)uVar6 < 5) {
        pic_set_priority(iVar2,5);
      }
      *puRam8012b564 = 0;
      iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      uVar4 = *(uint *)(iVar2 + 0x158);
      if (uVar6 != uVar4) {
        bVar1 = ((int)(uVar6 - uVar4) < 0) << 4 | (uVar4 <= uVar6) << 2 | SBORROW4(uVar6,uVar4) << 1
                | in_Q;
        disableIRQinterrupts();
        *(int *)(iVar2 + 0x164) = *(int *)(iVar2 + 0x164) + 1;
        goto LAB_8012b380;
      }
    }
    else {
      if (param_2 != uRam8012b554 + 0x58) goto LAB_8012b148;
      iVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      uVar6 = *(uint *)(iVar2 + 0x158);
      if ((int)uVar6 < 5) {
        pic_set_priority(iVar2,5);
      }
      iVar2 = gpio_get_next_event(param_3 + 2,param_3 + 4,(int)param_3 + 0x24);
      iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      uVar4 = *(uint *)(iVar3 + 0x158);
      if (uVar6 != uVar4) {
        disableIRQinterrupts();
        *(int *)(iVar3 + 0x164) = *(int *)(iVar3 + 0x164) + 1;
        pic_do_pending_ints((uint)(byte)(((int)(uVar6 - uVar4) < 0) << 4 | (uVar4 <= uVar6) << 2 |
                                         SBORROW4(uVar6,uVar4) << 1 | in_Q) << 0x1b,uVar6,0);
        *(int *)(iVar3 + 0x164) = *(int *)(iVar3 + 0x164) + -1;
        enableIRQinterrupts();
        iVar3 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
        if ((*(int *)(iVar3 + 0x164) == 0) &&
           (*(uint *)(iVar3 + 0x17c) >> (*(uint *)(iVar3 + 0x158) & 0xff) != 0)) {
          dosoftints();
        }
      }
      if (iVar2 < 1) {
        return 0x23;
      }
    }
  }
  return 0;
}
