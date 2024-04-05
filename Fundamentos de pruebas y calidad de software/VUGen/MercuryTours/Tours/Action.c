Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_cache_cleanup();
	web_cleanup_cookies();
	//web_set_sockets_option("SSL_VERSION", "TLS");


	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=123", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("Specialized_Tours.html", 
		"URL=http://www.mercury-tours.com/Specialized_Tours.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Pics/Background_1.jpg", ENDITEM, 
		"Url=https://lh3.googleusercontent.com/a/ACg8ocJfZH2aFOE6fo4DD5rscLVkPThBuJh2I8fv7tQUJMcWaP_Hvmo=s256-c-ns", "Referer=", ENDITEM, 
		"Url=/Pics/vegas1.jpg", ENDITEM, 
		"Url=/Pics/dsfds.jpg", ENDITEM, 
		"Url=/Pics/5yy.jpg", ENDITEM, 
		LAST);

	/* Menu */

	lr_think_time(59);

	lr_start_transaction("Case_g01_01_URL");

	lr_end_transaction("Case_g01_01_URL",LR_AUTO);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:1jJhbymsQqAmEGQGeAPmGB_nojkSRBSYFcduDwq2inw&cup2hreq=76daa23ae0e84a1974daa34d793ee127216ad9f94f675f63b92d96d8b2b5a330", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{842a5b42-ad3f-4a16-ac5e-79b61d83efc3}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"accept_locale\""
		":\"ES419500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{fdacf8c7-e712-4d80-8bdf-42448a97a374}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\""
		"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{b9afff26-3a43-4c91-8ada-48c21ac75972}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{010c2267-68bb-4989-993f-8a6ba2012db3}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{b028dcd9-90df-419f-a119-7650bc35048f}\",\"rd\":6289},\"updatecheck\":{"
		"},\"version\":\"4.10.2710.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c4b05e41187d7f9d230e2035835df87a7f6a98da3d51a3dcfc74823e31e85190\"}]},\"ping\":{\"ping_freshness\":\"{268ccead-b1de-4e2f-ad6d-f60cb1c9fae8}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"439\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\""
		",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{4ef1cb71-7e07-407c-b540-590f86e2762b}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\""
		"es-419\",\"ping\":{\"ping_freshness\":\"{d0797d70-c7c3-4d53-9d95-7aaf2a74da26}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{018a2f79-1090-4000-b656-c0685377ff58}\",\""
		"rd\":6289},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.caac51b425f543c355076c91c74fd4f350622811d9055a3add57fe677116d3a2\"}]},\"ping\":{\"ping_freshness\":\"{aa0aea00-3e63-4941-b096-069cf5658cb5}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"2024.3.21.0\"},{\"appid\":\""
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{10e69c06-e9a9-42cc-957c-c276de39dbd1}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\""
		":\"stable64\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{05f9767d-32f4-40da-bcc6-2b6bd9dedc81}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{94d88649-d037-4b9e-9fd5-89ae116c2130}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.9013452e05b25774a9a3bc343531fe0fb2b2ef51994d5a7f0bec7bfb8daf0a29\"}]},\""
		"ping\":{\"ping_freshness\":\"{f0b49191-8c3e-4bf7-9bee-c88ec98c98bb}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"8612\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.81edfe5c9bcd5c93a7431df1cf92255bb705c56adeb8c1167fc2571494b02794\"}]},\"ping\":{\"ping_freshness\":\"{f835f4b6-f735-4b37-b7bf-45be3859be83}\",\"rd\":6289},\""
		"updatecheck\":{},\"version\":\"901\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{fb5a7199-e87f-4344-852a-5115e2ccc5d1}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c7f445d90541e46806f932c860cf78e900b7949c56ccb45c53681b7dfc9270a7\"}]},\"ping\":{\"ping_freshness\":\"{097f3aea-3f05-48a0-a762-4e6c676f54d8}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"3023\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled"
		"\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{da480986-a919-42a2-a381-ba689c758ede}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\""
		"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{205ad5ca-4856-4467-999e-fdf77841cf6b}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c1825d2b2a12630e303b24de2332d35456384fa84f0cda5965b6d3f73bca9a5c\"}]},\"ping\":{\""
		"ping_freshness\":\"{10e532fc-00ab-43fd-a712-43d9a61b8de4}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"2024.3.20.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{9bad3990-39e9-4a47-bcd5-f85c3e147164}\",\"rd\":6289},\"updatecheck\":"
		"{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:2an3@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.7dc0fbdbdf66aebff7706c641342dce25565bfcd3730583e72148439f9155900\"}]},\"ping\":{\"ping_freshness\":\"{f23ceff9-9b9d-428f-878e-de05a624b639}\",\"rd\":6289},\"updatecheck\":{},\"version\":\"2024.3.13.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\""
		"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.106\",\"protocol\":\"3.1\",\"requestid\":\"{f7827133-dba4-46c2-a4b6-068e3515a872}\",\"sessionid\":\"{67c80d67-4e90-44d0-8334-5c50953595fb}\",\"updater\":{\"autoupdatecheckenabled\":true,\""
		"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"123.0.6312.106\"}}", 
		LAST);

	/* Our coaches */

	lr_think_time(31);

	lr_start_transaction("Case_g01_02_Our-Coaches");

	web_url("Our_Coaches.html", 
		"URL=http://www.mercury-tours.com/Our_Coaches.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.mercury-tours.com/Specialized_Tours.html", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=es&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_02_Our-Coaches",LR_AUTO);

	/* Contact Us */

	lr_think_time(46);

	lr_start_transaction("Case_g01_03_Contact-Us");

	web_url("Contact_Us.html", 
		"URL=http://www.mercury-tours.com/Contact_Us.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.mercury-tours.com/Our_Coaches.html", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_03_Contact-Us",LR_AUTO);

	/* San Franscisco Tours */

	lr_think_time(58);

	lr_start_transaction("Case_g01_04_San-Franscisco-Tours");

	web_link("San Franscisco Tours", 
		"Text=San Franscisco Tours", 
		"Snapshot=t7.inf", 
		LAST);

	lr_end_transaction("Case_g01_04_San-Franscisco-Tours",LR_AUTO);

	/* Specialized Tours */

	lr_think_time(52);

	lr_start_transaction("Case_g01_05_Specialized-Tours");

	web_link("Specialized Tours", 
		"Text=Specialized Tours", 
		"Snapshot=t8.inf", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIzLjAuNjMxMi4xMDYaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARC7_hMaAhgJzRx8miIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQybYNGgIYCX-mRToiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEPStDRoCGAmFE7YwIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCXpgcaAhgJt7JzJSIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQkTYaAhgJMlYjlCIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQtPkBGgIYCYuc1L8iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDfFBoCGAnkzSkpIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCYgwIaAhgJHB8KIyIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQhv0NGgIYCXx7bX8iBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEI0fGgIYCQ6Bm1kiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_05_Specialized-Tours",LR_AUTO);

	/* More of Where We Go */

	lr_think_time(42);

	lr_start_transaction("Case_g01_06_More-Of-Where-We-Go");

	web_url("More%20of%20Where%20we%20Go.html", 
		"URL=http://www.mercury-tours.com/More%20of%20Where%20we%20Go.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.mercury-tours.com/Specialized_Tours.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* Return to Specialized Tours */

	lr_think_time(26);

	/* ERROR
	web_custom_request("storeMetadata:batchGet", 
		"URL=https://chromewebstore.googleapis.com/v2/items/-/storeMetadata:batchGet", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\n\\x07items/-\\x124items/ghbmnnjooekpmoecnnnilnnbdlolhkhi/storeMetadata\\x124items/nmmhkkegccagdldgiimedpiccmgmieda/storeMetadata", 
		LAST);
	*/

	web_url("Specialized_Tours.html_2", 
		"URL=http://www.mercury-tours.com/Specialized_Tours.html", 
		"Resource=0", 
		"Referer=http://www.mercury-tours.com/More%20of%20Where%20we%20Go.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_06_More-Of-Where-We-Go",LR_AUTO);

	return 0;
}