Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=123", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("login", 
		"URL=https://app.platica.mx/login/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTIzLjAuNjMxMi41OBIgCTB8XRVEF8p0EgUNg6hbPRIFDc5BTHohCmYoX6ZH_GA=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* Registrate aqui */

	return 0;
}