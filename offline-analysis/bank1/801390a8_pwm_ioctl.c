
undefined4 pwm_ioctl(undefined4 *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  void *arg0;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;

  uVar4 = uRam80139478;
  if (param_2 == uRam80139478) {
LAB_80139108:
    *param_3 = 4;
  }
  else {
    iVar1 = device_is_active(*param_1);
    if (iVar1 == 0) {
      aprint_naive(uRam8013947c);
      uVar2 = device_xname(*param_1);
      aprint_error(uRam80139480,uVar2);
      return 0x10;
    }
    if (param_2 == uRam80139484) {
      uStack_44 = *param_3;
      uStack_40 = 2;
      uStack_38 = pwm_ns_to_ticks((void *)param_1[uStack_44 + 3],param_3[2]);
    }
    else if (param_2 < uRam80139484) {
      if (param_2 == uVar4) goto LAB_80139108;
      if (param_2 == uRam80139484 - 1) {
        uStack_44 = *param_3;
        uStack_34 = param_3[1];
        uStack_40 = 4;
      }
    }
    else if (param_2 == uRam80139488) {
      uStack_44 = *param_3;
      if (param_3[4] == 0) {
        uStack_40 = 0x10;
      }
      else {
        uStack_40 = 8;
      }
    }
    else if (param_2 < uRam80139488) {
      uStack_44 = *param_3;
      uStack_40 = 1;
      uStack_3c = pwm_ns_to_ticks((void *)param_1[uStack_44 + 3],param_3[3]);
    }
    else if (param_2 == uRam80139488 + 1) {
      arg0 = (void *)param_1[*param_3 + 3];
      param_3[1] = *(uint *)((int)arg0 + 8);
      uVar4 = pwm_ticks_to_ns(arg0,*(uint *)((int)arg0 + 0xc));
      param_3[2] = uVar4;
      uVar4 = pwm_ticks_to_ns(arg0,*(uint *)((int)arg0 + 0x10));
      param_3[3] = uVar4;
      param_3[4] = *(uint *)((int)arg0 + 0x14);
      return 0;
    }
    uVar3 = uStack_38;
    uVar4 = uStack_44;
    if ((uStack_40 & 2) != 0) {
      iVar1 = uStack_44 * 0xc;
      iVar9 = param_1[uStack_44 + 3];
      uVar5 = (uint)((ulonglong)uStack_38 * (ulonglong)uRam8013948c >> 0x2f) & 0xff;
      if (0x3e < uVar5) {
        uVar5 = 0x3f;
      }
      iproc_pwmc_set_field
                (param_1,*(undefined4 *)(iVar1 + iRam80139490 + 8),
                 *(undefined4 *)(iVar1 + iRam80139490),*(undefined4 *)(iVar1 + iRam80139490 + 4),
                 uVar5);
      uVar6 = *(undefined4 *)(iVar1 + iRam80139494 + 8);
      uVar7 = *(undefined4 *)(iVar1 + iRam80139494);
      uVar8 = *(undefined4 *)(iVar1 + iRam80139494 + 4);
      uVar2 = __aeabi_uidivmod(uVar3,uVar5 + 1);
      iproc_pwmc_set_field(param_1,uVar6,uVar7,uVar8,uVar2);
      uVar3 = (*(code *)((undefined4 *)param_1[1])[0xb])(*(undefined4 *)param_1[1],param_1[2],0);
      if ((uVar3 & 1 << (uVar4 & 0xff) & 0xf) != 0) {
        iproc_pwmc_stop(param_1,uVar4);
        delay(1);
        iproc_pwmc_start(param_1,uVar4);
      }
      *(uint *)(iVar9 + 0xc) = uStack_38;
      uVar3 = uStack_40 & 1;
      if (uVar3 == 0) {
        uStack_50 = *(undefined4 *)(param_1[uVar4 + 3] + 0x10);
        uStack_58 = uVar3;
        uStack_54 = uVar3;
        uStack_4c = uVar3;
        uStack_48 = uVar3;
        iproc_pwmc_config_duty_ticks(param_1,uVar4,&uStack_58);
      }
    }
    if ((uStack_40 & 1) != 0) {
      iproc_pwmc_config_duty_ticks(param_1,uVar4,&uStack_44);
    }
    if ((uStack_40 & 4) != 0) {
      iVar1 = param_1[uVar4 + 3];
      if (uStack_34 == 0) {
        iproc_pwmc_clear_set_bit(param_1,0,uVar4 + 8,0);
      }
      else {
        iproc_pwmc_clear_set_bit(param_1,0,uVar4 + 8,1);
      }
      *(uint *)(iVar1 + 8) = (uint)(uStack_34 != 0);
      uVar3 = (*(code *)((undefined4 *)param_1[1])[0xb])(*(undefined4 *)param_1[1],param_1[2]);
      if ((uVar3 & 1 << (uVar4 & 0xff) & 0xf) != 0) {
        iproc_pwmc_stop(param_1,uVar4);
        delay(1);
        iproc_pwmc_start(param_1,uVar4);
      }
    }
    if ((uStack_40 & 8) != 0) {
      iproc_pwmc_start(param_1,uVar4);
    }
    if ((uStack_40 & 0x10) != 0) {
      iproc_pwmc_stop(param_1,uVar4);
    }
  }
  return 0;
}
