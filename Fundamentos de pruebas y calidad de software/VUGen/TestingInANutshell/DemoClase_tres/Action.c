Action()
{
	web_cache_cleanup();
	web_cleanup_cookies();
	web_set_sockets_option("SSL_VERSION", "TLS");
	    
	lr_vuser_status_message(lr_eval_string("Iter: {Iter}, Usuario: {Usuario}, CURP: {CURP}"));
	lr_output_message("Iter: %s, Usuario:%s, CURP:%s", lr_eval_string("{Iter}"), lr_eval_string("{Usuario}"), lr_eval_string("{CURP}"));


	web_set_sockets_option("SSL_VERSION", "AUTO");
/*
	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=123", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);
*/

	web_set_sockets_option("TLS_SNI", "0");
	web_reg_find("Text=Inicia sesi", LAST);
lr_start_transaction("01_PLATICA_REGISTER_1010_Home");

	web_url("login", 
		"URL=https://app.platica.mx/login/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		//EXTRARES, 
		//"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTIzLjAuNjMxMi41OBIgCTB8XRVEF8p0EgUNg6hbPRIFDc5BTHohCmYoX6ZH_GA=?alt=proto", "Referer=", ENDITEM, 
		LAST);

lr_end_transaction("01_PLATICA_REGISTER_1010_Home", LR_AUTO);
lr_think_time(10);

	/* Registrate aqui */
	web_reg_find("Text=Registro social", LAST);
	
lr_start_transaction("01_PLATICA_REGISTER_1020_Registrate");

	
		web_url("register", 
		"URL=https://app.platica.mx/login/register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		//EXTRARES, 
		//"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTIzLjAuNjMxMi41OBIgCTB8XRVEF8p0EgUNg6hbPRIFDc5BTHohCmYoX6ZH_GA=?alt=proto", "Referer=", ENDITEM, 
		LAST);

lr_end_transaction("01_PLATICA_REGISTER_1020_Registrate", LR_AUTO);
lr_think_time(10);

	return 0;
}