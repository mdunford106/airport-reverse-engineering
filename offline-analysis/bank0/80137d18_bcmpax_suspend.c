
undefined4 bcmpax_suspend(void)

{
  int iVar1;

  iVar1 = device_private();
  (*(code *)(*(undefined4 **)(iVar1 + 4))[0x17])
            (**(undefined4 **)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0x330,0);
  (*(code *)(*(undefined4 **)(iVar1 + 4))[0x17])
            (**(undefined4 **)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0,0);
  return 1;
}
