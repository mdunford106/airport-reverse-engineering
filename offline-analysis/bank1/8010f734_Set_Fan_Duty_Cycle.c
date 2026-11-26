
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Set_Fan_Duty_Cycle(int arg0)

{
  int iVar1;

  if (*piRam8010f750 == arg0) {
    return 0;
  }
  iVar1 = Force_Fan_Duty_Cycle(arg0);
  return iVar1;
}
