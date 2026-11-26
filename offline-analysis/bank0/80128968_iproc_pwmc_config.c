
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iproc_pwmc_config(void *arg0,void *arg1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;

  uVar8 = *(uint *)arg1;
  if ((*(uint *)((int)arg1 + 4) & 2) != 0) {
    uVar5 = *(uint *)((int)arg1 + 0xc);
    iVar3 = uVar8 * 0xc;
    uVar1 = (uint)((ulonglong)uVar5 * (ulonglong)uRam80128bc0 >> 0x2f) & 0xff;
    iVar9 = *(int *)((int)arg0 + uVar8 * 4 + 0xc);
    if (0x3e < uVar1) {
      uVar1 = 0x3f;
    }
    iproc_pwmc_set_field
              (arg0,*(undefined4 *)(iVar3 + iRam80128bc4 + 8),*(undefined4 *)(iVar3 + iRam80128bc4),
               *(undefined4 *)(iVar3 + iRam80128bc4 + 4),uVar1);
    uVar4 = *(undefined4 *)(iVar3 + iRam80128bc8 + 8);
    uVar6 = *(undefined4 *)(iVar3 + iRam80128bc8);
    uVar7 = *(undefined4 *)(iVar3 + iRam80128bc8 + 4);
    uVar2 = __aeabi_uidivmod(uVar5,uVar1 + 1);
    iproc_pwmc_set_field(arg0,uVar4,uVar6,uVar7,uVar2);
    uVar1 = (*(code *)(*(undefined4 **)((int)arg0 + 4))[0xb])
                      (**(undefined4 **)((int)arg0 + 4),*(undefined4 *)((int)arg0 + 8),0);
    if ((uVar1 & 1 << (uVar8 & 0xff) & 0xf) != 0) {
      iproc_pwmc_stop(arg0,uVar8);
      delay(1);
      iproc_pwmc_start(arg0,uVar8);
    }
    *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)((int)arg1 + 0xc);
    uVar1 = *(uint *)((int)arg1 + 4) & 1;
    if (uVar1 == 0) {
      uStack_3c = *(undefined4 *)(*(int *)((int)arg0 + uVar8 * 4 + 0xc) + 0x10);
      uStack_44 = uVar1;
      uStack_40 = uVar1;
      uStack_38 = uVar1;
      uStack_34 = uVar1;
      iproc_pwmc_config_duty_ticks(arg0,uVar8,&uStack_44);
    }
  }
  if ((*(uint *)((int)arg1 + 4) & 1) != 0) {
    iproc_pwmc_config_duty_ticks(arg0,uVar8,arg1);
  }
  if ((*(uint *)((int)arg1 + 4) & 4) != 0) {
    iVar3 = *(int *)((int)arg0 + uVar8 * 4 + 0xc);
    if (*(int *)((int)arg1 + 0x10) == 0) {
      iproc_pwmc_clear_set_bit(arg0,0,uVar8 + 8,0);
    }
    else {
      iproc_pwmc_clear_set_bit(arg0,0,uVar8 + 8,1);
    }
    *(uint *)(iVar3 + 8) = (uint)(*(int *)((int)arg1 + 0x10) != 0);
    uVar1 = (*(code *)(*(undefined4 **)((int)arg0 + 4))[0xb])
                      (**(undefined4 **)((int)arg0 + 4),*(undefined4 *)((int)arg0 + 8));
    if ((uVar1 & 1 << (uVar8 & 0xff) & 0xf) != 0) {
      iproc_pwmc_stop(arg0,uVar8);
      delay(1);
      iproc_pwmc_start(arg0,uVar8);
    }
  }
  if ((*(uint *)((int)arg1 + 4) & 8) != 0) {
    iproc_pwmc_start(arg0,uVar8);
  }
  if ((*(uint *)((int)arg1 + 4) & 0x10) != 0) {
    iproc_pwmc_stop(arg0,uVar8);
  }
  return 0;
}
