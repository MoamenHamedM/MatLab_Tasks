function CodeDefine() { 
this.def = new Array();
this.def["ert_main.c:Bitwise_M_"] = {file: "ert_main_c.html",line:23,type:"var"};
this.def["ert_main.c:Bitwise_MPtr"] = {file: "ert_main_c.html",line:24,type:"var"};
this.def["ert_main.c:Bitwise_U_In1"] = {file: "ert_main_c.html",line:27,type:"var"};
this.def["ert_main.c:Bitwise_U_In2"] = {file: "ert_main_c.html",line:30,type:"var"};
this.def["ert_main.c:Bitwise_Y_AND_Out"] = {file: "ert_main_c.html",line:33,type:"var"};
this.def["ert_main.c:Bitwise_Y_OR_Out"] = {file: "ert_main_c.html",line:36,type:"var"};
this.def["ert_main.c:Bitwise_Y_XOR_Out"] = {file: "ert_main_c.html",line:39,type:"var"};
this.def["ert_main.c:Bitwise_Y_XNOR_Out"] = {file: "ert_main_c.html",line:42,type:"var"};
this.def["ert_main.c:Bitwise_Y_Num1_NOT"] = {file: "ert_main_c.html",line:45,type:"var"};
this.def["ert_main.c:Bitwise_Y_Num2_NOT"] = {file: "ert_main_c.html",line:48,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:62,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:101,type:"fcn"};
this.def["Bitwise_step"] = {file: "Bitwise_c.html",line:22,type:"fcn"};
this.def["Bitwise_initialize"] = {file: "Bitwise_c.html",line:73,type:"fcn"};
this.def["Bitwise_terminate"] = {file: "Bitwise_c.html",line:98,type:"fcn"};
this.def["RT_MODEL_Bitwise_T"] = {file: "Bitwise_types_h.html",line:24,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Bitwise_c.html"] = "../Bitwise.c";
	this.html2Root["Bitwise_c.html"] = "Bitwise_c.html";
	this.html2SrcPath["Bitwise_h.html"] = "../Bitwise.h";
	this.html2Root["Bitwise_h.html"] = "Bitwise_h.html";
	this.html2SrcPath["Bitwise_private_h.html"] = "../Bitwise_private.h";
	this.html2Root["Bitwise_private_h.html"] = "Bitwise_private_h.html";
	this.html2SrcPath["Bitwise_types_h.html"] = "../Bitwise_types.h";
	this.html2Root["Bitwise_types_h.html"] = "Bitwise_types_h.html";
	this.html2SrcPath["rt_defines_h.html"] = "../rt_defines.h";
	this.html2Root["rt_defines_h.html"] = "rt_defines_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Bitwise_c.html","Bitwise_h.html","Bitwise_private_h.html","Bitwise_types_h.html","rt_defines_h.html","rtwtypes_h.html"];
