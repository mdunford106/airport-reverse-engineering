
undefined4 gpio_print(int param_1)

{
  if (*(int *)(param_1 + 8) != -1) {
    aprint_normal(uRam8012a2f4);
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    aprint_normal(uRam8012a2f8);
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    aprint_normal(uRam8012a2f8);
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    aprint_normal(uRam8012a2f8);
  }
  if (-1 < *(int *)(param_1 + 8)) {
    aprint_normal(uRam8012a2fc);
  }
  aprint_normal(uRam8012a300);
  return 1;
}
