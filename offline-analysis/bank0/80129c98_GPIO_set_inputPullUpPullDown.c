
undefined4 GPIO_set_inputPullUpPullDown(uint param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;

  puVar2 = puRam80129e50;
  puVar1 = puRam80129e4c;
  if (param_2 == 1) {
    uVar4 = (*(code *)((undefined4 *)*puRam80129e4c)[0xb])
                      (*(undefined4 *)*puRam80129e4c,*puRam80129e50,uRam80129e48);
    uVar3 = 1 << (param_1 & 0xff);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129e48,uVar4 | uVar3);
    uVar4 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam80129e54);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129e54,uVar4 & ~uVar3);
    return 0;
  }
  if (param_2 == -1) {
    uVar3 = 1 << (param_1 & 0xff);
    uVar4 = (*(code *)((undefined4 *)*puRam80129e4c)[0xb])
                      (*(undefined4 *)*puRam80129e4c,*puRam80129e50,uRam80129e48);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129e48,uVar4 & ~uVar3);
    uVar4 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam80129e54);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam80129e54,uVar4 | uVar3);
    return 0;
  }
  uVar3 = (*(code *)((undefined4 *)*puRam80129e4c)[0xb])
                    (*(undefined4 *)*puRam80129e4c,*puRam80129e50,uRam80129e48);
  uVar4 = ~(1 << (param_1 & 0xff));
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,uRam80129e48,uVar3 & uVar4);
  uVar3 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,uRam80129e54);
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,uRam80129e54,uVar4 & uVar3);
  return 0;
}
