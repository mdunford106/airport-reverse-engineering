
undefined4 gpiocca_intr(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_34;

  puVar2 = puRam8012b0f0;
  puVar1 = puRam8012b0ec;
  uVar3 = (*(code *)((undefined4 *)*puRam8012b0ec)[0xb])
                    (*(undefined4 *)*puRam8012b0ec,*puRam8012b0f0,0x78);
  uVar4 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x60);
  uVar5 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x7c);
  uVar10 = 0x800000;
  iVar12 = 0x17;
  uStack_34 = 0;
  iVar11 = iRam8012b0f4;
  while( true ) {
    if (((uVar5 & uVar10) == 0) || ((uVar3 & uVar10) == 0)) {
      uVar8 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x60);
      uVar6 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x70);
      uVar7 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x74);
      if ((uVar7 & (uVar8 ^ uVar6) & uVar10) != 0) {
        if ((uVar4 & uVar10) == 0) {
          uVar9 = 1;
        }
        else {
          uVar9 = 2;
        }
        if (*(code **)(iVar11 + 4) == (code *)0x0) {
          gpio_add_event(iVar12,uVar9);
        }
        else {
          (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar11 + 8));
        }
        uVar8 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x70);
        (*(code *)((undefined4 *)*puVar1)[0x17])
                  (*(undefined4 *)*puVar1,*puVar2,0x70,uVar8 ^ uVar10 & *puRam8012b0f8);
        uStack_34 = 1;
      }
    }
    else {
      uVar8 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x84);
      if ((uVar10 & uVar8) == 0) {
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
      }
      if (*(code **)(iVar11 + 4) == (code *)0x0) {
        gpio_add_event(iVar12,uVar9);
      }
      else {
        (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar11 + 8));
      }
      (*(code *)((undefined4 *)*puVar1)[0x17])(*(undefined4 *)*puVar1,*puVar2,0x78,uVar10);
      uVar8 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,0x84);
      (*(code *)((undefined4 *)*puVar1)[0x17])
                (*(undefined4 *)*puVar1,*puVar2,0x84,uVar8 ^ uVar10 & *puRam8012b0f8);
      uStack_34 = 1;
    }
    if (iVar12 == 0) break;
    iVar11 = iVar11 + -0x14;
    uVar10 = uVar10 >> 1;
    iVar12 = iVar12 + -1;
  }
  return uStack_34;
}
