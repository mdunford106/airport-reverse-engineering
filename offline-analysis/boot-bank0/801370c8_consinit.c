
void consinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;

  puVar2 = puRam801371a4;
  puVar1 = puRam801371a0;
  if (*pcRam8013719c == '\0') {
    puVar5 = (undefined4 *)*puRam801371a0;
    *pcRam8013719c = '\x01';
    uVar3 = (*(code *)puVar5[0xb])(*puVar5,*puVar2,uRam801371a8);
    (*(code *)((undefined4 *)*puVar1)[0x17])
              (*(undefined4 *)*puVar1,*puVar2,uRam801371a8,uVar3 & 0xfffdffff);
    uVar3 = (*(code *)((undefined4 *)*puVar1)[0xb])(*(undefined4 *)*puVar1,*puVar2,8);
    (*(code *)((undefined4 *)*puVar1)[0x17])(*(undefined4 *)*puVar1,*puVar2,8,uVar3 & 0xfffffffe);
    iVar4 = comcnattach(*puVar1,uRam801371b4,*puRam801371b0,uRam801371b8,0,*puRam801371ac);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      panic(uRam801371bc);
    }
  }
  return;
}
