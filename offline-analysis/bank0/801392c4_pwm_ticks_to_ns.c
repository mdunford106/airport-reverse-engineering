
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint pwm_ticks_to_ns(void *arg0,uint arg1)

{
  uint uVar1;
  ulonglong uVar2;

  uVar1 = 0;
  if (*(uint *)((int)arg0 + 4) != 0) {
    uVar2 = __udivdi3((ulonglong)uRam80139310 * (ulonglong)arg1,(ulonglong)*(uint *)((int)arg0 + 4))
    ;
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}
