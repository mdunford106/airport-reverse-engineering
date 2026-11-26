
undefined4 gpio_get_next_event(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;

  piVar2 = piRam8012a534;
  piVar1 = piRam8012a530;
  uVar7 = 0;
  if (0 < *piRam8012a530) {
    puVar6 = (undefined4 *)*piRam8012a534;
    if (puVar6 == (undefined4 *)0x0) {
      printf(uRam8012a538,*piRam8012a530);
      *piVar1 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = puVar6[3];
      uVar3 = puVar6[4];
      uVar5 = puVar6[5];
      *param_1 = puVar6[2];
      param_1[1] = uVar7;
      param_1[2] = uVar3;
      param_1[3] = uVar5;
      *param_2 = puVar6[1];
      uVar3 = uRam8012a53c;
      *param_3 = *puVar6;
      uVar7 = 1;
      iVar4 = *(int *)(*piVar2 + 0x18);
      *piVar2 = iVar4;
      if (iVar4 == 0) {
        piVar2[1] = (int)piVar2;
      }
      kern_free(puVar6,uVar3);
      *piVar1 = *piVar1 + -1;
    }
  }
  return uVar7;
}
