
int FUN_00269174(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [64];
  byte local_70 [32];
  undefined1 auStack_50 [4];
  int local_4c;
  undefined1 auStack_32 [18];

  iVar2 = FUN_002ac888();
  if (iVar2 == 0) {
    iVar2 = *DAT_00269418;
    if (((iVar2 != 0) && (iVar3 = FUN_004d3f44(DAT_0026941c), iVar3 == 0)) &&
       (iVar2 = FUN_005d4af0(iVar2,0,auStack_b0,0x40,0), -1 < iVar2)) {
      FUN_0078cf10(auStack_50,0,0x1c);
      iVar3 = FUN_007928c8(iVar2,DAT_00269420,auStack_50);
      if ((-1 < iVar3) && (uVar7 = FUN_0075669c(local_4c), iVar3 = (int)uVar7, iVar3 != 0)) {
        FUN_007928d4(iVar2,(int)((ulonglong)uVar7 >> 0x20),0x10000,0,0);
        iVar4 = FUN_005e94f8(iVar2,iVar3,local_4c);
        if (iVar4 == local_4c) {
          iVar4 = 0;
          do {
            auStack_32[iVar4] = 0xff;
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0x12);
          iVar4 = FUN_00720548(iVar3 + 8,auStack_32,0x12);
          if (iVar4 != 0) {
            FUN_0078cf10(local_70,0,0x12);
            iVar6 = *DAT_00269424;
            iVar4 = 0;
            iVar5 = iVar3;
            do {
              pbVar1 = (byte *)(iVar5 + 8);
              iVar5 = iVar5 + 1;
              if ((*(byte *)(iVar6 + 1 + (uint)*pbVar1) & 7) != 0) {
                local_70[iVar4] = *pbVar1;
                iVar4 = iVar4 + 1;
              }
            } while (iVar5 != iVar3 + 0x11);
            FUN_004d4058(DAT_0026941c,local_70);
          }
        }
        FUN_00754c60(iVar3);
      }
      FUN_005e9bc8(iVar2);
    }
    iVar2 = FUN_002912c4(DAT_00269428,0,DAT_0026942c,0,0,0);
    if ((((iVar2 == 0) && (iVar2 = FUN_002912c4(DAT_00269430,0,0,DAT_00269434,0,0), iVar2 == 0)) &&
        ((iVar2 = FUN_002912c4(DAT_00269438,0,0,DAT_0026943c,0,0), iVar2 == 0 &&
         (((iVar2 = FUN_002912c4(DAT_00269440,0,DAT_00269444,DAT_00269448,0,0), iVar2 == 0 &&
           (iVar2 = FUN_002912c4(DAT_0026944c,0,DAT_00269450,0,0,0), iVar2 == 0)) &&
          (iVar2 = FUN_002b2ffc(), iVar2 == 0)))))) && (iVar2 = FUN_002b3164(), iVar2 == 0)) {
      FUN_002912c4(DAT_0026945c,0,DAT_00269454,DAT_00269458,0,0);
      FUN_002912c4(DAT_00269468,0,DAT_00269460,DAT_00269464,0,0);
      iVar2 = FUN_002912c4(DAT_0026946c,0,DAT_00269470,0,0,0);
    }
  }
  return iVar2;
}
