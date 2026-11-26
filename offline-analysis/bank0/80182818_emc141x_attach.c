
void emc141x_attach(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *arg1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 uStack_22;
  undefined1 uStack_21;

  iVar1 = device_private(param_2);
  *(undefined4 *)(iVar1 + 0x178) = *param_3;
  *(undefined2 *)(iVar1 + 0x17c) = *(undefined2 *)(param_3 + 1);
  aprint_normal(uRam80182a88);
  aprint_naive(uRam80182a8c);
  (*(code *)(*(undefined4 **)(iVar1 + 0x178))[1])(**(undefined4 **)(iVar1 + 0x178),0);
  uStack_21 = 3;
  iVar2 = iic_exec(*(undefined4 *)(iVar1 + 0x178),1,*(undefined2 *)(iVar1 + 0x17c),&uStack_21,1,
                   &uStack_22,1,0);
  if (iVar2 == 0) {
    aprint_error_dev(iVar1,uRam80182a94,uStack_22);
    (*(code *)(*(undefined4 **)(iVar1 + 0x178))[2])(**(undefined4 **)(iVar1 + 0x178),0);
    *(undefined4 *)(iVar1 + 0x198) = 0xb;
    *(undefined4 *)(iVar1 + 0x1fc) = 0xb;
    *(undefined4 *)(iVar1 + 0x260) = 0xb;
    *(undefined4 *)(iVar1 + 0x2c4) = 0xb;
    arg1 = pvRam80182a98;
    *(undefined4 *)(iVar1 + 0x2c0) = 0;
    *(undefined4 *)(iVar1 + 0x194) = 0;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined4 *)(iVar1 + 0x25c) = 0;
    strlcpy((void *)(iVar1 + 0x1cc),arg1,0xb);
    strlcpy((void *)(iVar1 + 0x230),pvRam80182a9c,0xc);
    strlcpy((void *)(iVar1 + 0x294),pvRam80182aa0,0xc);
    strlcpy((void *)(iVar1 + 0x2f8),pvRam80182aa4,0xc);
    uVar3 = sysmon_envsys_create();
    *(undefined4 *)(iVar1 + 0x184) = uVar3;
    iVar2 = sysmon_envsys_sensor_attach(uVar3,iVar1 + 0x188);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x180) == 0) {
        iVar2 = sysmon_envsys_sensor_attach(*(undefined4 *)(iVar1 + 0x184),iVar1 + 0x1ec);
        if (iVar2 != 0) {
          sysmon_envsys_destroy(*(undefined4 *)(iVar1 + 0x184));
          aprint_error_dev(iVar1,uRam80182ab8);
          return;
        }
        if (*(int *)(iVar1 + 0x180) == 0) {
          iVar2 = sysmon_envsys_sensor_attach(*(undefined4 *)(iVar1 + 0x184),iVar1 + 0x250);
          if (iVar2 != 0) {
            sysmon_envsys_destroy(*(undefined4 *)(iVar1 + 0x184));
            aprint_error_dev(iVar1,uRam80182abc);
            return;
          }
          if ((*(int *)(iVar1 + 0x180) == 0) &&
             (iVar2 = sysmon_envsys_sensor_attach(*(undefined4 *)(iVar1 + 0x184),iVar1 + 0x2b4),
             iVar2 != 0)) {
            sysmon_envsys_destroy(*(undefined4 *)(iVar1 + 0x184));
            aprint_error_dev(iVar1,uRam80182ab4);
            return;
          }
        }
      }
      puVar4 = *(undefined4 **)(iVar1 + 0x184);
      uVar3 = device_xname(param_2);
      *puVar4 = uVar3;
      *(int *)(*(int *)(iVar1 + 0x184) + 0x14) = iVar1;
      *(undefined4 *)(*(int *)(iVar1 + 0x184) + 0x18) = uRam80182aa8;
      iVar2 = sysmon_envsys_register(*(undefined4 *)(iVar1 + 0x184));
      if (iVar2 != 0) {
        aprint_error_dev(iVar1,uRam80182aac);
        sysmon_envsys_destroy(*(undefined4 *)(iVar1 + 0x184));
      }
    }
    else {
      sysmon_envsys_destroy(*(undefined4 *)(iVar1 + 0x184));
      aprint_error_dev(iVar1,uRam80182ab0);
    }
  }
  else {
    (*(code *)(*(undefined4 **)(iVar1 + 0x178))[2])(**(undefined4 **)(iVar1 + 0x178),0);
    aprint_error_dev(iVar1,uRam80182a90);
  }
  return;
}
