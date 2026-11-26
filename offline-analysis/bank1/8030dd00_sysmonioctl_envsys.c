
/* WARNING: Type propagation algorithm not settling */

int sysmonioctl_envsys(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,uint param_5
                      )

{
  void *arg1;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined1 auStack_68 [32];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 auStack_34 [2];

  if (param_3 == uRam8030e4c4) {
    if ((param_5 & 2) != 0) {
      iVar2 = prop_dictionary_copyin_ioctl(param_4,param_3,auStack_34);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = prop_dictionary_get(auStack_34[0],uRam8030e4d4);
      if ((iVar2 == 0) || (iVar2 = prop_bool_true(), iVar2 == 0)) {
        return 0x16;
      }
      prop_object_release(auStack_34[0]);
      mutex_enter(uRam8030e4e0);
      for (puVar1 = (undefined4 *)*piRam8030e4e4; iVar2 = 0, puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[0x16]) {
        sysmon_envsys_acquire(puVar1,0);
        uVar5 = prop_dictionary_get(*puRam8030e4e8,*puVar1);
        piVar11 = (int *)puVar1[0x19];
        if (piVar11 != (int *)0x0) {
          do {
            while( true ) {
              snprintf(auStack_68,0x20,uRam8030e4ec,piVar11[2]);
              uVar7 = sme_sensor_dictionary_get(uVar5,auStack_68);
              uVar9 = piVar11[0x10];
              if ((uVar9 & 0x10) == 0) {
                iVar2 = 0;
              }
              else {
                prop_dictionary_remove(uVar7,uRam8030e4f0);
                uVar9 = piVar11[0x10];
                iVar2 = 0xd2;
              }
              if ((uVar9 & 0x20) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e4f4);
                uVar9 = piVar11[0x10];
                iVar2 = 0xd2;
              }
              if ((uVar9 & 0x40) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e4f8);
                uVar9 = piVar11[0x10];
                iVar2 = 0xd2;
              }
              if ((uVar9 & 0x80) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e4fc);
                uVar9 = piVar11[0x10];
                iVar2 = 0xd2;
              }
              if ((uVar9 & 4) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e500);
                uVar9 = piVar11[0x10];
                iVar2 = 200;
              }
              if ((uVar9 & 8) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e504);
                uVar9 = piVar11[0x10];
                iVar2 = 200;
              }
              if ((uVar9 & 1) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e508);
                uVar9 = piVar11[0x10];
                iVar2 = 200;
              }
              if ((uVar9 & 2) != 0) {
                prop_dictionary_remove(uVar7,uRam8030e50c);
                uVar9 = piVar11[0x10];
                iVar2 = 200;
              }
              if ((uVar9 & 0x200) != 0) {
                sme_sensor_upint32(uVar7,uRam8030e510,0);
                uVar9 = piVar11[0x10];
                piVar11[7] = 0;
              }
              if ((uVar9 & 0x100) != 0) {
                sme_sensor_upstring(uVar7,uRam8030e514,piVar11 + 0x11);
              }
              if (iVar2 != 0) break;
LAB_8030dfb0:
              piVar11 = (int *)*piVar11;
              if (piVar11 == (int *)0x0) goto LAB_8030e148;
            }
            if ((code *)puVar1[7] != (code *)0x0) {
              (*(code *)puVar1[7])(puVar1,piVar11,0,0);
            }
            uStack_38 = 0;
            piVar11[0x10] = piVar11[0x10] & 0xffffff00;
            if (puVar1[8] != 0) {
              iStack_48 = piVar11[0xc];
              iStack_44 = piVar11[0xd];
              iStack_40 = piVar11[0xe];
              iStack_3c = piVar11[0xf];
              (*(code *)puVar1[8])(puVar1,piVar11,&iStack_48,&uStack_38);
            }
            sme_event_unregister(puVar1,piVar11 + 0x11,200);
            if ((uStack_38 & 0xff) == 0) goto LAB_8030dfb0;
            iVar2 = sme_find_table_entry(1,piVar11[3]);
            sme_event_register(uVar7,piVar11,puVar1,&iStack_48,uStack_38,200,
                               *(undefined4 *)(iVar2 + 4));
            piVar11 = (int *)*piVar11;
          } while (piVar11 != (int *)0x0);
        }
