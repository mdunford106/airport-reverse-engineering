
void applfanpwm_attach(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *arg0;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;

  arg0 = (undefined4 *)device_private(param_2);
  *arg0 = param_2;
  uVar7 = uRam801293fc;
  arg0[1] = *param_3;
  aprint_naive(uVar7);
  aprint_normal(uRam80129400);
  (*(code *)((undefined4 *)*param_3)[0x17])(*(undefined4 *)*param_3,param_3[1],uRam80129404,0xf);
  (*(code *)((undefined4 *)arg0[1])[3])
            (*(undefined4 *)arg0[1],param_3[1],param_3[4],param_3[5],arg0 + 2);
  mutex_init(arg0 + 7,2,5);
  cv_init(arg0 + 8,uRam80129408);
  uVar7 = uRam8012940c;
  iVar9 = 0;
  puVar8 = arg0;
  do {
    iVar5 = kern_malloc(0x18,uRam80129410,3);
    iVar9 = iVar9 + 1;
    puVar8[3] = iVar5;
    *(undefined4 *)(iVar5 + 4) = uVar7;
    pvVar3 = pvRam80129420;
    iVar2 = iRam8012941c;
    iVar1 = iRam80129418;
    iVar5 = iRam80129414;
    puVar8 = puVar8 + 1;
  } while (iVar9 != 4);
  *(undefined4 *)(iRam80129414 + 0xc) = 1;
  *(undefined4 *)(iVar5 + 0x10) = 0xb;
  strlcpy((void *)(iVar5 + 0x44),pvVar3,8);
  pvVar3 = pvRam80129424;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0xb;
  strlcpy((void *)(iVar1 + 0x44),pvVar3,6);
  pvVar3 = pvRam80129428;
  *(undefined4 *)(iVar2 + 0xc) = 10;
  *(undefined4 *)(iVar2 + 0x10) = 0xb;
  strlcpy((void *)(iVar2 + 0x44),pvVar3,8);
  iVar6 = sysmon_envsys_create();
  piVar4 = piRam8012942c;
  *piRam8012942c = iVar6;
  iVar5 = sysmon_envsys_sensor_attach(iVar6,iVar5);
  if (iVar5 == 0) {
    iVar5 = sysmon_envsys_sensor_attach(*piVar4,iVar1);
    if (iVar5 == 0) {
      iVar5 = sysmon_envsys_sensor_attach(*piVar4,iVar2);
      if (iVar5 == 0) {
        puVar8 = (undefined4 *)*piVar4;
        uVar7 = device_xname(param_2);
        *puVar8 = uVar7;
        *(undefined4 **)(*piVar4 + 0x14) = arg0;
        *(undefined4 *)(*piVar4 + 0x18) = uRam80129434;
        iStack_44 = sysmon_envsys_register(*piVar4);
        if (iStack_44 == 0) {
          iStack_3c = 0x19;
          iStack_40 = 1;
          iproc_pwmc_config(arg0,&iStack_44);
          *puRam80129448 =
               (uint)((ulonglong)(uint)(iStack_3c * 0xff) * (ulonglong)uRam80129444 >> 0x25);
          iStack_40 = 2;
          uStack_38 = 100;
          iproc_pwmc_config(arg0,&iStack_44);
          uStack_34 = 1;
          iStack_40 = iVar9;
          iproc_pwmc_config(arg0,&iStack_44);
          iStack_40 = 8;
          iproc_pwmc_config(arg0,&iStack_44);
          *puRam8012944c = arg0;
        }
        else {
          aprint_error_dev(param_2,uRam80129438);
          sysmon_envsys_destroy(*piVar4);
        }
      }
      else {
        sysmon_envsys_destroy(*piVar4);
        aprint_error_dev(param_2,uRam80129440);
      }
    }
    else {
      sysmon_envsys_destroy(*piVar4);
      aprint_error_dev(param_2,uRam8012943c);
    }
  }
  else {
    sysmon_envsys_destroy(*piVar4);
    aprint_error_dev(param_2,uRam80129430);
  }
  return;
}
