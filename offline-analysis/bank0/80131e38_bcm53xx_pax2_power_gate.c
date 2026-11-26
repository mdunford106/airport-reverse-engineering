
void bcm53xx_pax2_power_gate(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    bcmpax_power_gate();
    GPIO_hdd_powerctl(0,0);
    return;
  }
  GPIO_hdd_powerctl(0,1);
  bcmpax_power_gate(param_1,1);
  return;
}
