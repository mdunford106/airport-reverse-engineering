
int applfanpwm_lock(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1 + 0x1c;
  mutex_enter(iVar2);
  do {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
      mutex_exit(iVar2,iVar2);
      return 0;
    }
    iVar1 = cv_wait_sig(param_1 + 0x20);
  } while (iVar1 == 0);
  mutex_exit(iVar2);
  return iVar1;
}
