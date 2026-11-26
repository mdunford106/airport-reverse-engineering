
void cltmthread(void)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  byte in_Q;
  int iStack_50;
  undefined4 auStack_48 [4];
  int aiStack_38 [3];

  aprint_normal(uRam801106f4);
  piVar3 = (int *)kern_malloc(0xa80,uRam801106f8,0);
  memset(piVar3,0,0xa80);
  piVar10 = piRam801106fc;
  iVar4 = piRam801106fc[1];
  iVar5 = piRam801106fc[2];
  iVar6 = piRam801106fc[3];
  piVar3[0x150] = *piRam801106fc;
  piVar3[0x151] = iVar4;
  piVar3[0x152] = iVar5;
  *(short *)(piVar3 + 0x153) = (short)iVar6;
  iVar4 = piVar10[1];
  iVar5 = piVar10[2];
  iVar6 = piVar10[3];
  piVar3[0x15e] = *piVar10;
  piVar3[0x15f] = iVar4;
  piVar3[0x160] = iVar5;
  *(short *)(piVar3 + 0x161) = (short)iVar6;
  iVar4 = iRam80110704;
  piVar3[2] = iRam80110700;
  iVar5 = iRam80110708;
  piVar3[5] = iVar4;
  iVar4 = iRam8011070c;
  piVar3[8] = iVar5;
  iVar5 = iRam80110710;
  piVar3[0xb] = iVar4;
  iVar6 = iRam80110718;
  iVar4 = iRam80110714;
  piVar3[0xe] = iVar5;
  iVar5 = iRam8011071c;
  piVar3[0x11] = iVar4;
  iVar4 = iRam80110720;
  *(undefined1 *)(piVar3 + 4) = 10;
  *(undefined1 *)(piVar3 + 7) = 10;
  piVar3[3] = iVar6;
  piVar3[6] = iVar6;
  piVar3[9] = iVar6;
  piVar3[0x169] = iVar5;
  iVar5 = iRam80110724;
  piVar3[0x16b] = iVar4;
  piVar3[0x14] = iVar5;
  piVar3[0x29] = 0x400;
  iVar5 = iRam80110730;
  iVar4 = iRam8011072c;
  piVar3[0x30] = iRam80110728;
  piVar3[0x32] = iVar4;
  *(undefined1 *)(piVar3 + 10) = 10;
  *(undefined1 *)(piVar3 + 0xd) = 10;
  *(undefined1 *)(piVar3 + 0x10) = 10;
  *(undefined1 *)(piVar3 + 0x13) = 10;
  piVar3[0x168] = 0;
  piVar3[0x16a] = 0;
  piVar3[0x2f] = 0;
  piVar3[0x15] = 0x7800;
  piVar3[0x16] = 0;
  piVar3[0x17] = 0x32;
  piVar3[0x2a] = 0;
  piVar3[0x2b] = 0;
  piVar3[0x2c] = 0;
  piVar3[0xc] = iVar6;
  piVar3[0xf] = iVar6;
  piVar3[0x12] = iVar5;
  piVar3[0x18] = iVar6;
  piVar3[0x1a] = 1;
  piVar3[0x1b] = iVar6;
  piVar3[0x1d] = 1;
  piVar3[0x1e] = iVar6;
  piVar3[0x20] = 1;
  piVar3[0x21] = iVar6;
  piVar3[0x23] = 1;
  piVar3[0x24] = iVar6;
  piVar3[0x26] = 1;
  piVar3[0x27] = iVar5;
  piVar3[0x2d] = 0;
  piVar3[0x2e] = 0;
  piVar3[0x31] = 0x7800;
  iVar4 = iRam80110734;
  piVar3[0x49] = -0x1cd;
  iVar8 = iRam80110738;
  piVar3[0x48] = iVar4;
  iVar4 = iRam8011073c;
  piVar3[0x4e] = iVar8;
  piVar3[0x4c] = iVar4;
  piVar3[0x3c] = 5;
  piVar3[0x3f] = 10;
  piVar3[0x58] = 10;
  piVar3[0x45] = 0;
  piVar3[0x46] = 0;
  piVar3[0x47] = 0;
  piVar3[0x4a] = 0;
  piVar3[0x67] = 2;
  piVar3[0x4d] = 0x7800;
  piVar3[0x4b] = 1;
  piVar3[0x33] = 1;
  piVar3[0x34] = iVar6;
  piVar3[0x36] = 1;
  piVar3[0x37] = iVar6;
  piVar3[0x39] = 1;
  piVar3[0x3a] = iVar6;
  piVar3[0x3d] = iVar6;
  piVar3[0x40] = iVar6;
  piVar3[0x42] = 1;
  piVar3[0x43] = iVar5;
  piVar3[0x4f] = 1;
  piVar3[0x50] = iVar6;
  piVar3[0x52] = 1;
  piVar3[0x53] = iVar6;
  piVar3[0x55] = 1;
  piVar3[0x56] = iVar6;
  piVar3[0x59] = iVar6;
  piVar3[0x5b] = 5;
  piVar3[0x61] = 0;
  piVar3[0x62] = 0;
  piVar3[99] = 0;
  iVar4 = iRam80110744;
  piVar3[100] = iRam80110740;
  iVar8 = iRam80110748;
  piVar3[0x65] = iVar4;
  piVar3[0x68] = iVar8;
  iVar4 = iRam8011074c;
  piVar3[0x7e] = 0x164;
  piVar3[0x6a] = iVar4;
  piVar3[0x81] = 0x79;
  iVar8 = iRam80110750;
  piVar3[0x7f] = iVar4 + 900;
  iVar4 = iRam80110754;
  piVar3[0x86] = iVar8;
  piVar3[0x84] = iVar4;
  piVar3[0x66] = 0;
  piVar3[0x69] = 0x7800;
  piVar3[0x7d] = 0;
  piVar3[0x80] = 0;
  piVar3[0x82] = 0;
  piVar3[0x83] = 3;
  piVar3[0x6e] = 0x14;
  piVar3[0x77] = 10;
  piVar3[0x5c] = iVar6;
  piVar3[0x5e] = 1;
  piVar3[0x5f] = iVar5;
  piVar3[0x6b] = 1;
  piVar3[0x6c] = iVar6;
  piVar3[0x6f] = iVar6;
  piVar3[0x71] = 1;
  piVar3[0x72] = iVar6;
  piVar3[0x74] = 1;
  piVar3[0x75] = iVar6;
  piVar3[0x78] = iVar6;
  piVar3[0x7a] = 1;
  piVar3[0x7b] = iVar5;
  piVar3[0x9f] = 4;
  piVar3[0x90] = 200;
  piVar3[0x9c] = 0xa1;
  piVar3[0xa2] = iRam80110758;
  iVar4 = iRam8011075c;
  piVar3[0x9a] = 0x282;
  piVar3[0xb6] = iVar4;
  iVar8 = iRam80110760;
  piVar3[0xb9] = iVar4 + -0xf2;
  piVar3[0xa0] = iVar8;
  piVar3[0xa6] = iVar4 + -0x13f;
  iVar4 = iRam80110764;
  piVar3[0xb7] = 400;
  piVar3[0x85] = 0x7800;
  piVar3[0xa1] = 0x7800;
  piVar3[0x99] = 0;
  piVar3[0x9b] = 0;
  piVar3[0x9d] = 0;
  piVar3[0x9e] = 0;
  piVar3[0xbb] = 5;
  piVar3[0x87] = 1;
  piVar3[0x88] = iVar6;
  piVar3[0x8a] = 100;
  piVar3[0x8b] = iVar6;
  piVar3[0x8d] = 1;
  piVar3[0x8e] = iVar6;
  piVar3[0xb0] = iVar6;
  piVar3[0xb3] = iVar5;
  piVar3[0x91] = iVar6;
  piVar3[0x93] = 1;
  piVar3[0x94] = iVar6;
  piVar3[0x96] = 1;
  piVar3[0x97] = iVar5;
  piVar3[0xa3] = 1;
  piVar3[0xa4] = iVar6;
  piVar3[0xa7] = iVar6;
  piVar3[0xa9] = 100;
  piVar3[0xaa] = iVar6;
  piVar3[0xbc] = iVar4;
  piVar3[200] = iRam80110768;
  iVar4 = iRam8011076c;
  piVar3[0xc4] = 0xf000;
  piVar3[0xca] = iVar4;
  piVar3[0xd4] = iRam80110770;
  iVar4 = iRam80110774;
  piVar3[0xcb] = 0x27;
  piVar3[0xdf] = 2;
  piVar3[0xd6] = iVar4;
  piVar3[0xd7] = 0x25;
  piVar3[0xac] = 1;
  piVar3[0xad] = iVar6;
  piVar3[0xaf] = 100;
  piVar3[0xb2] = 1;
  piVar3[0xb5] = 0;
  piVar3[0xb8] = 0;
  piVar3[0xba] = 0;
  piVar3[0xd3] = 1;
  piVar3[199] = 0;
  iVar4 = iRam80110778;
  piVar3[0xbd] = (int)(piVar3 + 0x14);
  piVar3[0xbf] = 0x35;
  piVar3[0xc1] = 0x3fc00;
  piVar3[0xc2] = 0x32;
  piVar3[0xc3] = 0x32;
  piVar3[0xc6] = 0x40;
  piVar3[0xbe] = iVar4;
  piVar3[0xc0] = 0x9800;
  piVar3[0xc5] = 0x9800;
  piVar3[0xc9] = (int)(piVar3 + 0x30);
  piVar3[0xcc] = 0x9800;
  piVar3[0xcd] = 0x3fc00;
  piVar3[0xce] = 0x32;
  piVar3[0xcf] = 0xff;
  piVar3[0xd0] = 0x17c00;
  piVar3[0xd1] = 0x9800;
  piVar3[0xd2] = 0x40;
  piVar3[0xd5] = (int)(piVar3 + 0x4c);
  piVar3[0xdc] = 0x17c00;
  iVar5 = iRam8011077c;
  piVar3[0xdb] = 0xff;
  piVar3[0xe0] = iVar5;
  piVar3[0xe2] = iRam80110780;
  iVar5 = iRam80110784;
  piVar3[0xe3] = 0x2d;
  piVar3[0xec] = iVar5;
  piVar3[0xee] = iRam80110788;
  iVar5 = iRam8011078c;
  piVar3[0xd8] = 0x9800;
  piVar3[0xf7] = 4;
  piVar3[0xf8] = iVar5;
  piVar3[0xd9] = 0x3fc00;
  piVar3[0xda] = 0x32;
  piVar3[0xef] = 0x30;
  piVar3[0x103] = 5;
  iVar5 = iRam80110790;
  piVar3[0xeb] = 3;
  piVar3[0xe7] = 0xff;
  piVar3[0xfb] = 0x2f;
  piVar3[0xfd] = 0x3fc00;
  piVar3[0xdd] = 0x9800;
  piVar3[0xde] = 0x40;
  piVar3[0xfa] = iVar5;
  piVar3[0xe1] = (int)(piVar3 + 0x68);
  piVar3[0xe4] = 0x9800;
  piVar3[0xe5] = 0x3fc00;
  piVar3[0xe6] = 0x32;
  piVar3[0xe8] = 0xc800;
  piVar3[0xe9] = 0x9800;
  piVar3[0xea] = 0x40;
  piVar3[0xed] = (int)(piVar3 + 0x84);
  piVar3[0xf0] = 0x9800;
  piVar3[0xf1] = 0x3fc00;
  piVar3[0xf4] = 0xc800;
  piVar3[0xf5] = 0x9800;
  piVar3[0xf6] = 0x40;
  piVar3[0xf2] = 0x32;
  piVar3[0xf3] = 0x32;
  piVar3[0xf9] = (int)(piVar3 + 0xa0);
  piVar3[0xfe] = 0x32;
  piVar3[0xff] = 0x32;
  iVar5 = iRam80110794;
  piVar3[0xfc] = 0x9800;
  piVar3[0x102] = 0x40;
  piVar3[0x100] = 0xc800;
  piVar3[0x10f] = 6;
  piVar3[0x101] = 0x9800;
  piVar3[0x104] = iVar5;
  iVar5 = iRam80110798;
  piVar3[0x105] = (int)(piVar3 + 0x14);
  piVar3[0x10c] = 0x10400;
  piVar3[0x11b] = 7;
  iVar6 = iRam8011079c;
  piVar3[0x107] = 0x35;
  piVar3[0x110] = iVar5;
  piVar3[0x106] = iVar4;
  piVar3[0x112] = iVar6;
  iVar4 = iRam801107a0;
  piVar3[0x113] = 0x24;
  piVar3[0x111] = (int)(piVar3 + 0x30);
  piVar3[0x11c] = iVar4;
  piVar3[0x127] = 8;
  piVar3[0x11d] = (int)(piVar3 + 0x4c);
  piVar3[0x11e] = 0xf9;
  piVar3[0x108] = 0x5000;
  piVar3[0x114] = 0x5000;
  piVar3[0x120] = 0x5000;
  iVar4 = iRam801107a4;
  piVar3[0x11f] = 0x36;
  piVar3[0x128] = iVar4;
  iVar4 = iRam801107a8;
  piVar3[0x133] = 9;
  piVar3[0x109] = 0x19000;
  piVar3[0x10a] = 100;
  piVar3[0x10b] = 100;
  piVar3[0x10d] = 0x19000;
  piVar3[0x10e] = 100;
  piVar3[0x115] = 0x19000;
  piVar3[0x116] = 0x14;
  piVar3[0x117] = 100;
  piVar3[0x118] = 0x19000;
  piVar3[0x119] = 0x19000;
  piVar3[0x11a] = 100;
  piVar3[0x12a] = iVar4;
  iVar4 = iRam801107ac;
  piVar3[0x129] = (int)(piVar3 + 0x68);
  piVar3[0x13f] = 10;
  piVar3[0x12e] = 0x14;
  piVar3[0x134] = iVar4;
  piVar3[0x135] = (int)(piVar3 + 0x84);
  iVar4 = iRam801107b0;
  piVar3[0x137] = 0x17;
  piVar3[0x136] = iVar4;
  piVar3[0x140] = iRam801107b4;
  piVar3[0x14b] = 0xb;
  piVar3[0x141] = (int)(piVar3 + 0xa0);
  piVar3[0x121] = 0x19000;
  piVar3[0x122] = 0x14;
  piVar3[300] = 0x5000;
  piVar3[0x130] = 0xdc00;
  piVar3[0x138] = 0x5000;
  piVar3[0x13c] = 0xdc00;
  iVar4 = iRam801107b8;
  piVar3[299] = 0x14;
  piVar3[0x143] = 0x16;
  piVar3[0x123] = 100;
  piVar3[0x124] = 0x19000;
  piVar3[0x125] = 0x19000;
  piVar3[0x126] = 100;
  piVar3[0x12d] = 0x19000;
  piVar3[0x12f] = 100;
  piVar3[0x131] = 0x19000;
  piVar3[0x132] = 100;
  piVar3[0x139] = 0x19000;
  piVar3[0x13a] = 100;
  piVar3[0x13b] = 100;
  piVar3[0x13d] = 0x19000;
  piVar3[0x13e] = 100;
  piVar3[0x142] = iVar4;
  piVar3[0x144] = 0x5000;
  piVar3[0x148] = 0xdc00;
  piVar3[0x149] = 0x19000;
  piVar3[0x14c] = 100;
  piVar3[1] = 0;
  piVar3[0x145] = 0x19000;
  piVar3[0x146] = 100;
  piVar3[0x147] = 100;
  piVar3[0x14a] = 100;
  piVar3[0x15b] = 0;
  piVar3[0x14d] = 0;
  piVar3[0x15a] = 100;
  *piVar3 = 0;
  reset_cltm_stats(piVar3);
  do {
    sysmon_envsys_foreach_sensor(uRam801107bc,piVar3,1);
    piVar10 = piRam801107c0;
    acltm_calculate_virtual_temperatures(piVar3);
    acltm_run_PI_loops(piVar3);
    piVar12 = piRam801107c4;
    if (*piVar10 == 0) {
      iVar4 = Force_Fan_Init(*piRam801107c4);
      if (iVar4 == -1) {
        printf(uRam801107c8);
      }
      Set_Fan_Duty_Cycle(*piVar12);
      *piRam801107cc = *piVar12;
    }
  } while (*piVar3 < 5);
  aiStack_38[0] = 100;
  *puRam801107d0 = piVar3;
  aiStack_38[1] = 100;
