
/* WARNING: Removing unreachable block (ram,0x0079269c) */
/* WARNING: Removing unreachable block (ram,0x007926a4) */
/* WARNING: Removing unreachable block (ram,0x007926a8) */
/* WARNING: Removing unreachable block (ram,0x007926b0) */
/* WARNING: Removing unreachable block (ram,0x007926b4) */
/* WARNING: Removing unreachable block (ram,0x007926b8) */

ulonglong FUN_007922c4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 == 0) {
    FUN_007926c0(8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (param_2 == 1) {
    return (ulonglong)param_1;
  }
  uVar3 = param_2 & 0x80000000;
  if ((int)uVar3 < 0) {
    param_2 = -param_2;
  }
  uVar1 = param_1 & 0x80000000;
  if ((int)uVar1 < 0) {
    param_1 = -param_1;
  }
  uVar2 = 0;
  if ((int)param_1 < 0) {
    if (-1 < (int)(param_1 & param_2)) {
      if (-1 < (int)(param_1 & param_2 << 1)) {
        if (-1 < (int)(param_1 & param_2 << 2)) {
          if (-1 < (int)(param_1 & param_2 << 3)) {
            if (-1 < (int)(param_1 & param_2 << 4)) {
              if (-1 < (int)(param_1 & param_2 << 5)) {
                if (-1 < (int)(param_1 & param_2 << 6)) {
                  if (-1 < (int)(param_1 & param_2 << 7)) {
                    if (-1 < (int)(param_1 & param_2 << 8)) {
                      if (-1 < (int)(param_1 & param_2 << 9)) {
                        if (-1 < (int)(param_1 & param_2 << 10)) {
                          if (-1 < (int)(param_1 & param_2 << 0xb)) {
                            if (-1 < (int)(param_1 & param_2 << 0xc)) {
                              if (-1 < (int)(param_1 & param_2 << 0xd)) {
                                if (-1 < (int)(param_1 & param_2 << 0xe)) {
                                  if (-1 < (int)(param_1 & param_2 << 0xf)) {
                                    if (-1 < (int)(param_1 & param_2 << 0x10)) {
                                      if (-1 < (int)(param_1 & param_2 << 0x11)) {
                                        if (-1 < (int)(param_1 & param_2 << 0x12)) {
                                          if (-1 < (int)(param_1 & param_2 << 0x13)) {
                                            if (-1 < (int)(param_1 & param_2 << 0x14)) {
                                              if (-1 < (int)(param_1 & param_2 << 0x15)) {
                                                if (-1 < (int)(param_1 & param_2 << 0x16)) {
                                                  if (-1 < (int)(param_1 & param_2 << 0x17)) {
                                                    if (-1 < (int)(param_1 & param_2 << 0x18)) {
                                                      if (-1 < (int)(param_1 & param_2 << 0x19)) {
                                                        if (-1 < (int)(param_1 & param_2 << 0x1a)) {
                                                          if (-1 < (int)(param_1 & param_2 << 0x1b))
                                                          {
                                                            if (-1 < (int)(param_1 & param_2 << 0x1c
                                                                          )) {
                                                              if (-1 < (int)(param_1 &
                                                                            param_2 << 0x1d)) {
                                                                if (-1 < (int)(param_1 &
                                                                              param_2 << 0x1e)) {
LAB_007924f8:
                                                                  if (param_2 << 0x1f <= param_1) {
                                                                    param_1 = param_1 + param_2 *
                                                  -0x80000000;
                                                  uVar2 = 0x80000000;
                                                  }
                                                  }
                                                  if (param_2 << 0x1e <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x40000000;
                                                    uVar2 = uVar2 + 0x40000000;
                                                  }
                                                  }
LAB_00792510:
                                                  if (param_2 << 0x1d <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x20000000;
                                                    uVar2 = uVar2 + 0x20000000;
                                                  }
                                                  }
LAB_0079251c:
                                                  if (param_2 << 0x1c <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x10000000;
                                                    uVar2 = uVar2 + 0x10000000;
                                                  }
                                                  }
LAB_00792528:
                                                  if (param_2 << 0x1b <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x8000000;
                                                    uVar2 = uVar2 + 0x8000000;
                                                  }
                                                  }
LAB_00792534:
                                                  if (param_2 << 0x1a <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x4000000;
                                                    uVar2 = uVar2 + 0x4000000;
                                                  }
                                                  }
LAB_00792540:
                                                  if (param_2 << 0x19 <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x2000000;
                                                    uVar2 = uVar2 + 0x2000000;
                                                  }
                                                  }
LAB_0079254c:
                                                  if (param_2 << 0x18 <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x1000000;
                                                    uVar2 = uVar2 + 0x1000000;
                                                  }
                                                  }
LAB_00792558:
                                                  if (param_2 << 0x17 <= param_1) {
                                                    param_1 = param_1 + param_2 * -0x800000;
                                                    uVar2 = uVar2 + 0x800000;
                                                  }
                                                }
LAB_00792564:
                                                if (param_2 << 0x16 <= param_1) {
                                                  param_1 = param_1 + param_2 * -0x400000;
                                                  uVar2 = uVar2 + 0x400000;
                                                }
                                              }
LAB_00792570:
                                              if (param_2 << 0x15 <= param_1) {
                                                param_1 = param_1 + param_2 * -0x200000;
                                                uVar2 = uVar2 + 0x200000;
                                              }
                                            }
LAB_0079257c:
                                            if (param_2 << 0x14 <= param_1) {
                                              param_1 = param_1 + param_2 * -0x100000;
                                              uVar2 = uVar2 + 0x100000;
                                            }
                                          }
LAB_00792588:
                                          if (param_2 << 0x13 <= param_1) {
                                            param_1 = param_1 + param_2 * -0x80000;
                                            uVar2 = uVar2 + 0x80000;
                                          }
                                        }
LAB_00792594:
                                        if (param_2 << 0x12 <= param_1) {
                                          param_1 = param_1 + param_2 * -0x40000;
                                          uVar2 = uVar2 + 0x40000;
                                        }
                                      }
LAB_007925a0:
                                      if (param_2 << 0x11 <= param_1) {
                                        param_1 = param_1 + param_2 * -0x20000;
                                        uVar2 = uVar2 + 0x20000;
                                      }
                                    }
LAB_007925ac:
                                    if (param_2 << 0x10 <= param_1) {
                                      param_1 = param_1 + param_2 * -0x10000;
                                      uVar2 = uVar2 + 0x10000;
                                    }
                                  }
LAB_007925b8:
                                  if (param_2 << 0xf <= param_1) {
                                    param_1 = param_1 + param_2 * -0x8000;
                                    uVar2 = uVar2 + 0x8000;
                                  }
                                }
LAB_007925c4:
                                if (param_2 << 0xe <= param_1) {
                                  param_1 = param_1 + param_2 * -0x4000;
                                  uVar2 = uVar2 + 0x4000;
                                }
                              }
LAB_007925d0:
                              if (param_2 << 0xd <= param_1) {
                                param_1 = param_1 + param_2 * -0x2000;
                                uVar2 = uVar2 + 0x2000;
                              }
                            }
LAB_007925dc:
                            if (param_2 << 0xc <= param_1) {
                              param_1 = param_1 + param_2 * -0x1000;
                              uVar2 = uVar2 + 0x1000;
                            }
                          }
LAB_007925e8:
                          if (param_2 << 0xb <= param_1) {
                            param_1 = param_1 + param_2 * -0x800;
                            uVar2 = uVar2 + 0x800;
                          }
                        }
LAB_007925f4:
                        if (param_2 << 10 <= param_1) {
                          param_1 = param_1 + param_2 * -0x400;
                          uVar2 = uVar2 + 0x400;
                        }
                      }
LAB_00792600:
                      if (param_2 << 9 <= param_1) {
                        param_1 = param_1 + param_2 * -0x200;
                        uVar2 = uVar2 + 0x200;
                      }
                    }
LAB_0079260c:
                    if (param_2 << 8 <= param_1) {
                      param_1 = param_1 + param_2 * -0x100;
                      uVar2 = uVar2 + 0x100;
                    }
                  }
LAB_00792618:
                  if (param_2 << 7 <= param_1) {
                    param_1 = param_1 + param_2 * -0x80;
                    uVar2 = uVar2 + 0x80;
                  }
                }
LAB_00792624:
                if (param_2 << 6 <= param_1) {
                  param_1 = param_1 + param_2 * -0x40;
                  uVar2 = uVar2 + 0x40;
                }
              }
LAB_00792630:
              if (param_2 << 5 <= param_1) {
                param_1 = param_1 + param_2 * -0x20;
                uVar2 = uVar2 + 0x20;
              }
            }
LAB_0079263c:
            if (param_2 << 4 <= param_1) {
              param_1 = param_1 + param_2 * -0x10;
              uVar2 = uVar2 + 0x10;
            }
          }
LAB_00792648:
          if (param_2 << 3 <= param_1) {
            param_1 = param_1 + param_2 * -8;
            uVar2 = uVar2 + 8;
          }
        }
LAB_00792654:
        if (param_2 << 2 <= param_1) {
          param_1 = param_1 + param_2 * -4;
          uVar2 = uVar2 + 4;
        }
      }
LAB_00792660:
      if (param_2 << 1 <= param_1) {
        param_1 = param_1 + param_2 * -2;
        uVar2 = uVar2 + 2;
      }
    }
  }
  else {
    if (param_1 < param_2) goto LAB_00792678;
    if (param_2 << 1 <= param_1) {
      if (param_2 << 2 <= param_1) {
        if (param_2 << 3 <= param_1) {
          if (param_2 << 4 <= param_1) {
            if (param_2 << 5 <= param_1) {
              if (param_2 << 6 <= param_1) {
                if (param_2 << 7 <= param_1) {
                  if (param_2 << 8 <= param_1) {
                    if (param_2 << 9 <= param_1) {
                      if (param_2 << 10 <= param_1) {
                        if (param_2 << 0xb <= param_1) {
                          if (param_2 << 0xc <= param_1) {
                            if (param_2 << 0xd <= param_1) {
                              if (param_2 << 0xe <= param_1) {
                                if (param_2 << 0xf <= param_1) {
                                  if (param_2 << 0x10 <= param_1) {
                                    if (param_2 << 0x11 <= param_1) {
                                      if (param_2 << 0x12 <= param_1) {
                                        if (param_2 << 0x13 <= param_1) {
                                          if (param_2 << 0x14 <= param_1) {
                                            if (param_2 << 0x15 <= param_1) {
                                              if (param_2 << 0x16 <= param_1) {
                                                if (param_2 << 0x17 <= param_1) {
                                                  if (param_2 << 0x18 <= param_1) {
                                                    if (param_2 << 0x19 <= param_1) {
                                                      if (param_2 << 0x1a <= param_1) {
                                                        if (param_2 << 0x1b <= param_1) {
                                                          if (param_2 << 0x1c <= param_1) {
                                                            if (param_2 << 0x1d <= param_1) {
                                                              if (param_2 << 0x1e <= param_1)
                                                              goto LAB_007924f8;
                                                              goto LAB_00792510;
                                                            }
                                                            goto LAB_0079251c;
                                                          }
                                                          goto LAB_00792528;
                                                        }
                                                        goto LAB_00792534;
                                                      }
                                                      goto LAB_00792540;
                                                    }
                                                    goto LAB_0079254c;
                                                  }
                                                  goto LAB_00792558;
                                                }
                                                goto LAB_00792564;
                                              }
                                              goto LAB_00792570;
                                            }
                                            goto LAB_0079257c;
                                          }
                                          goto LAB_00792588;
                                        }
                                        goto LAB_00792594;
                                      }
                                      goto LAB_007925a0;
                                    }
                                    goto LAB_007925ac;
                                  }
                                  goto LAB_007925b8;
                                }
                                goto LAB_007925c4;
                              }
                              goto LAB_007925d0;
                            }
                            goto LAB_007925dc;
                          }
                          goto LAB_007925e8;
                        }
                        goto LAB_007925f4;
                      }
                      goto LAB_00792600;
                    }
                    goto LAB_0079260c;
                  }
                  goto LAB_00792618;
                }
                goto LAB_00792624;
              }
              goto LAB_00792630;
            }
            goto LAB_0079263c;
          }
          goto LAB_00792648;
        }
        goto LAB_00792654;
      }
      goto LAB_00792660;
    }
  }
  if (param_2 <= param_1) {
    param_1 = param_1 - param_2;
    uVar2 = uVar2 + 1;
  }
LAB_00792678:
  if (uVar1 != 0) {
    param_1 = -param_1;
  }
  if (uVar3 != 0) {
    uVar2 = -(uVar2 & 0x7fffffff);
  }
  return CONCAT44(param_1,uVar2);
}
