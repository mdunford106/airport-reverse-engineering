
int initarm_common(int param_1,int param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  uvm_lwp_setuarea(uRam8012b78c,*(undefined4 *)(iRam8012b788 + 8));
  arm32_vector_init(*(undefined4 *)(iRam8012b790 + 8),0xffffffff);
  set_stackptr(0x11,*(int *)(iRam8012b794 + 8) + 0x1000);
  set_stackptr(0x12,*(int *)(iRam8012b798 + 8) + 0x1000);
  set_stackptr(0x17,*(int *)(iRam8012b79c + 8) + 0x1000);
  set_stackptr(0x1b,*(int *)(iRam8012b7a0 + 8) + 0x1000);
  uVar2 = uRam8012b7ac;
  *puRam8012b7a8 = uRam8012b7a4;
  *puRam8012b7b0 = uVar2;
  iVar3 = iRam8012b7b8;
  iVar6 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  *(undefined4 *)(iVar6 + 0x1b8) = uRam8012b7b4;
  undefined_init();
  uvm_setpagesize();
  if (*(int *)(iVar3 + 0x314) != 0) {
    uVar11 = 0;
    iVar6 = iVar3;
    do {
      iVar8 = (iVar6 + iRam8012b7bc) - iVar3;
      uVar4 = *(uint *)(iVar8 + 4) >> 0xc;
      uVar10 = uVar4 + (*(uint *)(iVar8 + 0xc) >> 0xc);
      if (uVar4 < uVar10) {
        if (param_4 != 0) {
          do {
            uVar5 = *param_3;
            if (uVar4 < uVar5) {
LAB_8012b740:
              if (uVar10 <= uVar5) break;
              uVar12 = 0;
              uVar9 = uVar5;
            }
            else {
              uVar9 = uVar5 + param_3[1];
              puVar7 = param_3;
              if (uVar9 <= uVar4) {
                iVar8 = 0;
                puVar1 = param_3;
                do {
                  puVar7 = puVar1 + 4;
                  iVar8 = iVar8 + 1;
                  if (param_4 == iVar8) goto LAB_8012b6c8;
                  uVar5 = *puVar7;
                  uVar9 = uVar5 + puVar1[5];
                  if (uVar4 < uVar5) goto LAB_8012b740;
                  puVar1 = puVar7;
                } while (uVar9 <= uVar4);
              }
              uVar12 = puVar7[2];
              if (uVar10 < uVar9) {
                uVar9 = uVar10;
              }
            }
            uvm_page_physload(uVar4,uVar9,uVar4,uVar9,uVar12);
            if (uVar10 <= uVar9) goto LAB_8012b6e0;
            uVar4 = uVar9;
          } while( true );
        }
LAB_8012b6c8:
        uvm_page_physload(uVar4,uVar10,uVar4,uVar10,0);
      }
LAB_8012b6e0:
      uVar11 = uVar11 + 1;
      iVar6 = iVar6 + 0x14;
    } while (uVar11 < *(uint *)(iVar3 + 0x314));
  }
  pmap_bootstrap(param_1,param_1 + param_2);
  db_machine_init();
  ddb_init(0,0,0);
  if ((*puRam8012b7c0 & 0x40) != 0) {
    cpu_Debugger();
  }
  return *(int *)(iRam8012b788 + 8) + 0x2000;
}
