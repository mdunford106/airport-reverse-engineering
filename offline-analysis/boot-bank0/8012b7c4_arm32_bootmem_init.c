
void arm32_bootmem_init(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;

  puVar1 = puRam8012b88c;
  uVar3 = param_1 + param_2;
  uVar5 = (uRam8012b888 & 0xfffff000) + 0x80000000 + param_1;
  uVar6 = puRam8012b88c[0xc4];
  *puRam8012b890 = param_2 >> 0xc;
  puVar4 = puRam8012b898;
  uVar6 = uVar6 + (uVar3 - uVar5 >> 0xc);
  *puRam8012b894 = param_1;
  *puVar4 = uVar3;
  puVar4 = puVar1 + 0xb;
  puVar1[8] = (uVar5 - param_1) + 0x80000000;
  puVar1[0xc4] = uVar6;
  *puVar1 = param_1;
  puVar1[3] = uVar3;
  puVar1[1] = param_3;
  puVar1[2] = uVar5;
  puVar1[7] = uVar5;
  puVar1[9] = uVar3 - uVar5;
  if (param_1 < param_3) {
    puVar1[0xd] = 0x80000000;
    puVar1[0xc4] = uVar6 + (param_3 - param_1 >> 0xc);
    puVar1[0xc] = param_1;
    puVar1[0xe] = param_3 - param_1;
    puVar4 = puVar1 + 0x10;
  }
  iVar2 = iRam8012b89c;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[0xc5] = ((int)puVar4 - iVar2 >> 2) * iRam8012b8a0;
  return;
}
