Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:1bhgJ9bXwejMfUt2qsxO321L1zUzx34h-6Zlc9vH7PY&cup2hreq=69fc37722268dbe4e36d3490bfa757596a80aa9dc9f0cfbb81d2e02e73cd659c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"installedby\":\"external\",\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.378723490592c0627ac18a287f9a9cb74970c3c6e10a177c322282bfc1d01e01\"}]},\"ping\":{\"ping_freshness\":\"{0f323640-0956-41ff-be4f-b65c32999026}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.75.4\"},{\"appid"
		"\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"installedby\":\"other\",\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.6\"}]},\"ping\":{\"ping_freshness\":\"{ebee23ed-c81b-4a10-a3ee-c11a6247f30a}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\""
		":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{289ce7d3-a8a3-4750-8e7f-0bd87366101a}\",\"sessionid\":\"{baa97da8-f338-4e28-a562-e5e9294aa69b}\",\"updaterversion\":\"123.0.6312.107\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_url("button", 
		"URL=https://accounts.google.com/gsi/button?theme=filled_blue&text=signin_with&type=standard&shape=pill&size=large&logo_alignment=left&client_id=984956663741-htkkerhb30eaffrqhuvj5ufm8ed44bo7.apps.googleusercontent.com&iframe_id=gsi_654286_49079&as=YKqS2qwyrAhme0uNY9l4Sw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fedcm.json", 
		"URL=https://accounts.google.com/gsi/fedcm.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712890646914&gcd=13l3l3l3l1&npa=0&dma=0&cid=1574575648.1712890654&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=1&dt=Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2F&sid=1712890654&sct=1&seg=0&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&tfd=12982", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("listaccounts", 
		"URL=https://accounts.google.com/gsi/fedcm/listaccounts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(8);

	web_custom_request("log", 
		"URL=https://play.google.com/log?hasfast=true&authuser=0&format=json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,\"es\",null,null,null,[[[\"Google Chrome\",\"123\"],[\"Not:A-Brand\",\"8\"],[\"Chromium\",\"123\"]],0,\"Windows\",\"15.0.0\",\"x86\",\"\",\"123.0.6312.107\"],[3,1,0,0,0]]],1112,[[\"1712890658097\",null,null,null,null,null,null,\"[\\\"YKqS2qwyrAhme0uNY9l4Sw\\\",12,0,null,\\\"984956663741-htkkerhb30eaffrqhuvj5ufm8ed44bo7.apps.googleusercontent.com\\\",\\\"https://www.garbarino.com\\\",[],null,null,null,null,null,null,12,null,"
		"null,null,[1,2,2,null,2,1,1]]\",null,null,12,null,null,null,21600,null,null,null,null,null,1]],\"1712890665134\"]", 
		LAST);

	web_add_cookie("_ga=GA1.1.1574575648.1712890654; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712890654.1.0.1712890654.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.127431654.1712890654.95047458.1712890671.1712890671; DOMAIN=www.garbarino.com");

	lr_think_time(8);

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", ENDITEM, 
		LAST);

	web_add_cookie("_gcl_au=1.1.127431654.1712890654.95047458.1712890671.1712890675; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712890654.1.1.1712890675.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", ENDITEM, 
		LAST);

	lr_start_transaction("ayuda");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:TzsthTq88l8nrbg8UQ1Vava24nceoBDwIwGwyCD9QN4&cup2hreq=2d31446a67845d17d827085410132c4e0419f80e9b3fc0b2e6af3156f5d80313", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{baf77eb9-86b1-4d2c-996d-afb7c59696cc}\",\"rd\":6310},\"updatecheck\":{},\"version\":\""
		"1.0.2738.0\"},{\"accept_locale\":\"ES419500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{e80c692e-dcd5-42b2-a542-29a65e6018e3}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\""
		"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{ce71280e-fb1f-4128-8879-d1edfddeeb11}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\""
		"{25f2ba11-076f-4906-aac2-f311efd2e6de}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\"}]},\"ping\":{\"ping_freshness\":\"{beafa92e-514a-404b-a3d9-e4e32332df19}\",\"rd\":6310},\"updatecheck\":{},\"version\":\""
		"442\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{b9f1eef5-1a44-4fc4-bc5c-d904f1291920}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f9e33fa1309505c2b29bbd72b5d5cf48375d1f329ea5efbf1abed40bd4f62fb5\"}]},\"ping\":{\"ping_freshness\":\"{99dc87c2-964f-4aa3-a18b-ed843713acd2}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"8662\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\""
		"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{62ab95aa-1751-438f-9389-80386381f085}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{40c6d74a-24c8-4145-9db5-7a75ea29cd8f}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\"}]},\"ping\":{\""
		"ping_freshness\":\"{c898efda-eb2d-4ea5-9201-b774bfab6380}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{6a4f0eab-b954-433c-9e4e-84e71f901994}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed\"}]},\"ping\":{\"ping_freshness\":\"{5e1c283c-dd72-4aa4-aa60-d1e028ffde10}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"921\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5936,\""
		"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{84afdfd4-ffc8-4742-a425-a24f31635521}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{daffb9c7-1bfc-4c53-864c-a24fd6fc575b}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\""
		"ping_freshness\":\"{af23ae8d-7fad-468f-8997-c1590d20034c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{4ba55e65-aee2-4514-8710-27a7724fbeeb}\",\"rd\":6310},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{390c8147-ad47-42c2-bb4d-6f44e8e7caa6}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc"
		"\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{06299bec-fe24-4fd1-83c9-817833fb92b9}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\""
		":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{ab6d0b12-ea39-48d0-b479-276c44101e35}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.2224fd8b6488a5197111194ab074a6d83292959c5ea7f034f46cc51e8a280a50\"}]},\"ping\":{\"ping_freshness\":\"{0c68b532-d015-431f-9e85-bf1b083250f4}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\""
		"ping_freshness\":\"{c86126b9-a487-4678-b88a-6df8fe70c701}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{be03fa7c-04b8-40a2-95fb-8256192aeae0}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{fbe1c5da-c6ab-411a-abde-f9fc3851f1e3}\",\"sessionid\":\""
		"{ed6f87af-e9df-449e-9584-57b53606fd63}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"123.0.6312.107\"}}", 
		LAST);

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"event\":[{\"download_time_ms\":4058,\"downloaded\":2058,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"8663\",\"previousversion\":\"8662\",\"total\":2058,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/1.e2bd8b511e50117f23382fd6d3ffed78acc500ea28df373bd0e01e24dc286a73/1.f9e33fa1309505c2b29bbd72b5d5cf48375d1f329ea5efbf1abed40bd4f62fb5/bafd01cd70cccbc664fa06777b992ce028e61aca88bf5188ff3eda5110877c19.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.e2bd8b511e50117f23382fd6d3ffed78acc500ea28df373bd0e01e24dc286a73\",\"nextversion\":\"8663\",\"previousfp\":\"1.f9e33fa1309505c2b29bbd72b5d5cf48375d1f329ea5efbf1abed40bd4f62fb5\",\""
		"previousversion\":\"8662\"}],\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.e2bd8b511e50117f23382fd6d3ffed78acc500ea28df373bd0e01e24dc286a73\"}]},\"version\":\"8663\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{eb24f4aa-1e44-41e3-9e72-f81cec962150}\",\"sessionid\":\"{ed6f87af-e9df-449e-9584-57b53606fd63}\",\"updaterversion\":\"123.0.6312.107\"}}", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712890654.1.1.1712890689.0.0.0; DOMAIN=www.garbarino.com");

	web_url("d63914fc-da61-4778-a850-598bb7bfee71", 
		"URL=https://www.garbarino.com/api/catalog/product/d63914fc-da61-4778-a850-598bb7bfee71", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712890654.1.1.1712890704.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.127431654.1712890654.95047458.1712890671.1712890704; DOMAIN=www.garbarino.com");

	lr_think_time(13);

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-a34-5g-128-gb-6-gb-ram-48mp-sm-a346mzsbaro/d63914fc-da61-4778-a850-598bb7bfee71", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"d5369590-3561-4642-844f-1800e0477072\",\"customization\":{},\"sum\":true}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712890654.1.1.1712890720.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.127431654.1712890654.95047458.1712890671.1712890720; DOMAIN=www.garbarino.com");

	web_url("d63914fc-da61-4778-a850-598bb7bfee71_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/d63914fc-da61-4778-a850-598bb7bfee71", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-a34-5g-128-gb-6-gb-ram-48mp-sm-a346mzsbaro/d63914fc-da61-4778-a850-598bb7bfee71", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("upload", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":204,\"network_changed\":false,\"protocol\":\"QUIC\",\"request_age_ms\":63927,\"request_elapsed_ms\":2234,\"sample_rate\":0.05,\"server_ip\":\"192.178.56.206:443\",\"status\":\"ok\",\"url\":\"https://www.google-analytics.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("nel", 
		"URL=https://e2c15.gcp.gvt2.com/nel/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":204,\"network_changed\":false,\"protocol\":\"QUIC\",\"request_age_ms\":62251,\"request_elapsed_ms\":479,\"sample_rate\":0.05,\"server_ip\":\"192.178.56.206:443\",\"status\":\"ok\",\"url\":\"https://google.com/ccm/form-data/11059668143?gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&npa=0&pscdl=noapi&auid=127431654.1712890654&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap="
		"Windows&uapv=15.0.0&uaw=0&ec_mode=a&em=tv.1\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("upload_2", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":66003,\"request_elapsed_ms\":1665,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":66018,\"request_elapsed_ms\":1703,"
		"\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":65960,\"request_elapsed_ms\":1691,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":65946,\"request_elapsed_ms\":1688,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":65990,\"request_elapsed_ms\":2058,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":65979,\"request_elapsed_ms\":3878,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\""
		"protocol\":\"\",\"request_age_ms\":65969,\"request_elapsed_ms\":3874,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":48928,\"request_elapsed_ms\":1148,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\""
		"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":44644,\"request_elapsed_ms\":236,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":44470,\"request_elapsed_ms\":143,"
		"\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":41019,\"request_elapsed_ms\":185,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":40966,\"request_elapsed_ms\":210,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":19610,\"request_elapsed_ms\":245,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":16129,\"request_elapsed_ms\":171,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\""
		"protocol\":\"\",\"request_age_ms\":16078,\"request_elapsed_ms\":1261,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":16011,\"request_elapsed_ms\":1194,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\""
		"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712890654.1.1.1712890724.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/049fa6f4537564f0b0116cf3491d86543f98089a/signin", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"049fa6f4537564f0b0116cf3491d86543f98089a\",\"checker\":null}", ENDITEM, 
		LAST);

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/049fa6f4537564f0b0116cf3491d86543f98089a/discount", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"049fa6f4537564f0b0116cf3491d86543f98089a\",\"checker\":{\"items\":\"388302926cf4578ab3713aa9abd6d4bacfa163e5\",\"total\":\"9e1419666e1db4ca63f8480ddef5772d7e06eabe\"}}", ENDITEM, 
		LAST);

	lr_end_transaction("ayuda",LR_AUTO);

	return 0;
}