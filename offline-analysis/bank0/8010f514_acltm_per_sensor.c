
undefined4 acltm_per_sensor(undefined4 param_1,int param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *arg0;

  puVar1 = puRam8010f724;
  iVar3 = iRam8010f720;
  uVar5 = 0;
  arg0 = (void *)(param_2 + 0x44);
  piVar4 = param_3;
  do {
    if (((void *)piVar4[2] != (void *)0x0) && (iVar2 = strcmp(arg0,(void *)piVar4[2]), iVar2 == 0))
    {
      if (*(int *)(param_2 + 0xc) == 0) {
        iVar2 = *(int *)(param_2 + 0x20);
        if (iVar3 < iVar2) goto LAB_8010f578;
LAB_8010f630:
        if (*(char *)((int)piVar4 + 0x11) != -1) {
          *(char *)((int)piVar4 + 0x11) = *(char *)((int)piVar4 + 0x11) + '\x01';
          *(undefined1 *)(piVar4 + 4) = 0;
          goto LAB_8010f5a8;
        }
LAB_8010f5b4:
        *puVar1 = *puVar1 | 1 << (uVar5 & 0xff);
      }
      else {
        iVar2 = *(int *)(param_2 + 0x20);
LAB_8010f578:
        piVar4[3] = iVar2;
        if ((char)piVar4[4] != -1) {
          *(char *)(piVar4 + 4) = (char)piVar4[4] + '\x01';
          *(undefined1 *)((int)piVar4 + 0x11) = 0;
        }
        if ((*(int *)(param_2 + 0xc) == 0) && (*(int *)(param_2 + 0x20) <= iVar3))
        goto LAB_8010f630;
LAB_8010f5a8:
        if (3 < *(byte *)((int)piVar4 + 0x11)) goto LAB_8010f5b4;
      }
      if (3 < *(byte *)(piVar4 + 4)) {
        *puVar1 = ~(1 << (uVar5 & 0xff)) & *puVar1;
      }
      *param_3 = *param_3 + 1;
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 3;
  } while (uVar5 != 6);
  iVar3 = strcmp(arg0,(void *)param_3[0x169]);
  if (iVar3 == 0) {
    param_3[0x168] = *(int *)(param_2 + 0x20);
    param_3[0x296] = *(int *)(param_2 + 0x20);
    return 1;
  }
  iVar3 = strcmp(arg0,(void *)param_3[0x16b]);
  piVar4 = piRam8010f728;
  if (iVar3 != 0) {
    iVar3 = strcmp(arg0,pvRam8010f730);
    if (iVar3 == 0) {
      param_3[0x299] = *(int *)(param_2 + 0x20);
      return 1;
    }
    return 1;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  param_3[0x16a] = iVar2;
  param_3[0x293] = *(int *)(param_2 + 0x20);
  iVar3 = *piVar4;
  if ((iVar2 < iVar3 * 10) || (iVar3 * 0x32 < iVar2)) {
    if (*(char *)((int)param_3 + 0x5b1) != -1) {
      *(char *)((int)param_3 + 0x5b1) = *(char *)((int)param_3 + 0x5b1) + '\x01';
      *(undefined1 *)(param_3 + 0x16c) = 0;
    }
    Force_Fan_Duty_Cycle(iVar3);
  }
  else if ((char)param_3[0x16c] != -1) {
    *(char *)(param_3 + 0x16c) = (char)param_3[0x16c] + '\x01';
    *(undefined1 *)((int)param_3 + 0x5b1) = 0;
    goto LAB_8010f6bc;
  }
  if (3 < *(byte *)((int)param_3 + 0x5b1)) {
    *puRam8010f72c = 1;
  }
LAB_8010f6bc:
  if (3 < *(byte *)(param_3 + 0x16c)) {
    *puRam8010f72c = 0;
  }
  return 1;
}
