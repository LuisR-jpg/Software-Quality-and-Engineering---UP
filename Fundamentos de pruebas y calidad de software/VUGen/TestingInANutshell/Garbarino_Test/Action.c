Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712887260750&gcd=13l3l3l3l1&npa=0&dma=0&cid=2077486026.1712887266&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=1&dt=Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2F&sid=1712887266&sct=1&seg=0&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&tfd=9633", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	

	/* Case_g01_01_look_cellphone  */

	lr_start_transaction("Case_g01_01_look_cellphone");

	

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887294.0.0.0; DOMAIN=www.garbarino.com");

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"URL=https://www.garbarino.com/api/catalog/product/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_01_look_cellphone",LR_AUTO);

	/* Case_g01_02_select_cellphone  */

	lr_start_transaction("Case_g01_02_select_cellphone");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887312.0.0.0; DOMAIN=www.garbarino.com");

	lr_think_time(33);

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"ca1f04f6-2e49-487f-8ba7-5a34c233e174\",\"customization\":{},\"sum\":true}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887346.0.0.0; DOMAIN=www.garbarino.com");

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":80704,\"request_elapsed_ms\":281,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":80595,\"request_elapsed_ms\":549,\""
		"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":80453,\"request_elapsed_ms\":406,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":80418,\"request_elapsed_ms\":616,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":80076,\"request_elapsed_ms\":305,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":80041,\"request_elapsed_ms\":269,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\""
		"protocol\":\"\",\"request_age_ms\":80002,\"request_elapsed_ms\":231,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":53050,\"request_elapsed_ms\":131,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\""
		"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":53017,\"request_elapsed_ms\":146,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":35406,\"request_elapsed_ms\":444,"
		"\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":34941,\"request_elapsed_ms\":112,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net:"
		":ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":34910,\"request_elapsed_ms\":110,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":34863,\"request_elapsed_ms\":136,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\""
		"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":727,\"request_elapsed_ms\":635,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://td.doubleclick.net/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_2", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":82659,\"request_elapsed_ms\":245,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":2053,\"request_elapsed_ms\":293,\"sample_rate\":1.0"
		",\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	lr_end_transaction("Case_g01_02_select_cellphone",LR_AUTO);

	/* Case_g01_03_buy_cellphone  */

	lr_start_transaction("Case_g01_03_buy_cellphone");

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	//web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887365.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":null}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_03_buy_cellphone",LR_AUTO);

	/* Case_g01_04_login  */

	lr_think_time(53);

	lr_start_transaction("Case_g01_04_login");

	web_custom_request("upload_3", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":71263,\"request_elapsed_ms\":1239,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_4", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":72077,\"request_elapsed_ms\":297,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gcp.gvt2.com/domainreliability/upload\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887366.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887418; DOMAIN=www.garbarino.com");

	lr_think_time(8);

	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("upload_5", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":62167,\"request_elapsed_ms\":109,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":1814,\"request_elapsed_ms\":1108,\"sample_rate\""
		":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887428; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887428.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("signin_3", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{}}", ENDITEM, 
		LAST);

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/discount", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_04_login",LR_AUTO);

	/* Case_g01_05_coupon  */

	lr_start_transaction("Case_g01_05_coupon");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887429.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887429; DOMAIN=www.garbarino.com");

	lr_think_time(23);

	web_submit_data("discount_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/discount", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"noCode\":true}}", ENDITEM, 
		LAST);

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887453.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887453; DOMAIN=www.garbarino.com");

	web_submit_data("calculate", 
		"Action=https://www.garbarino.com/api/checkout/delivery/calculate", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"address\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\""
		"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_05_coupon",LR_AUTO);

	/* Case_g01_06_delivery_address  */

	lr_think_time(19);

	lr_start_transaction("Case_g01_06_delivery_address");

	web_submit_data("delivery_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"clientAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\""
		"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"selection\":{\"47\":{\"cost\":0,\"currencyId\":null,\"hasCost\""
		":true,\"toAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\""
		",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"deliveryOptionId\":81,\"deliveryOptionKeyname\":\"envio_visuar\",\"sellerId\":47,\"methodKey\":\"Shipping\",\"methodName\":\"Envío a domicilio\",\"integratorKey\":\"custom\",\"integratorName\":\"Personalizado\",\"optionKey\":\"envio_visuar\",\"optionName\":\"Envio a Domicilio\",\""
		"rateKey\":\"__free__\",\"carrierName\":null,\"message\":null,\"data\":{},\"toAddressLine\":\"Manuel Castro 304, Lomas de Zamora, Provincia de Buenos Aires, 1832\",\"hasEta\":true,\"etaMessage\":\"Llega entre el Martes y el Jueves 18/04\",\"etaFromDate\":\"2024-04-17T02:04:14.427Z\",\"etaToDate\":\"2024-04-19T02:04:14.427Z\",\"sku\":null,\"checkoutGroup\":null,\"hash\":\"79052c5e2e0ed205eac030948c83369f2b891011\",\"discountPct\":0,\"discount\":0,\"total\":0}},\"receiver\":{\"firstname\":\"Juan\",\""
		"lastname\":\"Robledo\",\"idNumber\":\"11111111\"}}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887473.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887473; DOMAIN=www.garbarino.com");

	web_submit_data("payment", 
		"Action=https://www.garbarino.com/api/checkout/load-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/payment", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_end_transaction("Case_g01_06_delivery_address",LR_AUTO);

	web_custom_request("upload-nel", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload-nel_2", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload-nel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":120019,\"body\":{\"elapsed_time\":115,\"method\":\"POST\",\"phase\":\"application\",\"protocol\":\"h3\",\"referrer\":\"https://www.garbarino.com/\",\"sampling_fraction\":0.25,\"server_ip\":\"192.178.56.206\",\"status_code\":204,\"type\":\"ok\"},\"type\":\"network-error\",\"url\":\"https://google.com/ccm/form-data/11059668143?gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&npa=0&pscdl=noapi&auid=1268100167.1712887266&uaa=x86&uab=64&uafvl="
		"Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&ec_mode=a&em=tv.1\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/123.0.0.0 Safari/537.36\"},{\"age\":56683,\"body\":{\"elapsed_time\":60,\"method\":\"POST\",\"phase\":\"application\",\"protocol\":\"h3\",\"referrer\":\"https://www.garbarino.com/\",\"sampling_fraction\":0.25,\"server_ip\":\"192.178.56.206\",\""
		"status_code\":204,\"type\":\"ok\"},\"type\":\"network-error\",\"url\":\"https://google.com/ccm/form-data/11059668143?gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&npa=0&pscdl=noapi&auid=1268100167.1712887266&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&ec_mode=a&em=tv.1~em.uwlIZG5T8S7cSgBoOj1GCvkyuidh-zTZ4CtVu5yAN84&ecsid=404485713.1712887418\",\"user_agent\":\"Mozilla/5.0 (Windows NT "
		"10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/123.0.0.0 Safari/537.36\"}]", 
		LAST);

	/* Case_g01_07_payment_method  */

	lr_start_transaction("Case_g01_07_payment_method");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887474.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887474; DOMAIN=www.garbarino.com");

	lr_think_time(22);

	web_submit_data("payment_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/payment", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"selection\":{\"paymentOptionId\":20,\"image\":{\"id\":1737091,\"url\":\"uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\",\"location\":\"cdn\",\"type\":\"image\",\"contentType\":\"image/png\",\"alt\":\"transfer\",\"data\":{\"width\":50,\"height\":50},\"fullUrl\":\"https://"
		"d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\"},\"title\":\"Transferencia Bancaria\",\"messages\":[{\"text\":\"5% de descuento pagando con transferencia bancaria\"}],\"orderMessages\":[{\"text\":\"Tenés 24 hs para transferir y enviarnos tu comprobante a cac@garbarino.com.ar\"}],\"checkoutData\":{},\"method\":{\"methodName\":\"Transferencia Bancaria\",\"methodKey\":\"WireTransfer\",\"unpaidEmail\":true,\"offlinePayment\":true}},\"input\":null}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887512.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("contact", 
		"Action=https://www.garbarino.com/api/checkout/load-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"}}", ENDITEM, 
		LAST);

	web_url("11059668143", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712887512149&cv=11&fst=1712887512149&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F5429d885111a8e70e352e219de8d032b96daabbd%2Fpayment&hn=www.googleadservices.com&frm=0&tiba=Elige%20la%20forma%20de%20pago%20%7C%20Checkout%20%7C%20Garbarino&value=2465250.04&currency_code=ARS&userId=47128&npa=0&pscdl=noapi&auid=1268100167.1712887266&uaa=x86&"
		"uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&fledge=1&shf=0&data=event%3Dadd_payment_info%3Baffiliation%3DDrubbitShop%20(https%3A%2F%2Fwww.garbarino.com)%3Bshipping%3D0%3Bshipping_tier%3DShipping-envio_visuar%3Bpayment_type%3DWireTransfer", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887512; DOMAIN=www.garbarino.com");

	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("11059668143_2", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712887512484&cv=11&fst=1712887512484&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fcontact&top=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F5429d885111a8e70e352e219de8d032b96daabbd%2Fcontact&tiba=Contacto%20y%20Facturaci%C3%B3n%20%7C%20Checkout%20%7C%20Garbarino&hn=www.googleadservices.com&frm=0&userId=47128&npa=0&pscdl=noapi&"
		"auid=1268100167.1712887266&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&fledge=1&data=event%3Dpage_view", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_07_payment_method",LR_AUTO);

	/* Case_g01_08_billing_information  */

	lr_think_time(28);

	lr_start_transaction("Case_g01_08_billing_information");

	web_submit_data("contact_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"},\"payload\":{\"buyer\":{\"idNumber\":\"11111111\",\"firstname\":\"Juan\",\"lastname\":\"Robledo\",\"phoneCountryId\":9,\"phoneAreaCode\":\"11\",\"phoneNumber\":\"42434534\"},\"invoice\":{\"id\":4065,\"business\":false,\"personFirstname\":\"Juan\",\"personLastname\":\"Robledo\",\"personIdNumber\":\""
		"11111111\",\"businessName\":null,\"businessIdNumber\":null,\"invoiceType\":null,\"userId\":47128},\"invoiceAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos "
		"Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}}", ENDITEM, 
		LAST);

	web_submit_data("confirm", 
		"Action=https://www.garbarino.com/api/checkout/load-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_08_billing_information",LR_AUTO);

	lr_think_time(6);

	web_custom_request("upload-nel_3", 
		"URL=https://beacons3.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	/* Case_g01_09_confirm_purchase  */

	lr_start_transaction("Case_g01_09_confirm_purchase");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887541.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887541; DOMAIN=www.garbarino.com");

	lr_think_time(14);

	web_submit_data("confirm_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"},\"payload\":{}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887567.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887567; DOMAIN=www.garbarino.com");

	web_url("1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"URL=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("1ee470a2-c755-42d3-b95a-bef0a26be671_2", 
		"URL=https://www.garbarino.com/api/user/order/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887568.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887568; DOMAIN=www.garbarino.com");

	web_url("4111", 
		"URL=https://www.garbarino.com/api/user/order/1ee470a2-c755-42d3-b95a-bef0a26be671/refresh-delivery-eta/4111", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_09_confirm_purchase",LR_AUTO);

	return 0;
}