LAB_80110148:
  do {
    tsleep(piVar3,0x16,uRam801107dc,*piRam801107d8 * *piRam801107d4);
    iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar9 = *(uint *)(iVar4 + 0x158);
    if ((int)uVar9 < 5) {
      pic_set_priority(iVar4,5);
    }
    cltm_check_load(piVar3);
    iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    uVar7 = *(uint *)(iVar4 + 0x158);
    if (uVar9 != uVar7) {
      disableIRQinterrupts();
      *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + 1;
      pic_do_pending_ints((uint)(byte)(((int)(uVar9 - uVar7) < 0) << 4 | (uVar7 <= uVar9) << 2 |
                                       SBORROW4(uVar9,uVar7) << 1 | in_Q) << 0x1b,uVar9,0);
      *(int *)(iVar4 + 0x164) = *(int *)(iVar4 + 0x164) + -1;
      enableIRQinterrupts();
      iVar4 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      if ((*(int *)(iVar4 + 0x164) == 0) &&
         (*(uint *)(iVar4 + 0x17c) >> (*(uint *)(iVar4 + 0x158) & 0xff) != 0)) {
        dosoftints();
      }
    }
    if (*piRam801107e0 != 0) {
      microuptime(auStack_48);
      printf(uRam80110814,auStack_48[0]);
    }
    *piVar3 = 0;
    sysmon_envsys_foreach_sensor(uRam801107bc,piVar3,1);
    iVar4 = piVar3[0x168];
    if (((iVar4 == *piRam801107e4) && (iRam8011081c < piVar3[0x16a])) && (0x32 < iVar4)) {
      *piRam801107e4 = iVar4 + -1;
    }
    acltm_calculate_virtual_temperatures(piVar3);
    piVar10 = piRam801107e8;
    acltm_run_PI_loops(piVar3);
    if (((*piVar10 != 0) || (*piRam801107ec != 0)) || (*piRam801107f0 != 0)) {
      *piRam801107c4 = 0xff;
    }
    piVar10 = piRam801107c0;
    if (-1 < *piRam801107f4) {
      *piRam801107c4 = *piRam801107f4;
    }
    piVar12 = piRam801107cc;
    if (*piVar10 == 0) {
      Set_Fan_Duty_Cycle(*piRam801107c4);
      *piVar12 = *piRam801107c4;
    }
    piVar10 = piRam801107c4;
    aiStack_38[0] = *piRam801107f8;
    aiStack_38[1] = aiStack_38[0];
    if (*piVar3 < 5) {
      printf(uRam80110818);
      *piRam801107e8 = 0x1f;
LAB_8011060c:
      aiStack_38[1] = 0x14;
LAB_80110618:
      aiStack_38[0] = aiStack_38[1];
      if (-1 < *piRam8011080c) {
        aiStack_38[0] = *piRam8011080c;
      }
      if (-1 < *piRam80110810) {
        aiStack_38[1] = *piRam80110810;
      }
      goto LAB_80110358;
    }
    if (*piRam801107c0 == 0) {
      iVar4 = *piRam801107e8;
      *piRam801107fc = 0;
      if (((iVar4 != 0) || (*piRam801107ec != 0)) || (*piRam801107f0 != 0)) goto LAB_8011060c;
      goto LAB_80110618;
    }
  } while (*piRam801107fc != 0);
  aiStack_38[0] = 100;
  aiStack_38[1] = 100;
  *piRam801107fc = 1;
  *piVar10 = 0xff;
  Set_Fan_Duty_Cycle(0xff);
  uVar2 = uRam80110800;
  *piRam801107cc = *piRam801107c4;
  printf(uVar2);
