
undefined4 pwm_detach(void)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = device_private();
  iVar3 = 0;
  iVar2 = iVar1;
  do {
    iVar3 = iVar3 + 1;
    kern_free(*(undefined4 *)(iVar2 + 0xc),uRam801399b4);
    iVar2 = iVar2 + 4;
  } while (iVar3 != 4);
  mutex_destroy(iVar1 + 0x1c);
  cv_destroy(iVar1 + 0x20);
  return 0;
}
