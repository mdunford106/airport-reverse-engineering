
int sysmon_envsys_find_40(uint param_1)

{
  int iVar1;

  mutex_enter(uRam8030d750);
  iVar1 = *piRam8030d754;
  while( true ) {
    if (iVar1 == 0) {
      mutex_exit(uRam8030d750);
      return 0;
    }
    if ((*(uint *)(iVar1 + 8) <= param_1) && (param_1 < *(uint *)(iVar1 + 8) + *(int *)(iVar1 + 4)))
    break;
    iVar1 = *(int *)(iVar1 + 0x58);
  }
  sysmon_envsys_acquire(iVar1,0);
  mutex_exit(uRam8030d750);
  return iVar1;
}
