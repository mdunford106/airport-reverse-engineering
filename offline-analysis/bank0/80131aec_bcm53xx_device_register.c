
void bcm53xx_device_register(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  uVar1 = device_properties();
  iVar2 = device_is_a(param_1,uRam80131dd4);
  if (iVar2 != 0) {
    uVar3 = device_parent(param_1);
    iVar2 = device_is_a(uVar3,uRam80131dd8);
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 0x1c) = *puRam80131e1c;
      return;
    }
  }
  iVar2 = device_is_a(param_1,uRam80131ddc);
  if ((iVar2 == 0) && (iVar2 = device_is_a(param_1,uRam80131de8), iVar2 == 0)) {
    iVar2 = device_is_a(param_1,uRam80131dec);
    if (iVar2 != 0) {
      uStack_24._0_2_ = CONCAT11((char)(*(int *)(param_2 + 0x18) << 1) + '\x05',4);
      uStack_28 = 0x3020100;
      uVar1 = prop_data_create_data(&uStack_28,6);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131e24,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131e28,uVar3);
      }
      prop_object_release(uVar1);
    }
    iVar2 = device_is_a(param_1,uRam80131df0);
    if (iVar2 != 0) {
      *puRam80131df4 = param_1;
    }
    iVar2 = device_is_a(param_1,uRam80131df8);
    if ((iVar2 != 0) && (iVar2 = device_unit(param_1), iVar2 == 0)) {
      *puRam80131e10 = param_1;
    }
    iVar2 = device_is_a(param_1,uRam80131dfc);
    if ((iVar2 != 0) && (iVar2 = device_unit(param_1), iVar2 == 2)) {
      uVar1 = prop_bool_create(1);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131e20,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131e34,uVar3);
      }
      else {
        *puRam80131e04 = param_1;
      }
      prop_object_release(uVar1);
    }
    iVar2 = device_is_a(param_1,uRam80131e00);
    if ((iVar2 != 0) && (iStack_38 = device_unit(param_1), iStack_38 == 0)) {
      uStack_2c = *puRam80131e04;
      uStack_30 = uRam80131e08;
      iStack_34 = iStack_38;
      uVar1 = prop_data_create_data(&iStack_38,0x10);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131e0c,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131e30,uVar3);
      }
      prop_object_release(uVar1);
      uStack_24 = *puRam80131e10;
      uStack_28 = uRam80131e14;
      uVar1 = prop_data_create_data(&uStack_28,8);
      uVar3 = device_properties(param_1);
      iVar2 = prop_dictionary_set(uVar3,uRam80131e18,uVar1);
      if (iVar2 == 0) {
        uVar3 = device_xname(param_1);
        printf(uRam80131e2c,uVar3);
      }
      prop_object_release(uVar1);
    }
  }
  else {
    prop_dictionary_set_uint32(uVar1,uRam80131de4,*(uint *)(iRam80131de0 + 0x24) >> 1);
  }
  return;
}
