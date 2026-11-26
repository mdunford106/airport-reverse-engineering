
undefined4 applfanpwm_ioctl(undefined4 *param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *arg0;
  int iStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;

  uVar3 = uRam80128f7c;
  if (param_2 == uRam80128f7c) {
LAB_80128e00:
    *param_3 = 4;
  }
  else {
    iVar1 = device_is_active(*param_1);
    if (iVar1 == 0) {
      aprint_naive(uRam80128f80);
      uVar2 = device_xname(*param_1);
      aprint_error(uRam80128f84,uVar2);
      return 0x10;
    }
    if (param_2 == uRam80128f88) {
      iStack_34 = *param_3;
      uStack_30 = 2;
      uStack_28 = pwm_ns_to_ticks((void *)param_1[iStack_34 + 3],param_3[2]);
    }
    else if (param_2 < uRam80128f88) {
      if (param_2 == uVar3) goto LAB_80128e00;
      if (param_2 == uRam80128f88 - 1) {
        iStack_34 = *param_3;
        iStack_24 = param_3[1];
        uStack_30 = 4;
      }
    }
    else if (param_2 == uRam80128f8c) {
      iStack_34 = *param_3;
      if (param_3[4] == 0) {
        uStack_30 = 0x10;
      }
      else {
        uStack_30 = 8;
      }
    }
    else if (param_2 < uRam80128f8c) {
      iStack_34 = *param_3;
      uVar3 = param_3[3];
      uStack_30 = 1;
      uStack_2c = pwm_ns_to_ticks((void *)param_1[iStack_34 + 3],uVar3);
      iVar1 = ((int)((longlong)iRam80128f90 * (longlong)(int)uVar3 >> 0x25) - ((int)uVar3 >> 0x1f))
              * 0xff + 999;
      *piRam80128f98 = (int)((longlong)iRam80128f94 * (longlong)iVar1 >> 0x26) - (iVar1 >> 0x1f);
    }
    else if (param_2 == uRam80128f8c + 1) {
      arg0 = (void *)param_1[*param_3 + 3];
      param_3[1] = *(int *)((int)arg0 + 8);
      uVar3 = pwm_ticks_to_ns(arg0,*(uint *)((int)arg0 + 0xc));
      param_3[2] = uVar3;
      uVar3 = pwm_ticks_to_ns(arg0,*(uint *)((int)arg0 + 0x10));
      param_3[3] = uVar3;
      param_3[4] = *(int *)((int)arg0 + 0x14);
      return 0;
    }
    iproc_pwmc_config(param_1,&iStack_34);
  }
  return 0;
}
