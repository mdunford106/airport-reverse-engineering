
int applfanpwmioctl(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = device_lookup_private(uRam80129048,param_1 & 0xff | (param_1 >> 0x14) << 8);
  iVar2 = pwm_lock();
  if (iVar2 == 0) {
    iVar2 = applfanpwm_ioctl(uVar1,param_3,param_4,param_5,param_6);
    pwm_unlock(uVar1);
  }
  return iVar2;
}
