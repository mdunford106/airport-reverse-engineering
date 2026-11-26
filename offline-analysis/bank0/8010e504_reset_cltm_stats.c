
void reset_cltm_stats(int param_1)

{
  int iVar1;
  int iVar2;

  memset(param_1 + 0x5b8,0,uRam8010e5a4);
  *(undefined4 *)(param_1 + 0x5c0) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x5d8) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x5f0) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x608) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x620) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x638) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x66c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x678) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x684) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x690) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x69c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x6a8) = 0x7fffffff;
  iVar1 = 0;
  iVar2 = param_1;
  do {
    iVar1 = iVar1 + 1;
    *(undefined4 *)(iVar2 + 0x6b8) = 0x7fffffff;
    iVar2 = iVar2 + 0x48;
  } while (iVar1 != 0xc);
  *(undefined4 *)(param_1 + 0xa44) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa68) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa50) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa5c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa2c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xa38) = 0x7fffffff;
  *puRam8010e5a8 = 0;
  return;
}
