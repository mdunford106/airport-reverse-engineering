
undefined4 GPIO_select_alternate_pin_mux(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar3 = uRam80129d38;
  puVar2 = puRam80129d34;
  puVar1 = puRam80129d30;
  uVar4 = (*(code *)((undefined4 *)*puRam80129d30)[0xb])
                    (*(undefined4 *)*puRam80129d30,*puRam80129d34,uRam80129d38);
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,uVar3,uVar4 & ~(1 << (param_1 & 0xff)));
  return 0;
}
