
void GPIO_hdd_powerctl(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    printf(uRam801297f8,uRam801297fc);
    GPIO_write(0x40,0x40);
    return;
  }
  printf(uRam801297f8,uRam80129800);
  GPIO_write(0x40,0);
  return;
}
