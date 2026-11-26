
undefined4 gpio_read(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uStack_30;
  undefined4 auStack_24 [2];

  uVar1 = 0x16;
  if ((*(uint *)(param_3 + 0x10) & 3) == 0) {
    uStack_30 = GPIO_read();
    auStack_24[0] = (undefined4)uStack_30;
    if (*(int *)(param_3 + 0x10) == 4) {
      uVar1 = uiomove(auStack_24,4,param_3);
    }
    else {
      uVar1 = uiomove(&uStack_30,8,param_3);
    }
  }
  return uVar1;
}