LAB_80110358:
  iVar5 = aiStack_38[1];
  iVar4 = aiStack_38[0];
  piVar10 = piRam80110804;
  uVar9 = (aiStack_38[0] + aiStack_38[1]) / 2;
  if (piVar3[1] == 0) {
    if (((0x37 < (int)uVar9) && (*piRam801107e8 == 0)) && (*piRam801107ec == 0)) {
      cVar13 = *piRam801107f0 < 0;
      cVar15 = '\x01';
      cVar16 = '\0';
      cVar14 = '\x01';
      if (*piRam801107f0 == 0) goto LAB_801103d8;
    }
    piVar3[1] = 1;
    cVar13 = *piRam80110804 < 0;
    cVar14 = *piRam80110804 == 0;
    cVar15 = '\x01';
    cVar16 = '\0';
    if (!(bool)cVar14) {
      knote(piRam80110804,0x1000000);
    }
  }
  else {
    cVar15 = 0x3a < uVar9;
    cVar16 = SBORROW4(uVar9,0x3b);
    cVar13 = (int)(uVar9 - 0x3b) < 0;
    cVar14 = uVar9 == 0x3b;
    if (0x3b < (int)uVar9) {
      cVar13 = *piRam801107e8 < 0;
      cVar15 = '\x01';
      cVar16 = '\0';
      cVar14 = '\0';
      if (*piRam801107e8 == 0) {
        cVar13 = *piRam801107ec < 0;
        cVar15 = '\x01';
        cVar16 = '\0';
        cVar14 = '\0';
        if (*piRam801107ec == 0) {
          cVar13 = *piRam801107f0 < 0;
          cVar15 = '\x01';
          cVar16 = '\0';
          cVar14 = '\0';
          if (*piRam801107f0 == 0) {
            piVar3[1] = 0;
            iVar6 = *piVar10;
            cVar13 = iVar6 < 0;
            cVar14 = iVar6 == 0;
            cVar15 = '\x01';
            cVar16 = '\0';
            if (!(bool)cVar14) {
              knote(piVar10,0x800000);
            }
          }
        }
      }
    }
  }
