
undefined4 sysmonioctl(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;

  uVar2 = param_1 & 0xff | (param_1 >> 0x14) << 8;
  if (uVar2 == 1) {
    uVar1 = sysmonioctl_wdog();
    return uVar1;
  }
  if (uVar2 == 2) {
    uVar1 = sysmonioctl_power();
    return uVar1;
  }
  if (uVar2 == 0) {
    uVar1 = sysmonioctl_envsys();
    return uVar1;
  }
  return 0x13;
}
