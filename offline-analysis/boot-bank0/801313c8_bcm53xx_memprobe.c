
int bcm53xx_memprobe(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;

  puVar9 = (undefined4 *)*puRam801315a0;
  uVar10 = *puRam801315a4;
  uVar2 = (*(code *)puVar9[0xb])(*puVar9,uVar10,uRam801315a8);
  uVar3 = (*(code *)puVar9[0xb])(*puVar9,uVar10,uRam801315ac);
  uVar4 = (*(code *)puVar9[0xb])(*puVar9,uVar10,uRam801315b0);
  uVar5 = (*(code *)puVar9[0xb])(*puVar9,uVar10,uRam801315b4);
  uVar1 = (uVar2 & 0x70000) >> 0x10;
  uVar4 = (uVar4 & 0xf000000) >> 0x18;
  uVar11 = (uint)(uVar1 != 0 && uVar4 != 0);
  if (uVar1 != 0 && uVar4 != 0) {
    uVar11 = 0;
    uVar6 = 0;
    do {
      uVar8 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      uVar6 = uVar6 + 1;
      uVar11 = uVar11 + uVar8;
    } while (uVar6 < uVar1 && uVar4 != 0);
  }
  if ((uVar5 & 0x100) == 0) {
    iVar7 = 2;
  }
  else {
    iVar7 = 1;
  }
  return uVar11 << (((uVar2 & 0x1f) - ((uVar3 & 0x70000) >> 0x10)) +
                    (((uVar2 & 0xf00) >> 8) - ((uVar3 & 0x7000000) >> 0x18)) +
                    iVar7 + (3 - ((uVar3 & 0x300) >> 8)) & 0xff);
}
