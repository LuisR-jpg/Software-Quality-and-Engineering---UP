Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=123", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(6);

	web_url("www.garbarino.com", 
		"URL=https://www.garbarino.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/Roboto-Regular.6887b6f2.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/materialdesignicons-webfont.62ff6e3a.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/NunitoSans-Regular.e9346522.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/fonts/OpenSans-Regular.bfdb5bc0.woff2", "Referer=https://d2eebw31vcx88p.cloudfront.net/garbarino/static-v-shop/1712256370368/css/v-shop.9bd2deec.css", ENDITEM, 
		"Url=https://cdn.webpushr.com/app.min.js", ENDITEM, 
		"Url=/webpushr-sw.js", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-3SQN45GM23", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIzLjAuNjMxMi4xMDcSGQnjFemd-Nrk9hIFDULauvchHR2Oky1DQF0SIAkHTLnezRl6kxIFDXhvEhkSBQ3OQUx6ISJyyOgA90SpEhkJTipy9SV1F30SBQ2LxHTDIc4BXnHb30D5?alt=proto", "Referer=", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/e0bc99d42f591f70c5a93da61fd5d46e546f4d23.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/eb439b150b42351ecceaa1b45e430f8fec6be794.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/a49213b739e5ef9369c8a804e3920afc54448fa8.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/c6ec786930f22b4e33d84616bb015b6b071f4f9e.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/21f19c8a60c84684b348c65f0ee137d4a6f424dc.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/f91ef15dcd387bc806c6ee8f5f3db5fdfa0da12e.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/d794cbbfd49819ec77bfd56a3375e4d8a33ee145.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/caa6c3fb53bc2f18d6c489d6af9ceec17425fa5d.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/8f1f8ef88e94c047643a9254dda8528ddeea0c56.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/2235838f637455f618f6847ccc26b6a844bfa67f.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/33c5d7c6bebcdd072b9fcbd0c0c8996da9994c50.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/283a39c25c7c4cde94383ce1cbf0fc50376d1f6f.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/e45e29050c435ab0b6ac146ac8f5543f98364273.jpg.webp", ENDITEM, 
		"Url=https://www.google.com.mx/pagead/1p-user-list/11059668143/?random=1712887266516&cv=11&fst=1712887200000&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&tiba=Garbarino&frm=0&npa=0&data=event%3Dpage_view&fmt=3&is_vtc=1&cid=CAQSGwB7FLtqf6gOnauDoQfrpotYbV_yFXaaO_DI3g&random=2446108281&rmt_tld=1&ipr=y", ENDITEM, 
		"Url=https://www.google.com.mx/pagead/1p-user-list/11059668143/?random=1712887266526&cv=11&fst=1712887200000&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2F&frm=0&tiba=Garbarino&value=9549119&currency_code=ARS&npa=0&data=event%3Dview_item_list&fmt=3&is_vtc=1&cid=CAQSGwB7FLtq3jjwEnExn38reiFXzpS8VpRKyRQTUA&random=3638479689&rmt_tld=1&ipr=y", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/87cb1d366d6b0b272ab2d4ff38d1f096e0c53598.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/1442e28699b062932784e36dce1c796a2e2ece11.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/3cb991672d400ccc687457a6cb4a595de4739e29.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/866ff49ae1ea889d29b7e41574da148ef2f5220b.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/726bd3ef66f2dc46cfded25204368083dd332866.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/06c064b9aba51c3b690be7f426415367b00092c8.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/b6f024f009a2f9ce62c8cd2afc0c17f38461c7db.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/0a33852a228358a8286921bc659838ec658385b0.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7b56eac94fb38453ffb54453e91b78a3c6296676.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/35c1ff440b470e625c910b0f7d2f88f5fec0e744.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/dfde1e8a197df62f9ed6aa791756b85fe9fb603c.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/c5c4d569c59d98e04382a87cf8390a2be1a57504.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/874d98dd16d115f9cde757a65e935dac80238e69.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/4fb9ce42571f177dae899fca0f6e221307100bc0.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/0039f21c21b8e66edf94e60ba5b1032db4563196.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/0aea5e93d943ce3224bed36bf1df4a7d5075fbcc.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/26c2e1e67403fa1b443c63bffba4057d34de9a6f.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/ac2ec8694c6c0ffed9ce6f9405de4d0bfede70a0.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/73fe98cd3dd621d4e97ad1445059d1c238675cb0.jpg.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/d0ac60e2fa4a5de40a97f0e1484485b61ba5c7fe.png.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/06b85dd6e02fea521106a63753cceaff3ba56d38.png.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/dfa54b4a15d8a9d067964188984b9b85405237fe.png.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/7f86f7d8feee2add62c53a3392f8028c8ba5b32a.png.webp", ENDITEM, 
		"Url=https://d2eebw31vcx88p.cloudfront.net/garbarino/uploads/c4858c210134f297bb1ce0976e96fcecf06f5c83.png.webp", ENDITEM, 
		"Url=https://externalassets.icommarketing.com/icomMkt_tracking_jquery.min.js", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712887260750&gcd=13l3l3l3l1&npa=0&dma=0&cid=2077486026.1712887266&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&_s=1&dt=Garbarino&dl=https%3A%2F%2Fwww.garbarino.com%2F&sid=1712887266&sct=1&seg=0&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&tfd=9633", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-3SQN45GM23&gtm=45je44a0v9138474532za200&_p=1712887260750&gcd=13l3l3l3l1&npa=0&dma=0&cid=2077486026.1712887266&ul=es-419&are=1&pscdl=noapi&_geo=1&_rdi=1&cu=ARS&sid=1712887266&sct=1&seg=0&dl=https%3A%2F%2Fwww.garbarino.com%2F&dt=Garbarino&_s=2&tfd=10339", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=view_item_list&_ee=1&pr1=afDrubbit~idSASMG990EZAAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20Graph%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~idSASMF946BLBLAR~nmSamsung%20Galaxy%20Z%20Fold5%205G%20Dual-SIM%20256%20GB%20%2F%2012%20GB%20RAM%20Blue~"
		"pr2595000~ds864999~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%202595000.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~"
		"v0ARS~c5ARS%201001900.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~idSASMF731BZAKAR~"
		"nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201489200.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~idSASMG990EZWAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id907_185_ME-S518-AR-V-TDF~nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id112_001_CEL003~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00"
		"~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20257499.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&"
		"epn.value=9549119\r\nen=view_item_list&_ee=1&pr1=afDrubbit~idSASMG990EZAAR~nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20Graph%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp0&pr2=afDrubbit~idSASMF946BLBLAR~"
		"nmSamsung%20Galaxy%20Z%20Fold5%205G%20Dual-SIM%20256%20GB%20%2F%2012%20GB%20RAM%20Blue~pr2595000~ds864999~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%202595000.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~idSASMS711BLGLAR~nmSamsung%20Galaxy%20S23%20FE%205G%20Fan%20Edition%20128%20GB%2F8%20GB%20RAM%20Menta~pr1001900~ds163099~qt1~brSamsung~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201001900.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~idSASMS918BZGMAR~nmSamsung%20Galaxy%20S23%20Ultra%20256%20GB%20Green%20SM-S918BZGM~pr1742400~ds677599~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201742400.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~idSASMF731BZAKAR~nmSamsung%20Galaxy%20Z%20Flip5%205G%20Dual-SIM%20512%20GB%20%2F%208%20GB%20RAM%20Graphit~pr1489200~ds700799~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%201489200.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~idSASMG990EZWAR~"
		"nmSamsung%20Galaxy%20S21%20FE%205G%20128%20GB%20%2F%206%20GB%20RAM%20White%20Fan%20Edition~pr827090~ds305909~qt1~brSamsung~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20827090.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~id907_185_ME-S518-AR-V-TDF~nmCelular%20Quantum%20Q-Test%205%2C45%22%20Octa-Core%2032%2F1GB%20Android%2011%20Violeta~pr71999~ds99000~qt1~breNOVA~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%2071999.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id907_185_S509N-AR-TDF-NEG~nmCelular%20Quantum%20YOLO%203G%205%22%2032GB%20Android%20Go%20Negro~pr118449~ds84050~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20118449.00~"
		"li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~id112_001_CEL007~nmCelular%20Quantum%20Q30%206%2C5%22%204G%20Octa-Core%206%2F128%20GB%2048%2B5%2B2%2F8%0AMP%20Android%2012%20Negro~pr257499~ds0~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~"
		"c5ARS%20257499.00~li156-Celulares%3A%206%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=9549119\r\nen=view_item_list&_ee=1&pr1=afDrubbit~id114_001_TV012~nmSmart%20TV%20Skyworth%2065%22%20LED%204K%20UHD%20Frameless%20Android%20TV~pr710062~ds602437~qt1~brSkyworth~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Televisi%C3%B3n~c3Smart%20Tv~k0currencyIso~v0ARS~c5ARS%20710062.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp0&pr2="
		"afDrubbit~id114_001_MIX000~nmMixer%20Philips%20HR2530%2F50%20400%20W%20Varilla%20Pl%C3%A1stico~pr52002~ds2997~qt1~brPhilips~caElectrodom%C3%A9sticos~c2Peque%C3%B1os%20Electrodom%C3%A9sticos~c3Mixers~k0currencyIso~v0ARS~c5ARS%2052002.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp1&pr3=afDrubbit~id114_001_AUR021~nmAuriculares%20Motorola%20Buds%20In%20Ear%20085%20Blanco~pr51999~ds24000~qt1~brMotorola~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Audio~c3Auriculares~k0currencyIso~v0ARS~"
		"c5ARS%2051999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp2&pr4=afDrubbit~id112_001_LAVA012~nmLavarropas%20Carga%20Frontal%206%20Kg%20Blanco%20Drean~pr599999~ds44399~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20599999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp3&pr5=afDrubbit~id114_001_TAB000~nmTablet%20eNova%208%22%20WIFI%202GB%2032GB%20Android%2012%20Negro~pr104704~ds5591.99~qt1~breNOVA~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Inform%C3%A1tica~c3Tablets~k0currencyIso~v0ARS~c5ARS%20104704.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp4&pr6=afDrubbit~id114_001_TV018~nmSmart%20Tv%20Motorola%2091MT50G22%2050%20Led%204k%20Uhd%20Android%20Tv%20Google~pr600021~ds25978~qt1~brMotorola~caSmart%20Tv%2C%20Audio%20Y%20Video~c2Televisi%C3%B3n~c3Smart%20Tv~k0currencyIso~v0ARS~c5ARS%20600021.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp5&pr7=afDrubbit~"
		"id112_001_CEL003~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Azul~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp6&pr8=afDrubbit~id114_001_CAF008~nmCafetera%20el%C3%A9ctrica%20Black%20and%20Decker%20CM0941B-AR%2012%20Pocillos~pr49302~ds598~qt1~brBlack%20%26%20Decker~"
		"caElectrodom%C3%A9sticos~c2Peque%C3%B1os%20Electrodom%C3%A9sticos~c3Cafeteras~k0currencyIso~v0ARS~c5ARS%2049302.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp7&pr9=afDrubbit~id114_001_LAVA008~nmLavarropas%20Enova%20carga%20vertical%205%20Kg%20blanco~pr509999~ds0~qt1~breNOVA~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20509999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp8&pr10=afDrubbit~id112_001_CEL008~"
		"nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp9&pr11=afDrubbit~id114_001_CEL008~nmCelular%20Quantum%20Q20%204G%206%2C1%22%20Octa-Core%20128%2F4GB%2013%2B5MP%0AAndroid%2010%20Blanco~pr206164~ds34625~qt1~brQuantum~"
		"caCelulares%2C%20Notebooks%20Y%20Tecnolog%C3%ADa~c2Celulares%20Y%20Tel%C3%A9fonos~c3Celulares%20Libres~k0currencyIso~v0ARS~c5ARS%20206164.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp10&pr12=afDrubbit~id112_001_LAVA013~nmLavarropas%20Carga%20Frontal%208%20Kg%20Blanco%20Drean~pr736999~ds0~qt1~brDrean~caElectrodom%C3%A9sticos~c2Lavado~c3Lavarropas%20Autom%C3%A1ticos~k0currencyIso~v0ARS~c5ARS%20736999.00~li168-Super%20Precios%20y%20cuotas%20sin%20inter%C3%A9s~lp11&ep.device_type="
		"desktop&ep.site_context=Contexto%20predeterminado&epn.value=4033579\r\nen=view_item_list&_ee=1&pr1=afDrubbit~id907_185_ETRDI53TC~nmAire%20Acondicionado%20Electra%20Inverter%20FC%20ETRDI53TC%205200W%204558%20FR~pr1261000~ds667259~qt1~brELECTRA~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Split~k0currencyIso~v0ARS~c5ARS%201261000.00~liundefined-ProductsCarouselUnified~lp0&pr2=afDrubbit~id911_275_VP20P~nmVentilador%20De%20Pie%20Liliana%2020%22%20%20VP20P%2090W%20Negro~"
		"pr84499~ds54167~qt1~brLiliana~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20A%20Le%C3%B1a~k0currencyIso~v0ARS~c5ARS%2084499.00~liundefined-ProductsCarouselUnified~lp1&pr3=afDrubbit~id907_185_323572~nmEstufa%20Sin%20Salida%20Coventry%20MINI%207500%20COV%20Gas%20Natural%20Gris~pr257500~ds117499~qt1~brCoventry~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20El%C3%A9ctrica~k0currencyIso~v0ARS~c5ARS%20257500.00~liundefined-ProductsCarouselUnified~lp2&pr4="
		"afDrubbit~id907_185_ME-551IDQ1201F~nmAire%20Acondicionado%20Portatil%20Surrey%20551IDQ1201F%20F%2FC%203000F~pr669499~ds275500~qt1~brSurrey~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Ventana%20Y%20Portatil~k0currencyIso~v0ARS~c5ARS%20669499.00~liundefined-ProductsCarouselUnified~lp3&pr5=afDrubbit~id910_1_23249~nmVENTILADOR%20DE%20TECHO%20LAFTDREN%20361A%203%20VELOCIDADES%20LED%2024W%20BLANCO~pr835749~ds0~qt1~brLAFTDREN~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~"
		"c3Ventiladores~c4De%20Techo~k0currencyIso~v0ARS~c5ARS%20835749.00~liundefined-ProductsCarouselUnified~lp4&pr6=afDrubbit~id238104031~nmVentilador%20Turbo%20Yelmo%20Tornado%2020%20Pulgadas%205%20Aspas%203vel%20100w~pr119999~ds0~qt1~brYELMO~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Mesa~k0currencyIso~v0ARS~c5ARS%20119999.00~liundefined-ProductsCarouselUnified~lp5&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=3228246\r\nen=view_item_list&_ee=1&pr1"
		"=afDrubbit~id907_185_ETRDI53TC~nmAire%20Acondicionado%20Electra%20Inverter%20FC%20ETRDI53TC%205200W%204558%20FR~pr1261000~ds667259~qt1~brELECTRA~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Split~k0currencyIso~v0ARS~c5ARS%201261000.00~liundefined-ProductsCarouselUnified~lp0&pr2=afDrubbit~id911_275_VP20P~nmVentilador%20De%20Pie%20Liliana%2020%22%20%20VP20P%2090W%20Negro~pr84499~ds54167~qt1~brLiliana~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~"
		"c3Calefacci%C3%B3n%20A%20Le%C3%B1a~k0currencyIso~v0ARS~c5ARS%2084499.00~liundefined-ProductsCarouselUnified~lp1&pr3=afDrubbit~id907_185_323572~nmEstufa%20Sin%20Salida%20Coventry%20MINI%207500%20COV%20Gas%20Natural%20Gris~pr257500~ds117499~qt1~brCoventry~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Calefacci%C3%B3n%20El%C3%A9ctrica~k0currencyIso~v0ARS~c5ARS%20257500.00~liundefined-ProductsCarouselUnified~lp2&pr4=afDrubbit~id907_185_ME-551IDQ1201F~"
		"nmAire%20Acondicionado%20Portatil%20Surrey%20551IDQ1201F%20F%2FC%203000F~pr669499~ds275500~qt1~brSurrey~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Aires%20Acondicionado%20Ventana%20Y%20Portatil~k0currencyIso~v0ARS~c5ARS%20669499.00~liundefined-ProductsCarouselUnified~lp3&pr5=afDrubbit~id910_1_23249~nmVENTILADOR%20DE%20TECHO%20LAFTDREN%20361A%203%20VELOCIDADES%20LED%2024W%20BLANCO~pr835749~ds0~qt1~brLAFTDREN~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Techo~"
		"k0currencyIso~v0ARS~c5ARS%20835749.00~liundefined-ProductsCarouselUnified~lp4&pr6=afDrubbit~id238104031~nmVentilador%20Turbo%20Yelmo%20Tornado%2020%20Pulgadas%205%20Aspas%203vel%20100w~pr119999~ds0~qt1~brYELMO~caElectrodom%C3%A9sticos~c2Climatizaci%C3%B3n~c3Ventiladores~c4De%20Mesa~k0currencyIso~v0ARS~c5ARS%20119999.00~liundefined-ProductsCarouselUnified~lp5&ep.device_type=desktop&ep.site_context=Contexto%20predeterminado&epn.value=3228246", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga=GA1.1.2077486026.1712887266; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.0.1712887267.0.0.0; DOMAIN=www.garbarino.com");

	lr_think_time(23);

	web_submit_data("shop", 
		"Action=https://www.garbarino.com/api/catalog/shop", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"filters\":[\"celulares-notebooks-y-tecnologia\",\"celulares-y-telefonos\",\"celulares-libres\"],\"page\":1}", ENDITEM, 
		LAST);

	/* Case_g01_01_look_cellphone  */

	lr_start_transaction("Case_g01_01_look_cellphone");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=14:HpjNSgSauqrMoutZG1qLk9Gs5UReM8-HROMYDRmugQM&cup2hreq=34190caff8741591061fcc3eef07ec9e92d41fe32ef3008a5b4232deeafb9c9f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"accept_locale\":\"ES419500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:2anf@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{3422e57f-e1df-46c7-ad87-96f0c751d1c8}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":"
		"\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0312d42f5f3877a12e6f5da85001549cd9dd435debf72aee5652d1f6a550d351\"}]},\"ping\":{\"ping_freshness\":\"{6f4e5145-6cf9-43c4-ac57-8b3da0a2cf19}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"442\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\""
		"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{09f5a0db-a17b-4cdc-9582-70846ffd1733}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{67e54dbf-b62d-4688-a39b-8efc2e403e5e}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{051d7053-66c9-41b9-be1c-8b3641bf2042}\",\"rd\":6310},\"updatecheck\":{"
		"},\"version\":\"4.10.2710.0\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{6c3c8c19-4223-4285-bc87-963814bcf9a2}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l"
		":\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{81cacc66-d391-4cf8-9605-0d0d41a009f5}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\""
		",\"packages\":{\"package\":[{\"fp\":\"1.317672878e66fe3117c5c27c1c7b2bacc00f60863e1a6bebf0a7ffe43353b08b\"}]},\"ping\":{\"ping_freshness\":\"{6efb6341-2272-45fd-81b9-3383f0b371e0}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"ping\":{\"ping_freshness\":\"{b3da0d54-3b07-4698-acf6-f23097b1d6ae}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f9e33fa1309505c2b29bbd72b5d5cf48375d1f329ea5efbf1abed40bd4f62fb5\"}]},\"ping\":{\"ping_freshness\":\"{25525818-cdba-4c72-a00e-58fb8fff581c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"8662\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{f47bc250-4eed-44a4-89bb-bbe5045f71df}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.90b91aaa463ef666bf030c7f14b7046738dee86d64321b28cb834d04bbfea4b3\"}]},\"ping\":{\"ping_freshness\":\"{86c73235-7510-4331-9c54-cf763cea3435}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.3.25.1\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":"
		"\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{2bc3bf63-5c5c-4997-bd7f-140932ca2f40}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\""
		"ping_freshness\":\"{cfe0bb25-2336-4776-b162-0da77bd70b8d}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{71e06fe6-6066-443d-86f3-a5a554e4751f}\",\"rd\":6310},\""
		"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.0bd20c0ed22291b160114420a22e8ae9fd79a002cff2efdff99285f35a15f629\"}]},\"ping\":{\"ping_freshness\":\"{f990f6d8-4fe0-4eca-b952-4b206f41fd2c}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3026\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh"
		"\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{b1263bf9-0c3c-4dfd-a749-a60c1b3928a7}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{a8f1afba-6cc4-4986-a3c8-30c12eea3901}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\""
		"1.bd890442b581ed9e10f8f1357de6b3ba6225fd80ba5402ea4e54a1619302c0ed\"}]},\"ping\":{\"ping_freshness\":\"{0c6d1470-1a41-4d85-989b-1fc7d3e64ae7}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"921\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6174,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.2224fd8b6488a5197111194ab074a6d83292959c5ea7f034f46cc51e8a280a50\"}]},\"ping\":{\""
		"ping_freshness\":\"{88b8807e-cced-4ba3-b7df-3a90e37edb70}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.4.10.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{6b3ad7f2-1628-4b34-9f35-6bbae930be5c}\",\"rd\":6310},\"updatecheck\":"
		"{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5936,\"lang\":\"es-419\",\"packages\":{\"package\":[{\"fp\":\"1.120a8783d5ccfe1107dea29a51959fbbebbe1d57ad974dc9ee5b65323c90dab4\"}]},\"ping\":{\"ping_freshness\":\"{ca80089b-19de-49d6-a3c3-02c63b68846e}\",\"rd\":6310},\"updatecheck\":{},\"version\":\"2024.3.27.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\""
		":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.3296\"},\"prodversion\":\"123.0.6312.107\",\"protocol\":\"3.1\",\"requestid\":\"{00a3d8a4-9338-4848-966a-516da3be62c4}\",\"sessionid\":\"{dc32729e-0f8e-4639-b17b-a638ca1ffcdd}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\""
		"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"123.0.6312.107\"}}", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887294.0.0.0; DOMAIN=www.garbarino.com");

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"URL=https://www.garbarino.com/api/catalog/product/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/celulares-notebooks-y-tecnologia/celulares-y-telefonos/celulares-libres", 
		"Snapshot=t58.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"qty\":1,\"refType\":\"product\",\"refId\":\"ca1f04f6-2e49-487f-8ba7-5a34c233e174\",\"customization\":{},\"sum\":true}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887346.0.0.0; DOMAIN=www.garbarino.com");

	web_url("20e16b85-a660-4d74-b87e-c9cecb9de043_2", 
		"URL=https://www.garbarino.com/api/catalog/product-upsells/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/p/samsung-galaxy-z-fold5-5g-dual-sim-256-gb-12-gb-ram-blue/20e16b85-a660-4d74-b87e-c9cecb9de043", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload", 
		"URL=https://beacons.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t61.inf", 
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
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t62.inf", 
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
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/init", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887365.0.0.0; DOMAIN=www.garbarino.com");

	web_submit_data("signin", 
		"Action=https://www.garbarino.com/api/checkout/load-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t64.inf", 
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
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"http_response_code\":200,\"network_changed\":false,\"protocol\":\"HTTP\",\"request_age_ms\":71263,\"request_elapsed_ms\":1239,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://beacons.gvt2.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_custom_request("upload_4", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t66.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"email\":\"nalado4430@kravify.com\",\"password\":\"nalado4430\"}", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("upload_5", 
		"URL=https://beacons.gcp.gvt2.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"failure_data\":{\"custom_error\":\"net::ERR_CERT_COMMON_NAME_INVALID\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":62167,\"request_elapsed_ms\":109,\"sample_rate\":1.0,\"server_ip\":\"\",\"status\":\"ssl.cert.name_invalid\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false},{\"failure_data\":{\"custom_error\":\"net::ERR_ABORTED\"},\"network_changed\":false,\"protocol\":\"\",\"request_age_ms\":1814,\"request_elapsed_ms\":1108,\"sample_rate\""
		":1.0,\"server_ip\":\"\",\"status\":\"aborted\",\"url\":\"https://accounts.google.com/\",\"was_proxied\":false}],\"reporter\":\"chrome\"}", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887428; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887428.0.0.0; DOMAIN=www.garbarino.com");

	web_url("products-ids", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("signin_3", 
		"Action=https://www.garbarino.com/api/checkout/submit-step/signin", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/signin", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{}}", ENDITEM, 
		LAST);

	web_submit_data("discount", 
		"Action=https://www.garbarino.com/api/checkout/load-step/discount", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/discount", 
		"Snapshot=t71.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/discount", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"},\"payload\":{\"noCode\":true}}", ENDITEM, 
		LAST);

	web_submit_data("delivery", 
		"Action=https://www.garbarino.com/api/checkout/load-step/delivery", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t73.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t74.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/delivery", 
		"Snapshot=t75.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/payment", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"532fb16585530542f5114f7cc7d237efdd888f20\"}}", ENDITEM, 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIzLjAuNjMxMi4xMDcaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDklxYaAhgJbkv8vSIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQqJUOGgIYCfgAioUiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABELeMDhoCGAl-ujmkIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCZuAcaAhgJKn7d0SIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0DgaAhgJ_JX3-iIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQwdUCGgIYCekjsy8iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDvFRoCGAmSW9NwIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCflgIaAhgJ-ZaYdSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQzdsOGgIYCc0geewiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEPEiGgIYCXCDoVgiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_end_transaction("Case_g01_06_delivery_address",LR_AUTO);

	web_custom_request("upload-nel", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("upload-nel_2", 
		"URL=https://beacons2.gvt2.com/domainreliability/upload-nel", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t78.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/payment", 
		"Snapshot=t79.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"}}", ENDITEM, 
		LAST);

	web_url("11059668143", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712887512149&cv=11&fst=1712887512149&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F5429d885111a8e70e352e219de8d032b96daabbd%2Fpayment&hn=www.googleadservices.com&frm=0&tiba=Elige%20la%20forma%20de%20pago%20%7C%20Checkout%20%7C%20Garbarino&value=2465250.04&currency_code=ARS&userId=47128&npa=0&pscdl=noapi&auid=1268100167.1712887266&uaa=x86&"
		"uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&fledge=1&shf=0&data=event%3Dadd_payment_info%3Baffiliation%3DDrubbitShop%20(https%3A%2F%2Fwww.garbarino.com)%3Bshipping%3D0%3Bshipping_tier%3DShipping-envio_visuar%3Bpayment_type%3DWireTransfer", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887512; DOMAIN=www.garbarino.com");

	web_url("phone-countries", 
		"URL=https://www.garbarino.com/api/user/phone-countries", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_url("11059668143_2", 
		"URL=https://td.doubleclick.net/td/rul/11059668143?random=1712887512484&cv=11&fst=1712887512484&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45je44a0v9138474532za200&gcd=13l3l3l3l1&dma=0&u_w=1536&u_h=864&url=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F__HASH__%2Fcontact&top=https%3A%2F%2Fwww.garbarino.com%2Fcheckout%2F5429d885111a8e70e352e219de8d032b96daabbd%2Fcontact&tiba=Contacto%20y%20Facturaci%C3%B3n%20%7C%20Checkout%20%7C%20Garbarino&hn=www.googleadservices.com&frm=0&userId=47128&npa=0&pscdl=noapi&"
		"auid=1268100167.1712887266&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B123.0.6312.107%7CNot%253AA-Brand%3B8.0.0.0%7CChromium%3B123.0.6312.107&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&fledge=1&data=event%3Dpage_view", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/", 
		"Snapshot=t83.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/contact", 
		"Snapshot=t84.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"}}", ENDITEM, 
		LAST);

	lr_end_transaction("Case_g01_08_billing_information",LR_AUTO);

	lr_think_time(6);

	web_custom_request("upload-nel_3", 
		"URL=https://beacons3.gvt2.com/domainreliability/upload-nel", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t86.inf", 
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
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=data_json", "Value={\"hash\":\"5429d885111a8e70e352e219de8d032b96daabbd\",\"checker\":{\"items\":\"42b8ef1fee24ee52a15a95a5465bed4b13d8b4a5\",\"total\":\"4b4e704f4d3c8e2b93504f38bda7e96e68d340cb\"},\"payload\":{}}", ENDITEM, 
		LAST);

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887567.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887567; DOMAIN=www.garbarino.com");

	web_add_cookie("_ga_3SQN45GM23=GS1.1.1712887266.1.1.1712887568.0.0.0; DOMAIN=www.garbarino.com");

	web_add_cookie("_gcl_au=1.1.1268100167.1712887266.404485713.1712887418.1712887568; DOMAIN=www.garbarino.com");

	web_url("1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"URL=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.garbarino.com/checkout/5429d885111a8e70e352e219de8d032b96daabbd/confirm", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/webpushr-sw.js", ENDITEM, 
		LAST);

	web_url("products-ids_2", 
		"URL=https://www.garbarino.com/api/catalog/wishlist/products-ids", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_url("1ee470a2-c755-42d3-b95a-bef0a26be671_2", 
		"URL=https://www.garbarino.com/api/user/order/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4111", 
		"URL=https://www.garbarino.com/api/user/order/1ee470a2-c755-42d3-b95a-bef0a26be671/refresh-delivery-eta/4111", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.garbarino.com/user/orders/1ee470a2-c755-42d3-b95a-bef0a26be671", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Case_g01_09_confirm_purchase",LR_AUTO);

	return 0;
}