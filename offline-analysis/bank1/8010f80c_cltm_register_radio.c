
void cltm_register_radio(uint param_1,void *param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  int iVar1;
  int iVar2;
  void *arg0;

  iVar1 = iRam8010f8c0;
  arg0 = (void *)(param_1 * 0x38 + 0x10 + iRam8010f8c0);
  if ((param_1 & 0xfffffffe) != 0) {
    return;
  }
  strlcpy(arg0,param_2,0x20);
  if (*piRam8010f8c4 == 0) {
    printf(uRam8010f8cc,param_1,arg0,param_5);
  }
  else {
    printf(uRam8010f8c8,param_1,arg0,param_5);
  }
  iVar2 = param_1 * 0x38 + iVar1;
  *(undefined4 *)(iVar2 + 0x30) = 1;
  *(undefined4 *)(iVar2 + 4) = param_3;
  *(undefined4 *)(iVar2 + 8) = param_4;
  *(undefined4 *)(iVar2 + 0xc) = param_5;
  *(undefined4 *)(param_1 * 0x38 + iVar1) = 100;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  return;
}
