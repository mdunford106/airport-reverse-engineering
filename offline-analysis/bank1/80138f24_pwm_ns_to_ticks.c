
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint pwm_ns_to_ticks(void *arg0,uint arg1)

{
  ulonglong uVar1;

  uVar1 = __udivdi3((ulonglong)arg1 * (ulonglong)*(uint *)((int)arg0 + 4),(ulonglong)uRam80138f50);
  return (uint)uVar1;
}
