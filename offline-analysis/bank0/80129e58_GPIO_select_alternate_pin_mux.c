
undefined4 GPIO_select_alternate_pin_mux(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar3 = uRam80129ec4;
  puVar2 = puRam80129ec0;
  puVar1 = puRam80129ebc;
  uVar4 = (*(code *)((undefined4 *)*puRam80129ebc)[0xb])
                    (*(undefined4 *)*puRam80129ebc,*puRam80129ec0,uRam80129ec4);
  (*(code *)((undefined4 *)*puVar1)[0x17])
            (*(undefined4 *)*puVar1,*puVar2,uVar3,uVar4 & ~(1 << (param_1 & 0xff)));
  return 0;
}
