
void sysctl_cltm_setup(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_34 [8];

  iVar1 = sysctl_createv(param_1,0,0,0,0x200,1,uRam8010df9c,0,0);
  if (iVar1 == 0) {
    iVar1 = sysctl_createv(param_1,0,0,auStack_34,0x200,1,uRam8010dfa0,0,0);
    if (iVar1 == 0) {
      iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfa4,0,0);
      if (iVar1 == 0) {
        iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfac,0,0);
        if (iVar1 == 0) {
          iVar1 = sysctl_createv(param_1,0,0,0,0x200,5,uRam8010dfb4,0,uRam8010dfb8);
          if (iVar1 == 0) {
            iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfc0,0,uRam8010dfc4);
            if (iVar1 == 0) {
              iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfcc,0,0);
              if (iVar1 == 0) {
                iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfd4,0,uRam8010dfd8);
                if (iVar1 == 0) {
                  iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfe0,0,uRam8010dfe8);
                  if (iVar1 == 0) {
                    iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dfec,0,uRam8010dfe8);
                    if (iVar1 == 0) {
                      iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010dff4,0,uRam8010dff8);
                      if (iVar1 == 0) {
                        iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e000,0,0);
                        if (iVar1 == 0) {
                          iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e008,0,0);
                          if (iVar1 == 0) {
                            iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e010,0,0);
                            if (iVar1 == 0) {
                              iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e018,0,0);
                              if (iVar1 == 0) {
                                iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e020,0,0);
                                if (iVar1 == 0) {
                                  iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e028,0,0);
                                  if (iVar1 == 0) {
                                    iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e030,0,0);
                                    if (iVar1 == 0) {
                                      iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e038,0,0)
                                      ;
                                      if (iVar1 == 0) {
                                        iVar1 = sysctl_createv(param_1,0,0,0,0x270,2,uRam8010e040,0,
                                                               0);
                                        if (iVar1 == 0) {
                                          iVar1 = sysctl_createv(param_1,0,0,0,0x200,2,uRam8010e048,
                                                                 0,0);
                                          if (iVar1 == 0) {
                                            sysctl_createv(param_1,0,0,0,0x200,2,uRam8010e050,0,0);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
