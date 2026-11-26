
void gpio_close(int param_1)

{
  kern_free(*(undefined4 *)(param_1 + 0x10),uRam8012a4ec);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