LAB_801103d8:
  piVar11 = piVar3 + 0x150;
  bVar1 = cVar13 << 4 | cVar14 << 3 | cVar15 << 2 | cVar16 << 1 | in_Q;
  piVar3[0x28a] = *piRam801107c4;
  piVar3[0x28d] = iVar4;
  piVar3[0x290] = iVar5;
  iVar4 = 0;
  piVar10 = piVar3;
  piVar12 = piVar11;
  do {
    iVar5 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    iVar6 = *(int *)(iVar5 + 0x158);
    if (iVar6 < 5) {
      pic_set_priority(iVar5,5);
    }
    cltm_check_load(piVar3);
    iVar5 = aiStack_38[iVar4];
    if (piVar10[0x14c] == iVar5) {
      iStack_50 = 0;
    }
    else if ((code *)piVar10[0x14d] == (code *)0x0) {
      iStack_50 = 1;
    }
    else {
      (*(code *)piVar10[0x14d])(piVar10[0x14e],iVar5);
      piVar10[0x14c] = iVar5;
      iStack_50 = 2;
    }
    iVar8 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
    if (iVar6 != *(int *)(iVar8 + 0x158)) {
      disableIRQinterrupts();
      *(int *)(iVar8 + 0x164) = *(int *)(iVar8 + 0x164) + 1;
      pic_do_pending_ints((uint)bVar1 << 0x1b,iVar6,0);
      *(int *)(iVar8 + 0x164) = *(int *)(iVar8 + 0x164) + -1;
      enableIRQinterrupts();
      iVar6 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
      if ((*(int *)(iVar6 + 0x164) == 0) &&
         (*(uint *)(iVar6 + 0x17c) >> (*(uint *)(iVar6 + 0x158) & 0xff) != 0)) {
        dosoftints();
      }
    }
    if (iStack_50 == 2) {
      if (*piRam801107e0 == 0) {
        log(6,uRam80110808,piVar11,iVar5);
      }
      else {
        printf(uRam80110808,piVar12,iVar5);
      }
    }
    iVar4 = iVar4 + 1;
    piVar12 = piVar12 + 0xe;
    piVar11 = piVar11 + 0xe;
    piVar10 = piVar10 + 0xe;
  } while (iVar4 != 2);
  goto LAB_80110148;
}
