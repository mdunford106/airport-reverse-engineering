
undefined4 GPIO_Setup(void)

{
  undefined4 uVar1;
  ulonglong uVar2;

  uVar1 = (*(code *)((undefined4 *)*puRam8012a14c)[0xb])
                    (*(undefined4 *)*puRam8012a14c,*puRam8012a150,0x68);
  *puRam8012a154 = uVar1;
  GPIO_select_alternate_pin_mux(4,0);
  GPIO_select_alternate_pin_mux(5,0);
  GPIO_select_alternate_pin_mux(0x10,0);
  GPIO_select_alternate_pin_mux(0x11,0);
  GPIO_write(0xc00,0x800);
  GPIO_map_output_pin(10);
  GPIO_map_output_pin(0xb);
  GPIO_write((ulonglong)uRam8012a15c,(ulonglong)uRam8012a158);
  GPIO_map_output_pin(2);
  GPIO_map_output_pin(6);
  GPIO_map_output_pin(0x17);
  GPIO_map_input_pin(0x12);
  GPIO_map_input_pin(0);
  GPIO_map_input_pin(0x14);
  GPIO_map_input_pin(0x15);
  GPIO_map_input_pin(0x16);
  GPIO_map_input_pin(0xe);
  GPIO_map_input_pin(0xf);
  GPIO_map_input_pin(0xd);
  GPIO_map_input_pin(1);
  GPIO_map_input_pin(0x13);
  GPIO_map_input_pin(7);
  GPIO_map_input_pin(9);
  GPIO_map_input_pin(0x10);
  GPIO_map_input_pin(0x11);
  GPIO_set_inputPullUpPullDown(1,1);
  GPIO_set_inputPullUpPullDown(4,1);
  GPIO_set_inputPullUpPullDown(5,1);
  GPIO_set_inputPullUpPullDown(7,1);
  GPIO_set_inputPullUpPullDown(0x13,1);
  GPIO_set_inputPullUpPullDown(0x16,1);
  uVar2 = GPIO_read();
  *puRam8012a160 = ((uint)uVar2 & 0x340000) >> 0x12 | ((uint)uVar2 & 1) << 1;
  GPIO_interrupt_pin_ex(0x16,1,2,0);
  GPIO_interrupt_SetCallBack(7,uRam8012a164,0);
  GPIO_interrupt_pin_ex(7,0,2,0);
  return 0;
}
