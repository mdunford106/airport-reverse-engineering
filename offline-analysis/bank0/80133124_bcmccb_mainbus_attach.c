
void bcmccb_mainbus_attach(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *arg1;
  undefined4 *puVar5;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;

  puVar5 = puRam80133254;
  piVar1 = piRam80133250;
  *piRam80133250 = param_2;
  *(int **)(param_2 + 0x38) = piVar1;
  puVar2 = puRam80133258;
  puVar5 = (undefined4 *)*puVar5;
  piVar1[1] = (int)puVar5;
  (*(code *)puVar5[3])(*puVar5,*puVar2,0,0x30000,piVar1 + 2);
  aprint_naive(uRam8013325c);
  aprint_normal(uRam8013325c);
  bcm53xx_srab_init();
  arg1 = pvRam80133260;
  do {
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    uStack_60 = uRam80133268;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    iStack_68 = iVar3;
    iStack_64 = iVar4;
    memcpy(&uStack_5c,arg1,0x2c);
    iVar3 = bcm53xx_idm_device_init(arg1,iVar3,iVar4);
    arg1 = (void *)((int)arg1 + 0x2c);
    if ((iVar3 != 0) &&
       (iVar3 = config_search_ia(uRam80133270,param_2,uRam8013326c,&iStack_68), iVar3 != 0)) {
      config_attach(param_2,iVar3,&iStack_68,uRam80133274);
    }
  } while (arg1 != pvRam80133264);
  return;
}
