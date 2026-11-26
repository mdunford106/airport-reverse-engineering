
undefined4 gpio_print(int param_1)

{
  if (*(int *)(param_1 + 8) != -1) {
    aprint_normal(uRam8012a288);
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    aprint_normal(uRam8012a28c);
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    aprint_normal(uRam8012a28c);
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    aprint_normal(uRam8012a28c);
  }
  if (-1 < *(int *)(param_1 + 8)) {
    aprint_normal(uRam8012a290);
  }
  aprint_normal(uRam8012a294);
  return 1;
}
