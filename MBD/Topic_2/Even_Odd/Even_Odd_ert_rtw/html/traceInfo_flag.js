function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Even_Odd.c:55c40"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Even_Odd.c:55"]=1;
    this.lineTraceFlag["Even_Odd.c:59"]=1;
    this.lineTraceFlag["Even_Odd.c:62"]=1;
    this.lineTraceFlag["Even_Odd.c:67"]=1;
    this.lineTraceFlag["Even_Odd.c:70"]=1;
    this.lineTraceFlag["Even_Odd.h:45"]=1;
    this.lineTraceFlag["Even_Odd.h:46"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
