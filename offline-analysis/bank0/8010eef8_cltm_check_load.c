
void cltm_check_load(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  puVar1 = puRam8010efc8;
  if (puRam8010efc8[0xc] == 1) {
    if (puRam8010efc8[0xd] == 0) {
      printf(uRam8010efd0,puRam8010efc8 + 4);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_1 + 0x530) = *puVar1;
      *(undefined4 *)(param_1 + 0x534) = uVar2;
      *(undefined4 *)(param_1 + 0x538) = uVar3;
      *(undefined4 *)(param_1 + 0x53c) = uVar4;
      uVar2 = puVar1[5];
      uVar3 = puVar1[6];
      uVar4 = puVar1[7];
      *(undefined4 *)(param_1 + 0x540) = puVar1[4];
      *(undefined4 *)(param_1 + 0x544) = uVar2;
      *(undefined4 *)(param_1 + 0x548) = uVar3;
      *(undefined4 *)(param_1 + 0x54c) = uVar4;
      uVar2 = puVar1[9];
      uVar3 = puVar1[10];
      uVar4 = puVar1[0xb];
      *(undefined4 *)(param_1 + 0x550) = puVar1[8];
      *(undefined4 *)(param_1 + 0x554) = uVar2;
      *(undefined4 *)(param_1 + 0x558) = uVar3;
      *(undefined4 *)(param_1 + 0x55c) = uVar4;
      uVar2 = puVar1[0xd];
      *(undefined4 *)(param_1 + 0x560) = puVar1[0xc];
      *(undefined4 *)(param_1 + 0x564) = uVar2;
      puVar1[0xc] = 0;
      puVar1[0xd] = 1;
    }
  }
  if (puVar1[0x1a] != 1) {
    return;
  }
  if (puVar1[0x1b] == 0) {
    printf(uRam8010efcc,puVar1 + 0x12);
    uVar2 = puVar1[0xf];
    uVar3 = puVar1[0x10];
    uVar4 = puVar1[0x11];
    *(undefined4 *)(param_1 + 0x568) = puVar1[0xe];
    *(undefined4 *)(param_1 + 0x56c) = uVar2;
    *(undefined4 *)(param_1 + 0x570) = uVar3;
    *(undefined4 *)(param_1 + 0x574) = uVar4;
    uVar2 = puVar1[0x13];
    uVar3 = puVar1[0x14];
    uVar4 = puVar1[0x15];
    *(undefined4 *)(param_1 + 0x578) = puVar1[0x12];
    *(undefined4 *)(param_1 + 0x57c) = uVar2;
    *(undefined4 *)(param_1 + 0x580) = uVar3;
    *(undefined4 *)(param_1 + 0x584) = uVar4;
    uVar2 = puVar1[0x17];
    uVar3 = puVar1[0x18];
    uVar4 = puVar1[0x19];
    *(undefined4 *)(param_1 + 0x588) = puVar1[0x16];
    *(undefined4 *)(param_1 + 0x58c) = uVar2;
    *(undefined4 *)(param_1 + 0x590) = uVar3;
    *(undefined4 *)(param_1 + 0x594) = uVar4;
    uVar2 = puVar1[0x1b];
    *(undefined4 *)(param_1 + 0x598) = puVar1[0x1a];
    *(undefined4 *)(param_1 + 0x59c) = uVar2;
    puVar1[0x1b] = 1;
    puVar1[0x1a] = 0;
    return;
  }
  return;
}
