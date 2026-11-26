
void pwm_attach(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  puVar2 = (undefined4 *)device_private(param_2);
  *puVar2 = param_2;
  puVar2[1] = *param_3;
  aprint_naive(uRam80139a90);
  aprint_normal(uRam80139a90);
  (*(code *)((undefined4 *)*param_3)[0x17])(*(undefined4 *)*param_3,param_3[1],uRam80139a94,0xf);
  (*(code *)((undefined4 *)puVar2[1])[3])
            (*(undefined4 *)puVar2[1],param_3[1],param_3[4],param_3[5],puVar2 + 2);
  mutex_init(puVar2 + 7,2,5);
  cv_init(puVar2 + 8,uRam80139a98);
  uVar1 = uRam80139a9c;
  iVar4 = 0;
  do {
    iVar3 = kern_malloc(0x18,uRam80139aa0,3);
    iVar4 = iVar4 + 1;
    puVar2[3] = iVar3;
    *(undefined4 *)(iVar3 + 4) = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 4);
  return;
}
