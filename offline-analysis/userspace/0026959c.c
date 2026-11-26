
undefined4 FUN_0026959c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint in_r3;
  undefined4 in_stack_00000000;
  uint uStack_1c;

  uVar4 = DAT_00269630;
  if (3 < in_r3) {
    FUN_00790400(&uStack_1c,in_stack_00000000,4);
    uStack_1c = (uint)(uStack_1c == 0);
    iVar1 = FUN_0074c0d4(DAT_00269634,0,0,&uStack_1c,4);
    uVar4 = 0;
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00792904(), uVar4 = DAT_00269638, *piVar2 != 0)) {
      puVar3 = (undefined4 *)FUN_00792904();
      uVar4 = *puVar3;
    }
  }
  return uVar4;
}
