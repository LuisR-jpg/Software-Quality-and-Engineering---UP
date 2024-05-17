Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("v1:GetModels", 
		"URL=https://optimizationguide-pa.googleapis.com/v1:GetModels?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\\x04\\x08\t \\x0F\ng\\x08\\x0F\\x10\\x04 \\x0F2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x02\ng\\x08\\x10 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\\x04\\x08\\x14 \\x0F\ng\\x08\\x15 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0F2a\n"
		"Ytype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\\x04\\x08\\x19 \\x0F\n\n\\x08\\x1A\\x10\\xC1\\xFC\\xEB\\xA8\\x06 \\x0F\ng\\x08\\x1B \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\nu\\x08\\x1F \\x0F2o\nitype.googleapis.com/google.internal.chrome.optimizationguide.v1.HistoryClustersModuleRankingModelMetadata\\x12\\x02\\x08\\x02\ng\\x08  \\x0F2a\n"
		"Ytype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\nH\\x08\" \\x0F2B\n<type.googleapis.com/lens.prime.csc.VisualSearchModelMetadata\\x12\\x02\\x10\\x02\\x18\\x06*\\x06es-4192\\x02\\x08\\x06", 
		LAST);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:bbho9nDLy_7bqkZdZPB0qg00KsiH7S4zMjr2G3YFvks&cup2hreq=c8e52cb50da441daa74f51b1d9985ae26adb55a51817409a695c4d99d3732bad", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"installedby\":\"external\",\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\":\"{eb29cc37-b553-4df1-8aca-646d1ab0a649}\",\"rd\":6338},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid"
		"\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"installedby\":\"other\",\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{2c13375b-9c6f-4689-a07b-3410aa0fda78}\",\"rd\":6338},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\""
		":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.208\",\"protocol\":\"3.1\",\"requestid\":\"{13f71717-9d08-4ef7-ba7a-b136c1a2186f}\",\"sessionid\":\"{f41f2589-4569-4cb5-983e-085e0f9ab9c9}\",\"updaterversion\":\"124.0.6367.208\"}}", 
		LAST);

	web_url("downloads", 
		"URL=https://optimizationguide-pa.googleapis.com/downloads?name=1714403013&target=OPTIMIZATION_TARGET_NOTIFICATION_PERMISSION_PREDICTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloads_2", 
		"URL=https://optimizationguide-pa.googleapis.com/downloads?name=1714402993&target=OPTIMIZATION_TARGET_GEOLOCATION_PERMISSION_PREDICTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloads_3", 
		"URL=https://optimizationguide-pa.googleapis.com/downloads?name=1713798275&target=OPTIMIZATION_TARGET_CLIENT_SIDE_PHISHING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloads_4", 
		"URL=https://optimizationguide-pa.googleapis.com/downloads?name=1691042511&target=OPTIMIZATION_TARGET_NEW_TAB_PAGE_HISTORY_CLUSTERS_MODULE_RANKING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloads_5", 
		"URL=https://optimizationguide-pa.googleapis.com/downloads?name=1689043206&target=OPTIMIZATION_TARGET_VISUAL_SEARCH_CLASSIFICATION", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("affiliation:lookupByHashPrefix", 
		"URL=https://www.googleapis.com/affiliation/v1/affiliation:lookupByHashPrefix?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\\x01(\\x010\\x018\\x00@\\x01\\x10\\x10\\x18\\x80\\x80\\x80\\x80\\x80\\x80\\x80\\xC3\\xEE\\x01\\x18\\x80\\x80\\x80\\x80\\x80\\x80\\x80\\xBC\n\\x18\\x80\\x80\\x80\\x80\\x80\\x80\\x80\\x9A\\xC9\\x01\\x18\\x80\\x80\\x80\\x80\\x80\\x80\\xC0\\xBA\\xB3\\x01", 
		LAST);

	web_url("warn", 
		"URL=https://40.233.6.50:8010/warn?fblob=SE-ymIDNhdTkSUaiZNn5peqZpj-_8yzF84Ptu_ka4op58SYiAqw58-S2ngDnpbHYGH-59imJ1n81-wGDE3MMbb-WyDLtjg..&uri=/misc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://40.233.6.50/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* Entré */

	return 0;
}