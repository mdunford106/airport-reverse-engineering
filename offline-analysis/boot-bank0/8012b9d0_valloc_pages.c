
void valloc_pages(undefined4 param_1,int param_2,int param_3)

{
  valloc_pages_nozero();
  memset(*(undefined4 *)(param_2 + 8),0,param_3 << 0xc);
  return;
}
