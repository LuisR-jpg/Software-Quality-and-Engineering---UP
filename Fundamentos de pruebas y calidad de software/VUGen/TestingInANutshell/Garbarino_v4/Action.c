Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_cache_cleanup();
	web_cleanup_cookies();


	web_url("www.garbarino.com", //Ingresar
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_cookie("_ga=GA1.1.147003939.1712891588; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.0.1712891588.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891594; DOMAIN=www.garbarino.com");

	web_submit_data("signin", //11111111
		"Action=https://www.garbarino.com/api/user/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", ENDITEM, 
		LAST);

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891601; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891604.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891604; DOMAIN=www.garbarino.com");

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891613.0.0.0; DOMAIN=www.garbarino.com");

	web_url("8d410290-2116-4244-b917-2523ca7b0585", 
		"URL=https://www.garbarino.com/api/catalog/product/8d410290-2116-4244-b917-2523ca7b0585", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891616.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("item", 
		"Action=https://www.garbarino.com/api/cart/item", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-s21-fe-5g-128-gb-6-gb-ram-graph-fan-edition/43521110-15ca-4329-bf48-a224fa500513", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 	
		ITEMDATA, 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"e455a7d9-00e0-4aaf-8d52-1cdabd443bcb\",\"customization\":{},\"sum\":true}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891619.0.0.0; DOMAIN=www.garbarino.com");

	web_url("8d410290-2116-4244-b917-2523ca7b0585_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/8d410290-2116-4244-b917-2523ca7b0585", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-s21-fe-5g-128-gb-6-gb-ram-graph-fan-edition/43521110-15ca-4329-bf48-a224fa500513", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	//"pending","totalPaid":0,"chash":"06e7f5640b97a61cf358dfd34e5d4654ee288ca7","stockControl":0
	web_reg_save_param("JVS_01",
        "LB=\"pending\",\"totalPaid\":0,\"chash\":\"",
        "RB=\",\"stockControl\":0",
        "ORD=1",
        LAST);

	web_url("init", 
		"URL=https://www.garbarino.com/api/checkout/init?", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891638.0.0.0; DOMAIN=www.garbarino.com");
	//"checker":{"items":"962cf6f65cb6a7eeba4daffdea7d55a42ec0d237","total":"
	web_reg_save_param("JVS_02",
        "LB=\"checker\":{\"items\":\"",
        "RB=\",\"total\":",
        "ORD=1",
        LAST);


	web_submit_data("signin_2", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/signin", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":null}", ENDITEM, 
		LAST);
	
	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/discount", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891648.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891648; DOMAIN=www.garbarino.com");

	web_submit_data("discount_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/discount", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"payload\":{\"noCode\":true}}", ENDITEM, 
		LAST);

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/delivery", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891651.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("calculate", 
		"Action=https://www.garbarino.com/api/checkout/delivery/calculate", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/delivery", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"address\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\""
		"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}", ENDITEM, 
		LAST);

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891651; DOMAIN=www.garbarino.com");

	web_submit_data("delivery_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/delivery", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"payload\":{\"clientAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\""
		"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"selection\":{\"47\":{\"cost\":0,\"currencyId\":null,\"hasCost\""
		":true,\"toAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\""
		",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}},\"deliveryOptionId\":81,\"deliveryOptionKeyname\":\"envio_visuar\",\"sellerId\":47,\"methodKey\":\"Shipping\",\"methodName\":\"Envío a domicilio\",\"integratorKey\":\"custom\",\"integratorName\":\"Personalizado\",\"optionKey\":\"envio_visuar\",\"optionName\":\"Envio a Domicilio\",\""
		"rateKey\":\"__free__\",\"carrierName\":null,\"message\":null,\"data\":{},\"toAddressLine\":\"Manuel Castro 304, Lomas de Zamora, Provincia de Buenos Aires, 1832\",\"hasEta\":true,\"etaMessage\":\"Llega entre el Miércoles y el Viernes 19/04\",\"etaFromDate\":\"2024-04-17T03:14:12.090Z\",\"etaToDate\":\"2024-04-19T03:14:12.090Z\",\"sku\":null,\"checkoutGroup\":null,\"hash\":\"af2390051637deb44c99ea77142b39279f046d99\",\"discountPct\":0,\"discount\":0,\"total\":0}},\"receiver\":{\"firstname\":\""
		"Juan\",\"lastname\":\"Robledo\",\"idNumber\":\"11111111\"}}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891654.0.0.0; DOMAIN=www.garbarino.com");
	
	//"total":"fabf554e300ed9df5005917fbfcfde076a05d602"},"checkerTest"
	web_reg_save_param("JVS_03",
        "LB=\"total\":\"",
        "RB=\"},\"checkerTest\"",
        "ORD=1",
        LAST);


	web_submit_data("payment", 
		"Action=https://www.garbarino.com/api/checkout/load-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/payment", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891655.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891655; DOMAIN=www.garbarino.com");

	web_submit_data("payment_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/payment", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/payment", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"b4aceed7a0fb87666d1f00add3faf9b869ee7449\"},\"payload\":{\"selection\":{\"paymentOptionId\":20,\"image\":{\"id\":1737091,\"url\":\"uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\",\"location\":\"cdn\",\"type\":\"image\",\"contentType\":\"image/png\",\"alt\":\"transfer\",\"data\":{\"width\":50,\"height\":50},\"fullUrl\":\"https://"
		"d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png\"},\"title\":\"Transferencia Bancaria\",\"messages\":[{\"text\":\"5% de descuento pagando con transferencia bancaria\"}],\"orderMessages\":[{\"text\":\"Tenés 24 hs para transferir y enviarnos tu comprobante a cac@garbarino.com.ar\"}],\"checkoutData\":{},\"method\":{\"methodName\":\"Transferencia Bancaria\",\"methodKey\":\"WireTransfer\",\"unpaidEmail\":true,\"offlinePayment\":true}},\"input\":null}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891658.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("contact", 
		"Action=https://www.garbarino.com/api/checkout/load-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/contact", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"}}", ENDITEM, 
		LAST);

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891658; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891659.0.0.0; DOMAIN=www.garbarino.com");

	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/contact", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891659; DOMAIN=www.garbarino.com");

	web_submit_data("contact_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/contact", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/contact", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"},\"payload\":{\"buyer\":{\"idNumber\":\"11111111\",\"firstname\":\"Juan\",\"lastname\":\"Robledo\",\"phoneCountryId\":9,\"phoneAreaCode\":\"11\",\"phoneNumber\":\"42434534\"},\"invoice\":{\"id\":4077,\"business\":false,\"personFirstname\":\"Juan\",\"personLastname\":\"Robledo\",\"personIdNumber\":\""
		"11111111\",\"businessName\":null,\"businessIdNumber\":null,\"invoiceType\":null,\"userId\":47128},\"invoiceAddress\":{\"id\":12074,\"deliveryDefault\":true,\"invoiceDefault\":true,\"street\":\"Manuel Castro\",\"streetNumber\":\"304\",\"apartment\":null,\"floor\":null,\"comment\":null,\"intersection1\":null,\"intersection2\":null,\"city\":\"Lomas de Zamora\",\"userId\":47128,\"zipcodeId\":491,\"zipcode\":{\"id\":491,\"code\":\"1832\",\"stateId\":4,\"state\":{\"id\":4,\"name\":\"Provincia de Buenos "
		"Aires\",\"iso\":\"B\",\"countryId\":9,\"country\":{\"id\":9,\"name\":\"Argentina\",\"iso\":\"AR\",\"zipcodeValidation\":\"1\",\"phoneCode\":54,\"phoneValidation\":\"^0[1-3]{1}[0-9]{9}$\",\"langIso\":\"es_AR,es,en_AR,en\",\"continentId\":6,\"continent\":{\"id\":6,\"name\":\"América del Sur\",\"iso\":\"SA\"}}}}}}}", ENDITEM, 
		LAST);

	web_submit_data("confirm", 
		"Action=https://www.garbarino.com/api/checkout/load-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/confirm", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891663.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891663; DOMAIN=www.garbarino.com");

	web_submit_data("confirm_2", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/confirm", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/confirm", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"{JVS_01}\",\"checker\":{\"items\":\"{JVS_02}\",\"total\":\"{JVS_03}\"},\"payload\":{}}", ENDITEM,
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891666.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891666; DOMAIN=www.garbarino.com");

	web_url("177399b5-5eea-488c-9711-53270aca9ad0", 
		"URL=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/{JVS_01}/confirm", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891667.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		LAST);

	web_url("177399b5-5eea-488c-9711-53270aca9ad0_2", 
		"URL=https://www.garbarino.com/api/user/order/177399b5-5eea-488c-9711-53270aca9ad0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891668.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891668; DOMAIN=www.garbarino.com");

	web_url("4120", 
		"URL=https://www.garbarino.com/api/user/order/177399b5-5eea-488c-9711-53270aca9ad0/refresh-delivery-eta/4120", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/177399b5-5eea-488c-9711-53270aca9ad0", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712891587.1.1.1712891672.0.0.0; DOMAIN=www.garbarino.com");

	web_url("phone-countries_2", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1498693455.1712891588.1531208777.1712891595.1712891672; DOMAIN=www.garbarino.com");

	web_custom_request("logout", 
		"URL=https://www.garbarino.com/api/user/logout", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("www.garbarino.com_2", 
		"URL=https://www.garbarino.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/user/account", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}