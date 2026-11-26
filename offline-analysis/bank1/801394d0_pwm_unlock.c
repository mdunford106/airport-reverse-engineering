
void pwm_unlock(int param_1)

{
  mutex_enter(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  cv_signal(param_1 + 0x20);
  mutex_exit(param_1 + 0x1c);
  return;
}
