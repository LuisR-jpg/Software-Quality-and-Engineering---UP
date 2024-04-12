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
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\n\\x08\t\\x10\\x90\\xB0\\xE1\\xAF\\x06 \\x0F\ng\\x08\\x0F\\x10\\x04 \\x0F2_\nWtype.googleapis.com/google.internal.chrome.optimizationguide.v1.PageTopicsModelMetadata\\x12\\x04\\x08\\x020\\x02\ng\\x08\\x10 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x14\\x10\\xF5\\xAF\\xE1\\xAF\\x06 \\x0F\ng\\x08\\x15 \\x0F2a\nYtype.googleapis.com/"
		"google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\ng\\x08\\x17 \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n\n\\x08\\x19\\x10\\x94\\xA4\\x86\\xB0\\x06 \\x0F\n\n\\x08\\x1A\\x10\\xC1\\xFC\\xEB\\xA8\\x06 \\x0F\ng\\x08\\x1B \\x0F2a\nYtype.googleapis.com/google.internal.chrome.optimizationguide.v1.SegmentationModelMetadata\\x12\\x04J\\x02\\x10\\x03\n"
		"{\\x08\\x1F\\x10\\xCF\\x85\\xAD\\xA6\\x06 \\x0F2o\nitype.googleapis.com/google.internal.chrome.optimizationguide.v1.HistoryClustersModuleRankingModelMetadata\\x12\\x02\\x08\\x02\nN\\x08\"\\x10\\x86\\x82\\xB3\\xA5\\x06 \\x0F2B\n<type.googleapis.com/lens.prime.csc.VisualSearchModelMetadata\\x12\\x02\\x10\\x02\\x18\\x06*\\x06es-4192\\x02\\x08\\x06", 
		LAST);

	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("button", 
		"URL=https://accounts.google.com/gsi/button?theme=filled_blue&text=signin_with&type=standard&shape=pill&size=large&logo_alignment=left&client_id=984956663741-htkkerhb30eaffrqhuvj5ufm8ed44bo7.apps.googleusercontent.com&iframe_id=gsi_543669_2696&as=TOBgIhlRmr%2F9MnYxQYsskw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("fedcm.json", 
		"URL=https://accounts.google.com/gsi/fedcm.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("listaccounts", 
		"URL=https://accounts.google.com/gsi/fedcm/listaccounts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	/* Case_g01_01_signin  */

	lr_think_time(11);

	lr_start_transaction("Case_g01_01_signin");

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true&authuser=0", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(22);

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", ENDITEM, 
		LAST);

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(8);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=14:xLHERBQQ2lA0WZC3olw9OmDNGPvlWyOUO_Zxug1J8lc&cup2hreq=c0920b454788441a2d8d888411392306b9caded1926749135bce87bdd5e4698a", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{446b5347-6b55-4dca-be03-c32afab59aa5}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{a8fcedd1-5830-47a6-bed6-b903deedbf5d}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages"
		"\":{\"package\":[{\"fp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\"}]},\"ping\":{\"ping_freshness\":\"{0533acc6-9cd6-449b-9330-3ba08322e3aa}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"442\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\""
		"}]},\"ping\":{\"ping_freshness\":\"{137645c6-a2c6-4a3d-9eec-08958b0266e8}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ES419500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{bd8f7dd3-b938-4077-a100-8ed61f5c7ce0}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{b2a0f0a6-046e-4bc9-be9e-803b8f25175a}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname"
		"\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{1aba993d-50b3-45cd-a2b9-43b28d11eff7}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":["
		"{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{d4800cc9-00e2-4a26-aaf3-ed84336ea636}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{3bf5ec5d-2303-4232-928a-c028da081da7}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{d14aa32f-a247-46c7-9382-d7b701441ec1}\",\"rd\":6310},\"updatecheck\":{},\"version\":\""
		"2024.3.25.1\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c4c1d1ab-dfa4-4a15-af75-b2dc15438731}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{54be0994-b4bc-4502-a211-03d6eb0d617f}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{98c93607-a928-454f-a161-93c96e0372e7}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{744b3bd7-2744-447f-b99d-bdcc083aeeff}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f9e33fa1309505c2b29bbd72b5d5cf48375d1f329ea5efbf1abed40bd4f62fb5\"}]"
		"},\"ping\":{\"ping_freshness\":\"{c1cea0b4-de6c-42a5-b5e5-03d3b5eac2ed}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"8662\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed\"}]},\"ping\":{\"ping_freshness\":\"{02c063ef-f6de-417d-8781-028464270e75}\",\"rd\":6310},"
		"\"updatecheck\":{},\"version\":\"921\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{2362cf5e-8a07-4041-9c5c-4d25070721fb}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand"
		"\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\"}]},\"ping\":{\"ping_freshness\":\"{9fc8ed44-d323-4fb3-b95f-ce13959c45b6}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\""
		":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{e1956bcb-d420-4ecf-9ffd-eecc333a30f8}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.2224fd8b6488a5197111194ab074a6d83292959c5ea7f034f46cc51e8a280a50\"}]},\"ping\":{\"ping_freshness\":\"{828b4c08-4cda-4a18-bbb4-d469e167fe24}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\""
		"ping_freshness\":\"{42d38ce1-f15b-4d8d-8434-eeb6dd88c336}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{155ba86a-ccf6-43ba-b7cf-930afe9b5c81}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{5406ff97-a89e-482b-a415-6636dcc59086}\",\"sessionid\":\""
		"{fe39b2b1-5aad-4e72-8ff2-081bb5658f99}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"123.0.6312.107\"}}", 
		LAST);

	lr_end_transaction("Case_g01_01_signin",LR_AUTO);

	lr_think_time(41);

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", ENDITEM, 
		LAST);

	web_custom_request("upload", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":93662,\"request_elapsed_ms\":5570,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.googletagmanager.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	/* Case_g01_02_look_cellphone  */

	lr_start_transaction("Case_g01_02_look_cellphone");

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"URL=https://www.garbarino.com/api/catalog/product/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_02_look_cellphone",LR_AUTO);

	/* Case_g01_03_select_cellphone  */

	lr_think_time(32);

	lr_start_transaction("Case_g01_03_select_cellphone");

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"ca1f04f6-2e49-487f-8ba7-5a34c233e174\",\"customization\":{},\"sum\":true}", ENDITEM, 
		LAST);

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_submit_data("register3", 
		"Action=https://android.clients.google.com/c2dm/register3", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=app", "Value=com.chrome.windows", ENDITEM, 
		"Name=X-subtype", "Value=com.google.chrome.sharing.fcm", ENDITEM, 
		"Name=device", "Value=4744126039236253954", ENDITEM, 
		"Name=delete", "Value=true", ENDITEM, 
		"Name=appid", "Value=cdjtyHWrop0", ENDITEM, 
		"Name=sender", "Value=379932496580", ENDITEM, 
		"Name=scope", "Value=GCM", ENDITEM, 
		"Name=X-scope", "Value=GCM", ENDITEM, 
		"Name=gmsv", "Value=123", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_03_select_cellphone",LR_AUTO);

	/* Case_g01_04_buy_cellphone  */

	lr_start_transaction("Case_g01_04_buy_cellphone");

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/signin", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":null}", ENDITEM, 
		LAST);

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/discount", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_04_buy_cellphone",LR_AUTO);

	/* Case_g01_05_coupon  */

	lr_think_time(17);

	lr_start_transaction("Case_g01_05_coupon");

	web_submit_data("discount_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/discount", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"},\"payload\":{\"noCode\":true}}", ENDITEM, 
		LAST);

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/delivery", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"}}", ENDITEM, 
		LAST);

	web_submit_data("calculate", 
		"Action=https://www.garbarino.com/api/checkout/delivery/calculate", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/delivery", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"},\"address\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\""
		"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_05_coupon",LR_AUTO);

	/* Case_g01_06_delivery_address  */

	lr_think_time(20);

	lr_start_transaction("Case_g01_06_delivery_address");

	web_submit_data("delivery_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/delivery", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"},\"payload\":{\"clientAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\""
		"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"selection\":{\"47\":{\"cost\":0,\"currencyId\":null,\"hasCost\""
		":true,\"toAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\""
		",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"deliveryOptionId\":81,\"deliveryOptionKeyname\":\"envio_visuar\",\"sellerId\":47,\"methodKey\":\"Shipping\",\"methodName\":\"Envío a domicilio\",\"integratorKey\":\"custom\",\"integratorName\":\"Personalizado\",\"optionKey\":\"envio_visuar\",\"optionName\":\"Envio a Domicilio\",\""
		"rateKey\":\"__free__\",\"carrierName\":null,\"message\":null,\"data\":{},\"toAddressLine\":\"Manuel Castro 304, Lomas de Zamora, Provincia de Buenos Aires, 1832\",\"hasEta\":true,\"etaMessage\":\"Llega entre el Martes y el Jueves 18/04\",\"etaFromDate\":\"2024-04-17T02:41:57.056Z\",\"etaToDate\":\"2024-04-19T02:41:57.056Z\",\"sku\":null,\"checkoutGroup\":null,\"hash\":\"79052c5e2e0ed205eac030948c83369f2b891011\",\"discountPct\":0,\"discount\":0,\"total\":0}},\"receiver\":{\"firstname\":\"Juan\",\""
		"lastname\":\"Robledo\",\"idNumber\":\"11111111\"}}}", ENDITEM, 
		LAST);

	web_submit_data("payment", 
		"Action=https://www.garbarino.com/api/checkout/load-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/payment", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"}}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_end_transaction("Case_g01_06_delivery_address",LR_AUTO);

	/* Case_g01_07_payment_method  */

	lr_think_time(9);

	web_custom_request("upload-nel", 
		"URL=https://beacons3.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	lr_start_transaction("Case_g01_07_payment_method");

	web_submit_data("payment_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/payment", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a40553f07f10ec05115d346235fea9891ef7c1d3\"},\"payload\":{\"selection\":{\"paymentOptionId\":20,\"image\":{\"id\":1737091,\"url\":\"uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\",\"location\":\"cdn\",\"type\":\"image\",\"contentType\":\"image/png\",\"alt\":\"transfer\",\"data\":{\"width\":50,\"height\":50},\"fullUrl\":\"https://"
		"d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\"},\"title\":\"Transferencia Bancaria\",\"messages\":[{\"text\":\"5% de descuento pagando con transferencia bancaria\"}],\"orderMessages\":[{\"text\":\"Tenés 24 hs para transferir y enviarnos tu comprobante a cac@garbarino.com.ar\"}],\"checkoutData\":{},\"method\":{\"methodName\":\"Transferencia Bancaria\",\"methodKey\":\"WireTransfer\",\"unpaidEmail\":true,\"offlinePayment\":true}},\"input\":null}}", ENDITEM, 
		LAST);

	web_submit_data("contact", 
		"Action=https://www.garbarino.com/api/checkout/load-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/contact", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a85b526ecc9408936b54c5e5964983e0f06f7168\"}}", ENDITEM, 
		LAST);

	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/contact", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_07_payment_method",LR_AUTO);

	/* Case_g01_08_billing_information  */

	lr_think_time(29);

	lr_start_transaction("Case_g01_08_billing_information");

	web_submit_data("contact_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/contact", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a85b526ecc9408936b54c5e5964983e0f06f7168\"},\"payload\":{\"buyer\":{\"idNumber\":\"11111111\",\"firstname\":\"Juan\",\"lastname\":\"Robledo\",\"phoneCountryId\":9,\"phoneAreaCode\":\"11\",\"phoneNumber\":\"42434534\"},\"invoice\":{\"id\":4070,\"business\":false,\"personFirstname\":\"Juan\",\"personLastname\":\"Robledo\",\"personIdNumber\":\""
		"11111111\",\"businessName\":null,\"businessIdNumber\":null,\"invoiceType\":null,\"userId\":47128},\"invoiceAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos "
		"Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}}", ENDITEM, 
		LAST);

	web_submit_data("confirm", 
		"Action=https://www.garbarino.com/api/checkout/load-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/confirm", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a85b526ecc9408936b54c5e5964983e0f06f7168\"}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_08_billing_information",LR_AUTO);

	/* Case_g01_09_confirm_purchase  */

	lr_think_time(23);

	lr_start_transaction("Case_g01_09_confirm_purchase");

	web_submit_data("confirm_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/confirm", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"508641eab93e1d3ff3f3a5385d85b9e3ae8257c2\",\"checker\":{\"items\":\"53ae0935749b138c360f03e9f5d0c8469ca99028\",\"total\":\"a85b526ecc9408936b54c5e5964983e0f06f7168\"},\"payload\":{}}", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_custom_request("upload_2", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":304465,\"request_elapsed_ms\":1526,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":302027,\"request_elapsed_ms\""
		":3469,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":295989,\"request_elapsed_ms\":135,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":286875,\"request_elapsed_ms\":381,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":262341,\"request_elapsed_ms\":1127,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":187142,\"request_elapsed_ms\":1145,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\""
		",\"request_age_ms\":147769,\"request_elapsed_ms\":1174,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":2927,\"request_elapsed_ms\":1134,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_url("04d19624-0988-45b5-a507-ead53cac8b1d", 
		"URL=https://www.garbarino.com/user/orders/04d19624-0988-45b5-a507-ead53cac8b1d", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/508641eab93e1d3ff3f3a5385d85b9e3ae8257c2/confirm", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/04d19624-0988-45b5-a507-ead53cac8b1d", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("04d19624-0988-45b5-a507-ead53cac8b1d_2", 
		"URL=https://www.garbarino.com/api/user/order/04d19624-0988-45b5-a507-ead53cac8b1d", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/04d19624-0988-45b5-a507-ead53cac8b1d", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4118", 
		"URL=https://www.garbarino.com/api/user/order/04d19624-0988-45b5-a507-ead53cac8b1d/refresh-delivery-eta/4118", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/04d19624-0988-45b5-a507-ead53cac8b1d", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_09_confirm_purchase",LR_AUTO);

	/* Case_g01_10_logout */

	lr_think_time(40);

	lr_start_transaction("Case_g01_10_logout");

	web_url("phone-countries_2", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("logout", 
		"URL=https://www.garbarino.com/api/user/logout", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("www.garbarino.com_2", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_10_logout",LR_AUTO);

	return 0;
}