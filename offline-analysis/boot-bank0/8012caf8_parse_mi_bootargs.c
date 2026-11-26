
void parse_mi_bootargs(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_1c;

  iVar2 = get_bootconf_option(param_1,uRam8012cd14,0,&iStack_1c);
  if ((iVar2 == 0) && (iVar2 = get_bootconf_option(param_1,uRam8012cd2c,0,&iStack_1c), iVar2 == 0))
  {
    iVar2 = get_bootconf_option(param_1,uRam8012cd1c,0,&iStack_1c);
  }
  else {
    uVar1 = uRam8012cd1c;
    if (iStack_1c != 0) {
      *puRam8012cd18 = *puRam8012cd18 | 2;
    }
    iVar2 = get_bootconf_option(param_1,uVar1,0,&iStack_1c);
  }
  if ((iVar2 == 0) && (iVar2 = get_bootconf_option(param_1,uRam8012cd30,0,&iStack_1c), iVar2 == 0))
  {
    iVar2 = get_bootconf_option(param_1,uRam8012cd20,0,&iStack_1c);
  }
  else {
    uVar1 = uRam8012cd20;
    if (iStack_1c != 0) {
      *puRam8012cd18 = *puRam8012cd18 | 0x40;
    }
    iVar2 = get_bootconf_option(param_1,uVar1,0,&iStack_1c);
  }
  if ((iVar2 == 0) && (iVar2 = get_bootconf_option(param_1,uRam8012cd34,0,&iStack_1c), iVar2 == 0))
  {
    iVar2 = get_bootconf_option(param_1,uRam8012cd24,0,&iStack_1c);
  }
  else {
    uVar1 = uRam8012cd24;
    if (iStack_1c != 0) {
      *puRam8012cd18 = *puRam8012cd18 | 1;
    }
    iVar2 = get_bootconf_option(param_1,uVar1,0,&iStack_1c);
  }
  if ((iVar2 == 0) && (iVar2 = get_bootconf_option(param_1,uRam8012cd38,0,&iStack_1c), iVar2 == 0))
  {
    iVar2 = get_bootconf_option(param_1,uRam8012cd28,0,&iStack_1c);
  }
  else {
    uVar1 = uRam8012cd28;
    if (iStack_1c != 0) {
      *puRam8012cd18 = *puRam8012cd18 | 0x10000;
    }
    iVar2 = get_bootconf_option(param_1,uVar1,0,&iStack_1c);
  }
  if (((iVar2 != 0) || (iVar2 = get_bootconf_option(param_1,uRam8012cd3c,0,&iStack_1c), iVar2 != 0))
     && (iStack_1c != 0)) {
    *puRam8012cd18 = *puRam8012cd18 | 0x20000;
  }
  return;
}
