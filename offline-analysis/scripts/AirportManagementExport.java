// Offline reference-based export; never executes target code.
//@category AirPort
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
public class AirportManagementExport extends GhidraScript {
 public void run() throws Exception {
  File dir=new File(getScriptArgs()[0]); dir.mkdirs();
  DecompInterface dec=new DecompInterface();
  if(!dec.openProgram(currentProgram)) throw new IOException(dec.getLastMessage());
  try(PrintWriter out=new PrintWriter(new File(dir,"targets.txt"))) {
   out.println("Program: "+currentProgram.getName()+" language="+currentProgram.getLanguageID());
   long[] refs={0x269690L,0x269474L,0x26959cL,0x267bb0L,0x268270L,0x2912c4L,0x273328L};
   for(long ref:refs) {
    Address a=toAddr(ref); Function f=getFunctionContaining(a);
    out.println("Reference "+a+" instruction="+getInstructionAt(a));
    if(f==null) {
     Address seed=a;
     for(int back=0;back<4096 && f==null;back+=4) {
      seed=a.subtract(back);
      if(getInt(seed)==0xe1a0c00d && (getInt(seed.add(4)) & 0xffff0000)==0xe92d0000) {
       out.println("Candidate prologue seed: "+seed);
       disassemble(seed);createFunction(seed,null);f=getFunctionContaining(a);break;
      }
     }
    }
    if(f==null) {out.println("UNRESOLVED: no containing function for "+a);continue;}
    out.println("Containing function: "+f.getEntryPoint()+" "+f.getName());
    for(var r:getReferencesTo(f.getEntryPoint())) out.println("Incoming: "+r);
    DecompileResults result=dec.decompileFunction(f,120,monitor);
    out.println("Decompilation completed: "+result.decompileCompleted()+" "+result.getErrorMessage());
    if(result.decompileCompleted()) try(PrintWriter c=new PrintWriter(new File(dir,f.getEntryPoint()+".c"))) {c.print(result.getDecompiledFunction().getC());}
    try(PrintWriter asm=new PrintWriter(new File(dir,f.getEntryPoint()+".asm.txt"))) {
     var it=currentProgram.getListing().getInstructions(f.getBody(),true);
     while(it.hasNext()) {var i=it.next();asm.println(i.getAddress()+" "+i);}
    }
   }
  } finally {dec.dispose();}
 }
}
