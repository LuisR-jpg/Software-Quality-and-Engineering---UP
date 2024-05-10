Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("get_info", 
		"URL=https://bot.webpushr.com/prompt/get_info", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\",\"browser\":\"Chrome\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("session", 
		"URL=https://analytics.webpushr.com/impression/session", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"status\":\"session_new_to_push\",\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\"}", 
		LAST);

	web_custom_request("prompt", 
		"URL=https://analytics.webpushr.com/impression/prompt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"status\":\"custom_prompt\",\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\"}", 
		LAST);

	/* Hola */

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:xLpfLKTy8723MT8LygU0s8urQbfUxTSwKHxaR-T8Bv0&cup2hreq=39bc1a7078356937c8587601301b779c0a2799c309184baefbbd2108e6214da4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"installedby\":\"external\",\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\":\"{108862ca-f6b8-4e3e-931b-6239feee3f2e}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid"
		"\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"installedby\":\"other\",\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{1b5a800a-d2a8-43bf-a3ad-7a6463b1aa4c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\""
		":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{72ac18d1-d98f-4415-a98d-c14c301fee71}\",\"sessionid\":\"{ba4f935a-dbd7-4c4c-a007-dd176f3df52b}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(5);

	web_custom_request("prompt_2", 
		"URL=https://analytics.webpushr.com/impression/prompt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"status\":\"Dismiss\",\"site_id\":\"BBlgrWPYiRhXLIFaE6w3-ZsHkB6_UWrsUOngFopOURf1z0DOwITornwz-DO_UpqaOB5_7nnMdmLK3DlIwxMzoBk\"}", 
		LAST);

	lr_think_time(11);

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t7.inf", 
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
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	/* Inici� sesion */

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:nxNk8nZ5I_xvPNTnr7_vLR9MBxkIoZipm5Emm7s7Jq8&cup2hreq=1b9871fac938733169c5a6f504887bb88b96d0ef2f65621f36e03372a30c8125", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"accept_locale\":\"ES419500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{e492dddc-bb03-45cd-a040-67f0b8d4e9c7}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":"
		"\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{a7a0c4ad-384a-442a-8824-9b5df4271b80}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\""
		"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{458aebff-fd97-4d51-aa4c-bf5095d27804}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{e14a0a57-68d1-45bb-ab79-569149336bcd}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\""
		"ping_freshness\":\"{aa9d1492-d018-4a0e-ac90-4c61da323a4b}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{77ce7b17-1c33-4c4c-b4ce-8f714ecebbb2}\",\"rd\":6310},\"updatecheck\":"
		"{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{7fc9e8e1-b065-4237-b5c4-ca0abda08f58}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{1ca2a989-a385-4a7c-99b5-3c4e0b3301a9}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\""
		"packages\":{\"package\":[{\"fp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\"}]},\"ping\":{\"ping_freshness\":\"{78a2b7dd-e9e7-47db-b106-671cec3ea2e6}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{41e5c123-23e3-4af5-8bf9-a98430e7b5de}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{9039c698-3322-446f-bf37-e9e57d950dad}\",\"rd\":6310},\"updatecheck\":{},\"version\":\""
		"1.0.7.1652906823\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\"}]},\"ping\":{\"ping_freshness\":\"{05c1726a-dc63-4c1e-8f41-51ae0c1d333c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"442\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\""
		":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{10dd3c79-eb24-4b83-9aed-e71e776da394}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{2ae3c98d-5091-4ab4-96aa-c4daec0e40e5}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{fc52deb3-2b85-4d21-8180-b8d019191d5e}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed\"}]},\""
		"ping\":{\"ping_freshness\":\"{081a07a0-1b42-4643-9b6f-d799c626be3c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"921\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{6cbf25d8-cf25-40e9-b118-9aca477a6f29}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.e2bd8b511e50117f23382fd6d3ffed78acc500ea28df373bd0e01e24dc286a73\"}]},\"ping\":{\"ping_freshness\":\"{8b3cdf36-a529-41a5-9f52-0e84957ca032}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"8663\"},{\"appid\":\""
		"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{3ac35881-a58d-4522-9b9d-681c8ba281f1}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.2224fd8b6488a5197111194ab074a6d83292959c5ea7f034f46cc51e8a280a50\"}]},\"ping\":{\"ping_freshness\":\"{058ffbdf-3b07-458f-9d51-53994118f328}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\""
		"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{b1a8b1e2-0f3b-4ce5-9aa5-9a20696d8283}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{d6c27585-bb89-40d9-91e7-efb35e8a6496}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{7eac7b3c-95cc-4474-945c-866f2711a360}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"126.0.6462.0\"},\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", ENDITEM, 
		LAST);

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4070,\"downloaded\":2381,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.5.3.1\",\"previousversion\":\"2024.3.25.1\",\"total\":2381,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo/1.153e9301be7e862a33e2cab936a0a97e2f8bdf2dae1be516d6fe8a5f184ce028/1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3/e2e2d166999df75331f033e8123c3fa5065d1edeb823a89acf7769f6c242c55b.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.153e9301be7e862a33e2cab936a0a97e2f8bdf2dae1be516d6fe8a5f184ce028\",\"nextversion\":\"2024.5.3.1\",\"previousfp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\",\""
		"previousversion\":\"2024.3.25.1\"}],\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.153e9301be7e862a33e2cab936a0a97e2f8bdf2dae1be516d6fe8a5f184ce028\"}]},\"version\":\"2024.5.3.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{7cf10da2-03ea-4e8d-ba27-95c38e556e21}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	/* Hola */

	web_custom_request("json_4", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"event\":[{\"download_time_ms\":4039,\"downloaded\":4733,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.5.8.0\",\"previousversion\":\"2024.4.10.0\",\"total\":4733,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"niikhdgajlphfehepabhhblakbdgeefj/1.a00392bbff9e30e7e7ef319418d8927179dc8aa2a8592fcdd11dec0c74ce1141/1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b/002f3b35f7bb12aa9aaf9c916180e81379e343d21ed34cefc7c985f0253843ad.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.a00392bbff9e30e7e7ef319418d8927179dc8aa2a8592fcdd11dec0c74ce1141\",\"nextversion\":\"2024.5.8.0\",\"previousfp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\",\""
		"previousversion\":\"2024.4.10.0\"}],\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a00392bbff9e30e7e7ef319418d8927179dc8aa2a8592fcdd11dec0c74ce1141\"}]},\"version\":\"2024.5.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{5b1992ef-16e0-4918-9034-7c19499a3114}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	web_url("3d2009af-fe4f-4fa0-815e-a44b2a261912", 
		"URL=https://www.garbarino.com/api/catalog/product/3d2009af-fe4f-4fa0-815e-a44b2a261912", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":true,\"protocol\":\"\",\"request_age_ms\":63197,\"request_elapsed_ms\":1537,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://www.googletagmanager.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_2", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":true,\"protocol\":\"\",\"request_age_ms\":63613,\"request_elapsed_ms\":747,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":966,\"request_elapsed_ms\":250,\"sample_rate\":1.0,"
		"\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("json_5", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4031,\"downloaded\":2437,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"446\",\"previousversion\":\"442\",\"total\":2437,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"lmelglejhemejginpboagddgdfbepgmp/1.8bd6caa47fcc9572aec93c8cb10671c235e44b135a5f289c2fe4dbc870ce9716/1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351/0553cf8f592e8e5af067bf7d806cd7be92f3c9077a1f7668b157308f679ce0ae.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.8bd6caa47fcc9572aec93c8cb10671c235e44b135a5f289c2fe4dbc870ce9716\",\"nextversion\":\"446\",\"previousfp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\",\"previousversion"
		"\":\"442\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.8bd6caa47fcc9572aec93c8cb10671c235e44b135a5f289c2fe4dbc870ce9716\"}]},\"version\":\"446\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\""
		"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{00c22761-0e48-471c-9653-36b13adbcaa6}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	/* Hola */

	web_custom_request("json_6", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2c99@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"event\":[{\"download_time_ms\":4023,\"downloaded\":6081,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2023.11.29.1201\",\"previousversion\":\"2023.11.27.1202\",\"total\":6081,\"url\":\"http://edgedl.me.gvt1.com/edgedl"
		"/diffgen-puffin/ggkkehgbnfjpeggfpleeakpidbkibbmn/1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941/1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3/0e81ca17ff2d8fc4645b4dd59216b1ad6413403ef03bae5dc24f1bbb977f7a5a.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\",\"nextversion\":\"2023.11.29.1201\",\"previousfp\":\""
		"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\",\"previousversion\":\"2023.11.27.1202\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.905f83845e25579fd4c6ae4bdc81a2740a216023f856918045ced4508329c941\"}]},\"version\":\"2023.11.29.1201\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{8aed26b1-26aa-4e1a-a223-99c0a0ee104d}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-s23-fe-5g-fan-edition-128-gb-8-gb-ram-menta/3d2009af-fe4f-4fa0-815e-a44b2a261912", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"eecfc613-50c3-411c-b2e5-370ada402311\",\"customization\":{},\"sum\":true}", ENDITEM, 
		LAST);

	web_url("3d2009af-fe4f-4fa0-815e-a44b2a261912_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/3d2009af-fe4f-4fa0-815e-a44b2a261912", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-s23-fe-5g-fan-edition-128-gb-8-gb-ram-menta/3d2009af-fe4f-4fa0-815e-a44b2a261912", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	/* Hola */

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/signin", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":null}", ENDITEM, 
		LAST);

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/discount", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"}}", ENDITEM, 
		LAST);

	web_custom_request("json_7", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"event\":[{\"download_time_ms\":4039,\"downloaded\":16597,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"950\",\"previousversion\":\"921\",\"total\":16597,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"efniojlnjndmcbiieegkicadnoecjjef/1.d83d000bbae784acceea698f86c18287f9573e62b6756297d0bd4cdc0207c4eb/1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed/848cb23b8f6dbfe304116be506ac72b2dfa809feda5b33f53241ba6e7ee44597.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.d83d000bbae784acceea698f86c18287f9573e62b6756297d0bd4cdc0207c4eb\",\"nextversion\":\"950\",\"previousfp\":\"1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed\",\"previousversion"
		"\":\"921\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.d83d000bbae784acceea698f86c18287f9573e62b6756297d0bd4cdc0207c4eb\"}]},\"version\":\"950\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\""
		"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{ee5deda0-0bae-4050-a533-e62d67bd55b6}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	/* Hola */

	lr_think_time(4);

	web_submit_data("discount_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/discount", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"},\"payload\":{\"noCode\":true}}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("json_8", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"event\":[{\"download_time_ms\":4033,\"downloaded\":25887,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8748\",\"previousversion\":\"8663\",\"total\":25887,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/"
		"ad373alclggjndfwb4gfzttfjjma_8748/hfnkpimlhhgieaddgfemjhofmfblmnib_8748_all_acimuxy57gbnlerpfi7ecg6cy3eq.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.0b61003a44b08e8b350c903886db6f9c5c9b0097eaefbbfd34c1535b30d889e9\",\"nextversion\":\"8748\",\"previousfp\":\"1.e2bd8b511e50117f23382fd6d3ffed78acc500ea28df373bd0e01e24dc286a73\",\"previousversion\":\"8663\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.0b61003a44b08e8b350c903886db6f9c5c9b0097eaefbbfd34c1535b30d889e9\"}]},\"version\":\"8748\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\""
		"{e8bb132d-c688-49e4-82ae-8bd6535716a9}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/delivery", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"}}", ENDITEM, 
		LAST);

	web_submit_data("calculate", 
		"Action=https://www.garbarino.com/api/checkout/delivery/calculate", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/delivery", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"},\"address\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\""
		"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}", ENDITEM, 
		LAST);

	/* Hola */

	lr_think_time(6);

	web_submit_data("delivery_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/delivery", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"},\"payload\":{\"clientAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\""
		"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"selection\":{\"47\":{\"cost\":0,\"currencyId\":null,\"hasCost\""
		":true,\"toAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\""
		",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"deliveryOptionId\":81,\"deliveryOptionKeyname\":\"envio_visuar\",\"sellerId\":47,\"methodKey\":\"Shipping\",\"methodName\":\"Envío a domicilio\",\"integratorKey\":\"custom\",\"integratorName\":\"Personalizado\",\"optionKey\":\"envio_visuar\",\"optionName\":\"Envio a Domicilio\",\""
		"rateKey\":\"__free__\",\"carrierName\":null,\"message\":null,\"data\":{},\"toAddressLine\":\"Manuel Castro 304, Lomas de Zamora, Provincia de Buenos Aires, 1832\",\"hasEta\":true,\"etaMessage\":\"Llega entre el Martes y el Jueves 16/05\",\"etaFromDate\":\"2024-05-15T01:57:06.121Z\",\"etaToDate\":\"2024-05-17T01:57:06.121Z\",\"sku\":null,\"checkoutGroup\":null,\"hash\":\"7d8c9f37177704f863257ccdd48f640241f5258c\",\"discountPct\":0,\"discount\":0,\"total\":0}},\"receiver\":{\"firstname\":\"Juan\",\""
		"lastname\":\"Robledo\",\"idNumber\":\"11111111\"}}}", ENDITEM, 
		LAST);

	web_submit_data("payment", 
		"Action=https://www.garbarino.com/api/checkout/load-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/payment", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"}}", ENDITEM, 
		LAST);

	web_custom_request("json_9", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4030,\"downloaded\":37718,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"3028\",\"previousversion\":\"3026\",\"total\":37718,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"jflookgnkcckhobaglndicnbbgbonegd/1.a924d1d2fd7fa87c509ddc39c5837d34b589ac76d07abb7736ae7f854fc9d937/1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629/614c17ad25418246e5a79f0516e09d4aeed31f06d1ed2f44309c471133a6bfe9.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.a924d1d2fd7fa87c509ddc39c5837d34b589ac76d07abb7736ae7f854fc9d937\",\"nextversion\":\"3028\",\"previousfp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\",\""
		"previousversion\":\"3026\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a924d1d2fd7fa87c509ddc39c5837d34b589ac76d07abb7736ae7f854fc9d937\"}]},\"version\":\"3028\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{08468761-5846-4238-93f5-53acb24fc3c1}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	/* Hola */

	lr_think_time(6);

	web_submit_data("payment_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/payment", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"a764484ef0d4d455e1027d379ed835e71d3ad75a\"},\"payload\":{\"selection\":{\"paymentOptionId\":20,\"image\":{\"id\":1737091,\"url\":\"uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\",\"location\":\"cdn\",\"type\":\"image\",\"contentType\":\"image/png\",\"alt\":\"transfer\",\"data\":{\"width\":50,\"height\":50},\"fullUrl\":\"https://"
		"d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\"},\"title\":\"Transferencia Bancaria\",\"messages\":[{\"text\":\"5% de descuento pagando con transferencia bancaria\"}],\"orderMessages\":[{\"text\":\"Tenés 24 hs para transferir y enviarnos tu comprobante a cac@garbarino.com.ar\"}],\"checkoutData\":{},\"method\":{\"methodName\":\"Transferencia Bancaria\",\"methodKey\":\"WireTransfer\",\"unpaidEmail\":true,\"offlinePayment\":true}},\"input\":null}}", ENDITEM, 
		LAST);

	web_submit_data("contact", 
		"Action=https://www.garbarino.com/api/checkout/load-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/contact", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"326d9333fdbbf5f38708e468ec86b2e305c75b84\"}}", ENDITEM, 
		LAST);

	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/contact", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	/* Hola */

	lr_think_time(4);

	web_submit_data("contact_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/contact", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"326d9333fdbbf5f38708e468ec86b2e305c75b84\"},\"payload\":{\"buyer\":{\"idNumber\":\"11111111\",\"firstname\":\"Juan\",\"lastname\":\"Robledo\",\"phoneCountryId\":9,\"phoneAreaCode\":\"11\",\"phoneNumber\":\"42434534\"},\"invoice\":{\"id\":4498,\"business\":false,\"personFirstname\":\"Juan\",\"personLastname\":\"Robledo\",\"personIdNumber\":\""
		"11111111\",\"businessName\":null,\"businessIdNumber\":null,\"invoiceType\":null,\"externalId\":null,\"userId\":47128},\"invoiceAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\""
		"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}}", ENDITEM, 
		LAST);

	web_submit_data("confirm", 
		"Action=https://www.garbarino.com/api/checkout/load-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/confirm", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"326d9333fdbbf5f38708e468ec86b2e305c75b84\"}}", ENDITEM, 
		LAST);

	web_custom_request("json_10", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"event\":[{\"download_time_ms\":4034,\"downloaded\":10114,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.5.8.1\",\"previousversion\":\"2024.4.10.1\",\"total\":10114,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/chrome_component/"
		"addacweyfpyozkmbj7ega43jwzqa_2024.5.8.1/jflhchccmppkfebkiaminageehmchikm_2024.05.08.01_all_gjtyfhyygmr7qurzn3rvvd76je.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.a68170f1d9baa0fdc03660efa9a7762d898ce70a57a9e95a3e0f23909ed92afc\",\"nextversion\":\"2024.5.8.1\",\"previousfp\":\"1.2224fd8b6488a5197111194ab074a6d83292959c5ea7f034f46cc51e8a280a50\",\"previousversion\":\"2024.4.10.1\"}],\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a68170f1d9baa0fdc03660efa9a7762d898ce70a57a9e95a3e0f23909ed92afc\"}]},\"version\":\"2024.5.8.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\""
		"{cc5dd45a-3cb2-48a3-882d-58d1fb41f59a}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	/* Hola */

	lr_think_time(4);

	web_custom_request("json_11", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4033,\"downloaded\":3108,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.5.1.0\",\"previousversion\":\"2024.3.27.0\",\"total\":3108,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"gonpemdgkjcecdgbnaabipppbmgfggbe/1.97c5f0830ae68cc24d4fd1031749d061894ab4f3256f504ff066b36ce86a6a76/1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4/247bea9df4bfcd2707187c0cb069787598c1ca496b35ef63bbd72d0dda91fabb.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.97c5f0830ae68cc24d4fd1031749d061894ab4f3256f504ff066b36ce86a6a76\",\"nextversion\":\"2024.5.1.0\",\"previousfp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\",\""
		"previousversion\":\"2024.3.27.0\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.97c5f0830ae68cc24d4fd1031749d061894ab4f3256f504ff066b36ce86a6a76\"}]},\"version\":\"2024.5.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.22631.3447\"},\"prodversion\":\"124.0.6367.156\",\"protocol\":\"3.1\",\"requestid\":\"{5f2aecf1-386b-4234-8ca4-cccdb2fd987e}\",\"sessionid\":\"{185d8105-429e-41bb-8969-819f34c66361}\",\"updaterversion\":\"124.0.6367.156\"}}", 
		LAST);

	web_submit_data("confirm_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/confirm", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"e6fae3cec70a1066afc85785d26b60cb24d73a2b\",\"checker\":{\"items\":\"bc194f87389a75c2e7913916514f9756c6be83df\",\"total\":\"326d9333fdbbf5f38708e468ec86b2e305c75b84\"},\"payload\":{}}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("aae8e865-919e-43f6-a55e-cea5288e1699", 
		"URL=https://www.garbarino.com/user/orders/aae8e865-919e-43f6-a55e-cea5288e1699", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/e6fae3cec70a1066afc85785d26b60cb24d73a2b/confirm", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/aae8e865-919e-43f6-a55e-cea5288e1699", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("aae8e865-919e-43f6-a55e-cea5288e1699_2", 
		"URL=https://www.garbarino.com/api/user/order/aae8e865-919e-43f6-a55e-cea5288e1699", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/aae8e865-919e-43f6-a55e-cea5288e1699", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("confirmed-evt", 
		"URL=https://www.garbarino.com/api/user/order/aae8e865-919e-43f6-a55e-cea5288e1699/confirmed-evt", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/aae8e865-919e-43f6-a55e-cea5288e1699", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("upload_3", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":true,\"protocol\":\"\",\"request_age_ms\":60406,\"request_elapsed_ms\":126,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/domainreliability/upload\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":true,\"protocol\":\"\",\"request_age_ms\":59856,\"request_elapsed_ms\":329,\"sample_rate\":1.0,\""
		"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/domainreliability/upload\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_url("4545", 
		"URL=https://www.garbarino.com/api/user/order/aae8e865-919e-43f6-a55e-cea5288e1699/refresh-delivery-eta/4545", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/aae8e865-919e-43f6-a55e-cea5288e1699", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload_4", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":true,\"protocol\":\"HTTP\",\"request_age_ms\":61243,\"request_elapsed_ms\":516,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":true,\"protocol\":\"HTTP\",\"request_age_ms\":60824,\""
		"request_elapsed_ms\":210,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	/* Hola final */

	return 0;
}