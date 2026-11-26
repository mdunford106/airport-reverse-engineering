
undefined4 gpio_write(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ulonglong *puVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_1c [2];

  puVar2 = *(ulonglong **)(param_1 + 0x10);
  if ((*(uint *)(param_3 + 0x10) & 3) != 0) {
    return 0x16;
  }
  if (*(uint *)(param_3 + 0x10) == 4) {
    iVar1 = uiomove(auStack_1c,4);
    if (iVar1 != 0) {
      return 0xe;
    }
    uStack_28 = auStack_1c[0];
    uStack_24 = 0;
  }
  else {
    iVar1 = uiomove(&uStack_28,8);
    if (iVar1 != 0) {
      return 0xe;
    }
  }
  GPIO_write(*puVar2,CONCAT44(uStack_24,uStack_28));
  return 0;
}
