
void bcmpax_resume(void)

{
  int iVar1;
  uint uVar2;

  iVar1 = device_private();
  if (*(uint *)(iVar1 + 0x84) < 2) {
    uVar2 = bcmpax_conf_read(iVar1,0,uRam8013862c);
    bcmpax_conf_write(iVar1,0,uRam8013862c,uVar2 & 0xfffffff8 | 2);
    uVar2 = bcmpax_conf_read(iVar1,0,0xb4);
    bcmpax_conf_write(iVar1,0,0xb4,uVar2 & 0xffff8f1f | 0x2040);
  }
  (*(code *)(*(undefined4 **)(iVar1 + 4))[0x17])
            (**(undefined4 **)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0,3);
  delay(0xfa);
  (*(code *)(*(undefined4 **)(iVar1 + 4))[0x17])
            (**(undefined4 **)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0,1);
  bcmpax_configure(iVar1,0);
  return;
}
