
void valloc_pages_nozero(int param_1,int param_2,int param_3,undefined1 param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;

  uVar4 = param_3 * 0x1000;
  if ((*pcRam8012bbd8 == '\0') && ((*(uint *)(param_1 + 0x1c) & 0x3fff) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x24);
    if (uRam8012bbdc < uVar1) {
      *pcRam8012bbd8 = '\x01';
      valloc_pages(param_1,uRam8012bbe0,4,3,2);
      add_pages(param_1,uRam8012bbe0);
      uVar1 = *(uint *)(param_1 + 0x24);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x24);
  }
  uVar6 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x18);
  while( true ) {
    if (uVar4 <= uVar1) {
      uVar2 = puVar5[2];
      *(undefined4 *)(param_2 + 4) = puVar5[1];
      *(undefined4 *)(param_2 + 8) = uVar2;
      *(undefined1 *)(param_2 + 0x11) = param_4;
      *(uint *)(param_2 + 0xc) = uVar4;
      *(char *)(param_2 + 0x10) = (char)param_5;
      if ((((param_5 == 2) && (*piRam8012bbe4 == *piRam8012bbe8)) &&
          (*piRam8012bbec == *piRam8012bbf0)) && (*piRam8012bbf4 == *piRam8012bbf8)) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      iVar3 = puVar5[3] + param_3 * -0x1000;
      puVar5[1] = puVar5[1] + uVar4;
      puVar5[2] = puVar5[2] + uVar4;
      puVar5[3] = iVar3;
      if ((iVar3 == 0) &&
         (uVar4 = *(int *)(param_1 + 0x314) - 1, *(uint *)(param_1 + 0x314) = uVar4, uVar6 < uVar4))
      {
        do {
          *puVar5 = puVar5[5];
          puVar5[1] = puVar5[6];
          puVar5[2] = puVar5[7];
          puVar5[3] = puVar5[8];
          uVar6 = uVar6 + 1;
          puVar5[4] = puVar5[9];
        } while (uVar6 < *(uint *)(param_1 + 0x314));
      }
      *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) - param_3;
      return;
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == *(uint *)(param_1 + 0x314)) break;
    uVar1 = puVar5[8];
    puVar5 = puVar5 + 5;
  }
                    /* WARNING: Subroutine does not return */
  panic(uRam8012bbfc,uRam8012bc00,uVar4);
}
