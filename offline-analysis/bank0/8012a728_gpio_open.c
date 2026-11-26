
int gpio_open(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];

  iVar1 = device_lookup(uRam8012a7e4,param_1 & 0xff | (param_1 >> 0x14) << 8);
  if ((iVar1 == 0) || (iVar1 = device_private(), iVar1 == 0)) {
    printf(uRam8012a7e8);
    return 6;
  }
  puVar2 = (undefined4 *)kern_malloc(8,uRam8012a7ec);
  *puVar2 = 0;
  puVar2[1] = 0;
  iVar1 = fd_allocfile(auStack_24,&uStack_28);
  if (iVar1 == 0) {
    iVar1 = fd_clone(auStack_24[0],uStack_28,param_3,uRam8012a7f0,puVar2);
    return iVar1;
  }
  kern_free(puVar2,uRam8012a7ec,param_3,uRam8012a7f0);
  return iVar1;
}
