function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial_WhileLoop"};
	this.sidHashMap["Factorial_WhileLoop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial_WhileLoop:1"};
	this.sidHashMap["Factorial_WhileLoop:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Factorial_WhileLoop:21"};
	this.sidHashMap["Factorial_WhileLoop:21"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Factorial_WhileLoop:11"};
	this.sidHashMap["Factorial_WhileLoop:11"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Factorial_WhileLoop:16"};
	this.sidHashMap["Factorial_WhileLoop:16"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Factorial_WhileLoop:7"};
	this.sidHashMap["Factorial_WhileLoop:7"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "Factorial_WhileLoop:17"};
	this.sidHashMap["Factorial_WhileLoop:17"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/While Iterator Subsystem"] = {sid: "Factorial_WhileLoop:1"};
	this.sidHashMap["Factorial_WhileLoop:1"] = {rtwname: "<Root>/While Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Factorial_WhileLoop:20"};
	this.sidHashMap["Factorial_WhileLoop:20"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Factorial_WhileLoop:14"};
	this.sidHashMap["Factorial_WhileLoop:14"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "Factorial_WhileLoop:3"};
	this.sidHashMap["Factorial_WhileLoop:3"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "Factorial_WhileLoop:18"};
	this.sidHashMap["Factorial_WhileLoop:18"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "Factorial_WhileLoop:12"};
	this.sidHashMap["Factorial_WhileLoop:12"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "Factorial_WhileLoop:19"};
	this.sidHashMap["Factorial_WhileLoop:19"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "Factorial_WhileLoop:4"};
	this.sidHashMap["Factorial_WhileLoop:4"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "Factorial_WhileLoop:5"};
	this.sidHashMap["Factorial_WhileLoop:5"] = {rtwname: "<S1>/u"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
