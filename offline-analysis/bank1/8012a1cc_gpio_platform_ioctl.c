
undefined4 gpio_platform_ioctl(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 8) = uRam8012a1e0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return 0x13;
}