LAB_8030e148:
        puVar1[0x14] = 0x1e;
        puVar1[0x15] = 0;
        sme_schedule_callout(puVar1);
        sysmon_envsys_release(puVar1,0);
      }
      goto LAB_8030e174;
    }
  }
  else {
    if (uRam8030e4c4 < param_3) {
      if (param_3 == uRam8030e4c8) {
        param_4[6] = 0;
        iVar2 = sysmon_envsys_find_40(*param_4);
        if (iVar2 != 0) {
          uVar12 = *param_4;
          uVar9 = uVar12 - *(int *)(iVar2 + 8);
          *param_4 = uVar9;
          piVar11 = *(int **)(iVar2 + 100);
          while( true ) {
            if (piVar11 == (int *)0x0) {
              sysmon_envsys_release(iVar2,0);
              return 0x13;
            }
            uVar10 = piVar11[2];
            if (uVar9 == uVar10) break;
            piVar11 = (int *)*piVar11;
          }
          if (uVar9 < *(uint *)(iVar2 + 4)) {
            if ((*(uint *)(iVar2 + 0x10) & 0x12) == 0) {
              mutex_enter(iVar2 + 0x6c);
              (**(code **)(iVar2 + 0x18))(iVar2,piVar11);
              mutex_exit(iVar2 + 0x6c);
              uVar10 = piVar11[2];
            }
            *param_4 = uVar10;
            uVar9 = param_4[6];
            param_4[1] = piVar11[8];
            param_4[1] = piVar11[8];
            param_4[3] = piVar11[9];
            param_4[3] = piVar11[9];
            param_4[2] = piVar11[10];
            uVar10 = piVar11[10];
            param_4[4] = 0;
            param_4[2] = uVar10;
            if (piVar11[3] == 0xd) {
              param_4[7] = 9;
            }
            else {
              param_4[7] = piVar11[3];
            }
            param_4[6] = uVar9 | 3;
            if ((piVar11[5] & 1U) != 0) {
              param_4[6] = uVar9 | 0x2b;
            }
            if (piVar11[4] == 0xb) {
              param_4[6] = param_4[6] & 0xfffffffd;
              param_4[1] = 0;
            }
          }
          *param_4 = uVar12;
          sysmon_envsys_release(iVar2,0);
          return 0;
        }
      }
      else {
        if (param_3 != uRam8030e4cc) {
          return 0x19;
        }
        param_4[0xd] = 0;
        puVar1 = (undefined4 *)sysmon_envsys_find_40(*param_4);
        if (puVar1 != (undefined4 *)0x0) {
          uVar12 = *param_4;
          uVar9 = uVar12 - puVar1[2];
          *param_4 = uVar9;
          piVar11 = (int *)puVar1[0x19];
          while( true ) {
            if (piVar11 == (int *)0x0) {
              sysmon_envsys_release(puVar1,0);
              return 0x13;
            }
            if (uVar9 == piVar11[2]) break;
            piVar11 = (int *)*piVar11;
          }
          param_4[0xd] = param_4[0xd] | 1;
          arg1 = pvRam8030e4d8;
          if (uVar9 < (uint)puVar1[1]) {
            if (piVar11[3] == 0xd) {
              param_4[1] = 9;
            }
            else {
              param_4[1] = piVar11[3];
            }
            iVar2 = strncmp((void *)*puVar1,arg1,4);
            if (iVar2 == 0) {
              snprintf(param_4 + 2,0x21,uRam8030e4dc,*puVar1,piVar11 + 0x11);
            }
            else {
              strlcpy(param_4 + 2,piVar11 + 0x11,0x21);
            }
          }
          *param_4 = uVar12;
          sysmon_envsys_release(puVar1,0);
          return 0;
        }
      }
      return 0;
    }
    if (param_3 == uRam8030e4d0) {
      mutex_enter(uRam8030e4e0);
      iVar3 = *piRam8030e4e4;
      while( true ) {
        if (iVar3 == 0) {
          mutex_exit(uRam8030e4e0);
          iVar2 = prop_dictionary_copyout_ioctl(param_4,uRam8030e4d0,*puRam8030e4e8);
          return iVar2;
        }
        sysmon_envsys_acquire(iVar3,0);
        iVar2 = sme_update_dictionary(iVar3);
        if (iVar2 != 0) break;
        sysmon_envsys_release(iVar3,0);
        iVar3 = *(int *)(iVar3 + 0x58);
      }
      sysmon_envsys_release(iVar3,0);
LAB_8030e174:
      mutex_exit(uRam8030e4e0);
      return iVar2;
    }
    if (param_3 != uRam8030e4d0 + 1) {
      return 0x19;
    }
    if ((param_5 & 2) != 0) {
      iVar2 = prop_dictionary_copyin_ioctl(param_4,param_3,auStack_34);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar3 = prop_dictionary_iterator(auStack_34[0]);
      iVar2 = 0;
      if (iVar3 == 0) {
LAB_8030e330:
        prop_object_release(auStack_34[0]);
        return 0xc;
      }
      do {
        iVar4 = prop_object_iterator_next(iVar3);
        if (iVar4 == 0) {
LAB_8030e404:
          prop_object_iterator_release(iVar3);
          prop_object_release(auStack_34[0]);
          return iVar2;
        }
        uVar5 = prop_dictionary_get_keysym(auStack_34[0],iVar4);
        iVar6 = prop_object_type();
        if (iVar6 != iRam8030e518) {
LAB_8030e4ac:
          prop_object_iterator_release(iVar3);
          prop_object_release(auStack_34[0]);
          return 0x16;
        }
        uVar7 = prop_dictionary_keysym_cstring_nocopy(iVar4);
        iVar4 = sysmon_envsys_find();
        if (iVar4 == 0) goto LAB_8030e4ac;
        uVar7 = prop_dictionary_get(*puRam8030e4e8,uVar7);
        iVar8 = prop_object_type();
        if (iVar8 != iVar6) {
          sysmon_envsys_release(iVar4,0);
          goto LAB_8030e4ac;
        }
        iVar6 = prop_array_iterator(uVar5);
        if (iVar6 == 0) {
          sysmon_envsys_release(iVar4,0);
          prop_object_iterator_release(iVar3);
          goto LAB_8030e330;
        }
        while (iVar8 = prop_object_iterator_next(iVar6), iVar8 != 0) {
          iVar2 = sme_userset_dictionary();
          if (iVar2 != 0) {
            sysmon_envsys_release(iVar4,0);
            prop_object_iterator_release(iVar6);
            goto LAB_8030e404;
          }
        }
        sysmon_envsys_release(iVar4,0,uVar7);
        prop_object_iterator_release(iVar6);
      } while( true );
    }
  }
  return 1;
}
