
void emc141x_refresh(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bStack_32;
  undefined1 auStack_31 [5];

  iVar4 = *(int *)(param_1 + 0x14);
  bStack_32 = 0;
  (*(code *)(*(undefined4 **)(iVar4 + 0x178))[1])(**(undefined4 **)(iVar4 + 0x178),0);
  auStack_31[0] = *(undefined1 *)(iRam801827fc + *(int *)(param_2 + 8));
  iVar3 = iic_exec(*(undefined4 *)(iVar4 + 0x178),1,*(undefined2 *)(iVar4 + 0x17c),auStack_31,1,
                   &bStack_32,1,0);
  if (iVar3 == 0) {
    *(uint *)(param_2 + 0x20) = (uint)bStack_32 * iRam80182800 + iRam80182804;
    *(undefined4 *)(param_2 + 0x10) = 10;
  }
  auStack_31[0] = *(undefined1 *)(iRam80182808 + *(int *)(param_2 + 8));
  iVar3 = iic_exec(*(undefined4 *)(iVar4 + 0x178),1,*(undefined2 *)(iVar4 + 0x17c),auStack_31,1,
                   &bStack_32,1,0);
  if (iVar3 == 0) {
    *(uint *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + ((uint)bStack_32 * iRam80182800 >> 8);
    *(undefined4 *)(param_2 + 0x10) = 10;
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = uRam8018280c;
    *(undefined4 *)(param_2 + 0x10) = 10;
  }
  pbVar1 = pbRam80182810;
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 == 0) {
    auStack_31[0] = 0x1b;
    iic_exec(*(undefined4 *)(iVar4 + 0x178),1,*(undefined2 *)(iVar4 + 0x17c),auStack_31,1,
             pbRam80182810,1,0);
    uVar5 = *(uint *)(param_2 + 8);
  }
  uVar2 = uRam80182814;
  if (((int)(uint)*pbVar1 >> (uVar5 & 0xff) & 1U) != 0) {
    *(undefined4 *)(param_2 + 0x10) = 10;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
  }
  (*(code *)(*(undefined4 **)(iVar4 + 0x178))[2])(**(undefined4 **)(iVar4 + 0x178),0);
  return;
}
