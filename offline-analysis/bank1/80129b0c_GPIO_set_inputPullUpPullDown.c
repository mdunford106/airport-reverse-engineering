
undefined4 GPIO_set_inputPullUpPullDown(uint param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;

  puVar2 = puRam80129cc4;
  puVar1 = puRam80129cc0;
  if (param_2 == 1) {
    uVar4 = (*(code *)((undefined4 *)*puRam80129cc0)[0xb])
                      (*(undefined4 *)*puRam80129cc0,*puRam80129cc4,uRam80129cbc);
    uVar3 = 1 << (param_1 & 0xff);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129cbc,uVar4 | uVar3);
    uVar4 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam80129cc8);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129cc8,uVar4 & ~uVar3);
    return 0;
  }
  if (param_2 == -1) {
    uVar3 = 1 << (param_1 & 0xff);
    uVar4 = (*(code *)((undefined4 *)*puRam80129cc0)[0xb])
                      (*(undefined4 *)*puRam80129cc0,*puRam80129cc4,uRam80129cbc);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129cbc,uVar4 & ~uVar3);
    uVar4 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam80129cc8);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129cc8,uVar4 | uVar3);
    return 0;
  }
  uVar3 = (*(code *)((undefined4 *)*puRam80129cc0)[0xb])
                    (*(undefined4 *)*puRam80129cc0,*puRam80129cc4,uRam80129cbc);
  uVar4 = ~(1 << (param_1 & 0xff));
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,uRam80129cbc,uVar3 & uVar4);
  uVar3 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam80129cc8);
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,uRam80129cc8,uVar4 & uVar3);
  return 0;
}
