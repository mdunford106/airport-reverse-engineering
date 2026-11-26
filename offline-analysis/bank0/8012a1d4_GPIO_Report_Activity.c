
void GPIO_Report_Activity(void)

{
  int *piVar1;

  piVar1 = piRam8012a210;
  if (*piRam8012a20c == 0) {
    return;
  }
  if (*piRam8012a210 == 0) {
    *piRam8012a210 = 1;
  }
  if (*piVar1 == 3) {
    *piVar1 = 1;
  }
  return;
}
