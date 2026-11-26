
int FUN_00268270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iStack_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int aiStack_d4 [4];
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int aiStack_a4 [4];
  int iStack_94;
  int iStack_90;
  int aiStack_8c [4];
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 auStack_34 [2];

  auStack_34[0] = DAT_00268c1c;
  iStack_74 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  iVar1 = FUN_0074c0d4(DAT_00268c20,&uStack_5a0,auStack_34,0,0);
  if (iVar1 == 0) {
    FUN_00765090(DAT_00268c24);
    uVar3 = DAT_00268c34;
    aiStack_d4[0] = iVar1;
    aiStack_d4[1] = iVar1;
    aiStack_d4[2] = iVar1;
    aiStack_d4[3] = iVar1;
    iStack_c4 = iVar1;
    iStack_c0 = iVar1;
    iStack_bc = iVar1;
    iStack_b8 = iVar1;
    iStack_b4 = iVar1;
    iStack_b0 = iVar1;
    iStack_ac = iVar1;
    iStack_a8 = iVar1;
    aiStack_a4[0] = iVar1;
    aiStack_a4[1] = iVar1;
    aiStack_a4[2] = iVar1;
    aiStack_a4[3] = iVar1;
    iStack_94 = iVar1;
    iStack_90 = iVar1;
    aiStack_8c[0] = iVar1;
    aiStack_8c[1] = iVar1;
    aiStack_8c[2] = iVar1;
    aiStack_8c[3] = iVar1;
    iStack_7c = iVar1;
    iStack_78 = iVar1;
    iVar1 = FUN_004e5048(0,&iStack_74,DAT_00268c88,DAT_00268c90,uStack_5a0,DAT_00268c28,uStack_59c,
                         DAT_00268c2c,uStack_140,DAT_00268c30,uStack_138,DAT_00268c34,uStack_148,
                         DAT_00268c38,uStack_13c,DAT_00268c3c,uStack_134,DAT_00268c40,uStack_144,
                         DAT_00268c44,uStack_130,DAT_00268c48,uStack_124,DAT_00268c4c,uStack_118,
                         DAT_00268c50,uStack_10c,DAT_00268c54,uStack_100,DAT_00268c58,uStack_12c,
                         DAT_00268c5c,uStack_120,DAT_00268c60,uStack_114,DAT_00268c64,uStack_108,
                         DAT_00268c68,uStack_fc,DAT_00268c6c,uStack_128,DAT_00268c70,uStack_11c,
                         DAT_00268c74,uStack_110,DAT_00268c78,uStack_104,DAT_00268c7c,uStack_f8,
                         DAT_00268c80,uStack_f4,DAT_00268c84,uStack_f0,DAT_00268c8c,uStack_ec,
                         DAT_00268c94,uStack_e8,uStack_e4,DAT_00268c98);
    if (iVar1 == 0) {
      FUN_00765090(DAT_00268cfc);
      puVar7 = &uStack_5a0;
      iVar1 = 0;
      do {
        uVar13 = puVar7[5];
        uVar11 = puVar7[6];
        uVar14 = puVar7[7];
        uVar4 = DAT_00268d08;
        iVar2 = FUN_004e44b0(0,*(undefined4 *)((int)aiStack_a4 + iVar1),DAT_00268d0c,DAT_00268d10,
                             puVar7[2],DAT_00268d00,puVar7[3],DAT_00268d04,puVar7[4],uVar13,
                             DAT_00268d08,uVar3,uVar11,uVar14);
        iVar1 = iVar1 + 4;
        puVar7 = puVar7 + 6;
        if (iVar2 != 0) goto LAB_00268964;
      } while (iVar1 != 0x18);
      FUN_00765090(DAT_00268d14);
      puVar7 = &uStack_5a0;
      iVar1 = 0;
      do {
        iVar2 = FUN_004e44b0(0,*(undefined4 *)((int)aiStack_8c + iVar1),DAT_00268d18,DAT_00268d1c,
                             puVar7[0x2c],DAT_00268d10,puVar7[0x2d],DAT_00268d00,puVar7[0x2e],uVar13
                             ,uVar4,uVar3,uVar11,uVar14);
        iVar1 = iVar1 + 4;
        puVar7 = puVar7 + 3;
        if (iVar2 != 0) goto LAB_00268964;
      } while (iVar1 != 0x18);
      FUN_00765090(DAT_00268d20);
      puVar7 = &uStack_5a0;
      iStack_5a8 = 0;
      do {
        iStack_70 = 0;
        iVar1 = FUN_004e5048(0,&iStack_70,DAT_00268d24);
        if (iVar1 != 0) goto LAB_00268964;
        FUN_0077476c(DAT_00268d28,iStack_5a8,iStack_70);
        uVar5 = puVar7[0x48];
        uVar12 = puVar7[0x4c];
        uVar15 = puVar7[0x4d];
        uVar8 = puVar7[0x49];
        uVar9 = puVar7[0x4a];
        uVar10 = puVar7[0x4b];
        uVar16 = puVar7[0x4e];
        uVar6 = puVar7[0x4f];
        uVar3 = DAT_00268d44;
        uVar4 = DAT_00268d48;
        uVar11 = DAT_00268d4c;
        uVar13 = DAT_00268d50;
        uVar14 = DAT_00268d54;
        uVar17 = DAT_00268d58;
        uVar18 = DAT_00268d34;
        uVar19 = DAT_00268d5c;
        iVar1 = FUN_004e44b0(0,iStack_70,DAT_00268d60,DAT_00268d64,puVar7[0x42],DAT_00268d2c,
                             puVar7[0x43],DAT_00268d30,puVar7[0x44],DAT_00268d38,puVar7[0x45],
                             DAT_00268d3c,puVar7[0x46],DAT_00268d40,puVar7[0x47],DAT_00268d44,uVar5,
                             DAT_00268d48,uVar8,DAT_00268d4c,uVar9,DAT_00268d50,uVar10,DAT_00268d54,
                             uVar12,DAT_00268d58,uVar15,DAT_00268d34,uVar16,DAT_00268d5c,uVar6);
        if (iVar1 != 0) goto LAB_00268964;
        FUN_0077476c(DAT_00268d68,iStack_5a8);
        iVar1 = FUN_004e44b0(0,aiStack_d4[iStack_5a8],DAT_00268d78,DAT_00268d70,puVar7[0x3e],
                             DAT_00268d6c,puVar7[0x3f],DAT_00268d70,puVar7[0x3e],DAT_00268d10,
                             puVar7[0x40],DAT_00268d00,puVar7[0x41],DAT_00268d74,iStack_70,uVar3,
                             uVar5,uVar4,uVar8,uVar11,uVar9,uVar13,uVar10,uVar14,uVar12,uVar17,
                             uVar15,uVar18,uVar16,uVar19,uVar6);
        if (iVar1 != 0) goto LAB_00268964;
        FUN_0077476c(DAT_00268d7c,iStack_5a8);
        if (iStack_70 != 0) {
          thunk_FUN_00516b38();
          iStack_70 = 0;
        }
        puVar7 = puVar7 + 0x12;
        iStack_5a8 = iStack_5a8 + 1;
      } while (iStack_5a8 != 0xc);
      FUN_00765090(DAT_00268d80);
    }
    else {
LAB_00268964:
      if (iStack_70 != 0) {
        thunk_FUN_00516b38();
        iStack_70 = 0;
      }
      if (iStack_74 != 0) {
        thunk_FUN_00516b38();
        iStack_74 = 0;
      }
    }
  }
  iVar1 = FUN_00267b54(DAT_00268d84,&uStack_48);
  if (((((iVar1 == 0) && (iVar1 = FUN_00267b54(DAT_00268d88,&uStack_44), iVar1 == 0)) &&
       (iVar1 = FUN_00267b54(DAT_00268d8c,&uStack_40), iVar1 == 0)) &&
      ((((iVar1 = FUN_00267b54(DAT_00268d90,&uStack_4c), iVar1 == 0 &&
         (iVar1 = FUN_00267b54(DAT_00268d94,&uStack_50), iVar1 == 0)) &&
        ((iVar1 = FUN_00267b54(DAT_00268d98,&uStack_54), iVar1 == 0 &&
         ((iVar1 = FUN_00267b54(DAT_00268d9c,&uStack_58), iVar1 == 0 &&
          (iVar1 = FUN_00267b54(DAT_00268da0,&uStack_5c), iVar1 == 0)))))) &&
       (iVar1 = FUN_00267b54(DAT_00268da4,&uStack_60), iVar1 == 0)))) &&
     (((iVar1 = FUN_00267b54(DAT_00268da8,&uStack_64), iVar1 == 0 &&
       (iVar1 = FUN_00267b54(DAT_00268dac,&uStack_68), iVar1 == 0)) &&
      (iVar1 = FUN_00267b54(DAT_00268db0,&uStack_6c), iVar1 == 0)))) {
    iVar1 = FUN_004e5048(0,&iStack_38,DAT_00268db8,DAT_00268dbc,uStack_48,DAT_00268db4,uStack_44,
                         DAT_00268dc0,uStack_40,DAT_00268dc4,uStack_4c,DAT_00268dc8,uStack_50,
                         DAT_00268dcc,uStack_54,DAT_00268dd0,uStack_58,DAT_00268dd4,uStack_5c,
                         DAT_00268dd8,uStack_60,DAT_00268ddc,uStack_64,DAT_00268de0,uStack_68,
                         DAT_00268de4,uStack_6c);
    if (iVar1 == 0) {
      if (iStack_74 != 0) {
        iVar1 = FUN_004e44b0(0,iStack_38,DAT_00268de8,DAT_00268dec,iStack_74);
        if (iVar1 != 0) goto LAB_00268bd0;
      }
      iVar1 = FUN_0050c558(0,iStack_38,&iStack_3c);
      if (iVar1 == 0) {
        uVar3 = FUN_0050eee8(iStack_3c);
        uVar4 = FUN_0050eebc(iStack_3c);
        iVar1 = FUN_00290d94(uVar3,uVar4,param_4,param_3,param_5,param_6);
      }
    }
  }
LAB_00268bd0:
  if (iStack_74 != 0) {
    thunk_FUN_00516b38();
    iStack_74 = 0;
  }
  if (iStack_38 != 0) {
    thunk_FUN_00516b38();
    iStack_38 = 0;
  }
  if (iStack_3c != 0) {
    thunk_FUN_00516b38();
  }
  return iVar1;
}
