
undefined4 applfanpwmopen(uint param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = device_lookup_private(uRam80128fd0,param_1 & 0xff | (param_1 >> 0x14) << 8);
  if (iVar1 == 0) {
    uVar2 = 6;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
