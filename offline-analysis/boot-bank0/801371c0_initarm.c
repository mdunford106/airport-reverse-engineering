
void initarm(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_cr0;

  pmap_devmap_register(uRam80137300);
  bcm53xx_bootstrap(0xff000000);
  bcm53xx_cpu1_powerdown();
  bcm5301x_otp_read_dword(8,uRam80137304);
  iVar1 = set_cpufuncs();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    panic(uRam80137350);
  }
  (**(code **)(iRam80137308 + 0xc))(1);
  consinit();
  uVar2 = coproc_movefrom_Privileged_only_Thread_and_Process_ID();
  bcm53xx_cpu_softc_init(uVar2);
  bcm53xx_print_clocks();
  bcm53xx_rng_start(*puRam8013730c,*puRam80137310);
  printf(uRam80137318,*puRam80137314,puRam80137314[1],puRam80137314[2],puRam80137314[3]);
  printf(uRam8013731c);
  uVar2 = uRam80137324;
  *puRam80137320 = 0;
  printf(uVar2);
  uVar2 = coprocessor_movefromRt(0xf,1,1,in_cr0,in_cr0);
  uVar4 = coproc_movefrom_Cache_Type();
  printf(uRam80137328,uVar2,uVar4);
  printf(uRam8013732c);
  uVar3 = bcm53xx_memprobe();
  if (uRam80137330 <= uVar3 >> 0x14) {
    uVar3 = 0x10000000;
  }
  arm32_bootmem_init(iRam80137334 - iRam80137338,uVar3,iRam80137334 + -0x80000000);
  bcm53xx_dma_bootstrap(uVar3);
  arm32_kernel_vm_init(0xc0000000,uRam8013733c,0,uRam80137300,1);
  uVar2 = uRam80137348;
  *puRam80137344 = uRam80137340;
  *puRam8013734c = uVar2;
  initarm_common(0xc0000000,0x33000000,0,0);
  return;
}
