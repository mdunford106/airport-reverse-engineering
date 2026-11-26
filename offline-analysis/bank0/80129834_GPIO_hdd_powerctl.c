
void GPIO_hdd_powerctl(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    printf(uRam8012988c,uRam80129890);
    GPIO_write(0x40,0x40);
    return;
  }
  printf(uRam8012988c,uRam80129894);
  GPIO_write(0x40,0);
  return;
}
