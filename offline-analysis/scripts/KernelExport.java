//@category AirPort
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;
public class KernelExport extends GhidraScript {
 private void signature(String name,DataType ret,DataType... types) throws Exception {
  for(var sym:currentProgram.getSymbolTable().getGlobalSymbols(name)) {
   Function f=getFunctionAt(sym.getAddress());if(f==null)continue;
   f.setReturnType(ret,SourceType.USER_DEFINED);
   ArrayList<Parameter> ps=new ArrayList<>();
   for(int i=0;i<types.length;i++)ps.add(new ParameterImpl("arg"+i,types[i],currentProgram));
   f.replaceParameters(ps,Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.USER_DEFINED);
  }
 }
 public void run() throws Exception {
  String[] args=getScriptArgs();File dir=new File(args[1]);dir.mkdirs();
  if(args.length>2) {
   int seeded=0,existing=0,conflicts=0;
   for(String line:Files.readAllLines(Paths.get(args[2]))) {
    String[] cols=line.split("\\t");Address a=toAddr(Long.parseUnsignedLong(cols[0],16));int size=Integer.parseInt(cols[1]);
    if(getFunctionAt(a)!=null){
     try{getFunctionAt(a).setBody(new AddressSet(a,a.add(size-1)));existing++;}
     catch(Exception ex){conflicts++;println("Function body conflict "+cols[2]+" "+a+": "+ex.getMessage());}
     continue;
    }
    try {currentProgram.getFunctionManager().createFunction(cols[2],a,new AddressSet(a,a.add(size-1)),SourceType.IMPORTED);seeded++;}
    catch(Exception ex){conflicts++;println("Function seed conflict "+cols[2]+" "+a+": "+ex.getMessage());}
   }
   println("Function seed summary: new="+seeded+" existing="+existing+" conflicts="+conflicts);
  }
  for(var sym:currentProgram.getSymbolTable().getGlobalSymbols("panic")) {
   Function pf=getFunctionAt(sym.getAddress());if(pf!=null)pf.setNoReturn(true);
  }
  List<Function> fs=new ArrayList<>();
  for(String line:Files.readAllLines(Paths.get(args[0]))) {
   String[] cols=line.split("\\t");Address a=toAddr(Long.parseUnsignedLong(cols[0],16));int size=Integer.parseInt(cols[1]);
   AddressSet body=new AddressSet(a,a.add(size-1));
   currentProgram.getListing().clearCodeUnits(a,a.add(size-1),false);
   DisassembleCommand dc=new DisassembleCommand(a,body,true);dc.enableCodeAnalysis(false);dc.applyTo(currentProgram,monitor);
   Function f=getFunctionAt(a);
   if(f==null) f=currentProgram.getFunctionManager().createFunction(cols[2],a,new AddressSet(a,a.add(size-1)),SourceType.IMPORTED);
   f.setBody(body);
   var tailInstructions=currentProgram.getListing().getInstructions(body,true);
   while(tailInstructions.hasNext()) {
    var ins=tailInstructions.next();
    if(ins.getMnemonicString().equals("b")) {
     Address[] flows=ins.getFlows();
     if(flows.length==1 && !body.contains(flows[0]) && getFunctionAt(flows[0])!=null) {
      ins.setFlowOverride(FlowOverride.CALL_RETURN);
      println("Tail call override "+ins.getAddress()+" -> "+flows[0]);
     }
    }
   }
   fs.add(f);
  }
  for(Function f:fs) {
   var it=currentProgram.getListing().getInstructions(f.getBody(),true);
   while(it.hasNext()) {
    var ins=it.next();
    for(var ref:ins.getReferencesFrom()) {
     Address dest=ref.getToAddress();
     if(ref.getReferenceType().isData() && dest.isMemoryAddress() && currentProgram.getMemory().contains(dest) && getInstructionAt(dest)==null && (getDataAt(dest)==null || !getDataAt(dest).isDefined())) {
      try {createDWord(dest);} catch(Exception ignored) {}
     }
    }
   }
  }
  DataType u=UnsignedIntegerDataType.dataType, si=IntegerDataType.dataType;
  DataType ptr=new PointerDataType(VoidDataType.dataType), ull=UnsignedLongLongDataType.dataType;
  signature("pwm_ns_to_ticks",u,ptr,u);signature("pwm_ticks_to_ns",u,ptr,u);
  signature("iproc_pwmc_config",si,ptr,ptr);
  signature("Force_Fan_Duty_Cycle",si,si);signature("Force_Fan_Init",si,si);signature("Set_Fan_Duty_Cycle",si,si);
  signature("GPIO_read",ull);signature("GPIO_write",VoidDataType.dataType,ull,ull);
  signature("GPIO_map_output_pin",si,u);signature("GPIO_map_input_pin",si,u);
  signature("__udivdi3",ull,ull,ull);signature("__divdi3",LongLongDataType.dataType,LongLongDataType.dataType,LongLongDataType.dataType);
  signature("strcmp",si,ptr,ptr);signature("strncmp",si,ptr,ptr,u);
  signature("memcpy",ptr,ptr,ptr,u);signature("strlcpy",u,ptr,ptr,u);
  DecompInterface d=new DecompInterface();if(!d.openProgram(currentProgram))throw new IOException(d.getLastMessage());
  try(PrintWriter report=new PrintWriter(new File(dir,"manifest.txt"))) {
   report.println(currentProgram.getName()+" "+currentProgram.getLanguageID());
   for(Function f:fs) {
    if(monitor.isCancelled())throw new IOException("Cancelled");
    String name=f.getEntryPoint()+"_"+f.getName().replaceAll("[^A-Za-z0-9_]","_");
    DecompileResults r=d.decompileFunction(f,60,monitor);
    report.println(name+" completed="+r.decompileCompleted()+" "+r.getErrorMessage());report.flush();
    if(r.decompileCompleted())try(PrintWriter o=new PrintWriter(new File(dir,name+".c"))){o.print(r.getDecompiledFunction().getC());}
    try(PrintWriter o=new PrintWriter(new File(dir,name+".asm.txt"))) {
     var it=currentProgram.getListing().getInstructions(f.getBody(),true);
     while(it.hasNext()){var i=it.next();o.println(i.getAddress()+" "+i);}
    }
   }
  }finally{d.dispose();}
 }
}
