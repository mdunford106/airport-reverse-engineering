
void acltmattach(void)

{
  int iVar1;

  iVar1 = kthread_create(0xffffffff,2,0,uRam8010e4fc,0,0,uRam8010e4f8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    panic(uRam8010e500,iVar1);
  }
  return;
}
