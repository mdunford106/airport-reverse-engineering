
void GPIO_Report_Activity(void)

{
  int *piVar1;

  piVar1 = piRam8012a1a4;
  if (*piRam8012a1a0 == 0) {
    return;
  }
  if (*piRam8012a1a4 == 0) {
    *piRam8012a1a4 = 1;
  }
  if (*piVar1 == 3) {
    *piVar1 = 1;
  }
  return;
}
