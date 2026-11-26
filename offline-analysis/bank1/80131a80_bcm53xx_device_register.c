
void bcm53xx_device_register(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  uVar1 = device_properties();
  iVar2 = device_is_a(param_1,uRam80131ce8);
  if (iVar2 != 0) {
    uVar3 = device_parent(param_1);
    iVar2 = device_is_a(uVar3,uRam80131cec);
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 0x1c) = *puRam80131d28;
      return;
    }
  }
  iVar2 = device_is_a(param_1,uRam80131cf0);
  if ((iVar2 == 0) && (iVar2 = device_is_a(param_1,uRam80131cfc), iVar2 == 0)) {
    iVar2 = device_is_a(param_1,uRam80131d00);
    if (iVar2 != 0) {
      uStack_24._0_2_ = CONCAT11((char)(*(int *)(param_2 + 0x18) << 1) + '\x05',4);
      uStack_28 = 0x3020100;
      uVar1 = prop_data_create_data(&uStack_28,6);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131d2c,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131d30,uVar3);
      }
      prop_object_release(uVar1);
    }
    iVar2 = device_is_a(param_1,uRam80131d04);
    if (iVar2 != 0) {
      *puRam80131d08 = param_1;
    }
    iVar2 = device_is_a(param_1,uRam80131d0c);
    if ((iVar2 != 0) && (iVar2 = device_unit(param_1), iVar2 == 0)) {
      *puRam80131d1c = param_1;
    }
    iVar2 = device_is_a(param_1,uRam80131d10);
    if ((iVar2 != 0) && (iStack_38 = device_unit(param_1), iStack_38 == 0)) {
      uStack_30 = uRam80131d14;
      iStack_34 = iStack_38;
      iStack_2c = iStack_38;
      uVar1 = prop_data_create_data(&iStack_38,0x10);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131d18,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131d38,uVar3);
      }
      prop_object_release(uVar1);
      uStack_24 = *puRam80131d1c;
      uStack_28 = uRam80131d20;
      uVar1 = prop_data_create_data(&uStack_28,8);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131d24,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131d34,uVar3);
      }
      prop_object_release(uVar1);
    }
  }
  else {
    prop_dictionary_set_uint32(uVar1,uRam80131cf8,*(uint *)(iRam80131cf4 + 0x24) >> 1);
  }
  return;
}
