
undefined4 GPIO_interrupt_SetCallBack(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = param_1 * 0x14 + iRam8012a234;
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  return 0;
}
