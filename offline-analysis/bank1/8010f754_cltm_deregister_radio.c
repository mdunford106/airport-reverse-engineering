
void cltm_deregister_radio(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = iRam8010f7f8;
  iVar3 = 0;
  if (param_1 != *(int *)(iRam8010f7f8 + 0xc)) {
    iVar3 = 1;
    if (param_1 != *(int *)(iRam8010f7f8 + 0x44)) {
      if (*piRam8010f7fc == 0) {
        return;
      }
      printf(uRam8010f800,param_1);
      return;
    }
  }
  iVar1 = iVar3 * 0x38;
  printf(uRam8010f804,iVar3);
  strlcpy((void *)(iVar1 + 0x10 + iVar2),pvRam8010f808,0x20);
  iVar3 = iVar1 + iVar2;
  *(undefined4 *)(iVar1 + iVar2) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 1;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  return;
}
