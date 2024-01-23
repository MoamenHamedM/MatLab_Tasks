function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Average"};
	this.sidHashMap["Average"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Average:27"};
	this.sidHashMap["Average:27"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Average:7"};
	this.sidHashMap["Average:7"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/arr"] = {sid: "Average:2"};
	this.sidHashMap["Average:2"] = {rtwname: "<Root>/arr"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Average:27"};
	this.sidHashMap["Average:27"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Average:1"};
	this.sidHashMap["Average:1"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Average:8"};
	this.sidHashMap["Average:8"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Average:9"};
	this.sidHashMap["Average:9"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Average:28"};
	this.sidHashMap["Average:28"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "Average:4"};
	this.sidHashMap["Average:4"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/MATLAB Function"] = {sid: "Average:7"};
	this.sidHashMap["Average:7"] = {rtwname: "<S1>/MATLAB Function"};
	this.rtwnameHashMap["<S1>/MinMax"] = {sid: "Average:3"};
	this.sidHashMap["Average:3"] = {rtwname: "<S1>/MinMax"};
	this.rtwnameHashMap["<S1>/MinMax1"] = {sid: "Average:6"};
	this.sidHashMap["Average:6"] = {rtwname: "<S1>/MinMax1"};
	this.rtwnameHashMap["<S1>/Sum of Elements"] = {sid: "Average:5"};
	this.sidHashMap["Average:5"] = {rtwname: "<S1>/Sum of Elements"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Average:29"};
	this.sidHashMap["Average:29"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "Average:30"};
	this.sidHashMap["Average:30"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "Average:31"};
	this.sidHashMap["Average:31"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "Average:7:1"};
	this.sidHashMap["Average:7:1"] = {rtwname: "<S2>:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
