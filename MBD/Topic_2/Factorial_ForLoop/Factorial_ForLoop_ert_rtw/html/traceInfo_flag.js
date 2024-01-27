function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial_ForLoop.c:35c31"]=1;
    this.traceFlag["Factorial_ForLoop.c:40c30"]=1;
    this.traceFlag["Factorial_ForLoop.c:40c45"]=1;
    this.traceFlag["Factorial_ForLoop.c:45c72"]=1;
    this.traceFlag["Factorial_ForLoop.c:50c46"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial_ForLoop.c:34"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:35"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:36"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:40"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:45"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:50"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:77"]=1;
    this.lineTraceFlag["Factorial_ForLoop.h:40"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
