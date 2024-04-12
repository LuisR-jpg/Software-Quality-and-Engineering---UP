Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_cache_cleanup();
	web_cleanup_cookies();
	//web_set_sockets_option("SSL_VERSION", "TLS");
	
	/* Menu */

	lr_start_transaction("Case_g01_01_URL");
	
	web_url("Home", 
		"URL=http://www.mercury-tours.com/", 
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

	web_reg_find("Text=Mercury Tours Home Page",LAST);

	lr_end_transaction("Case_g01_01_URL",LR_AUTO);
	
	lr_think_time(10);

	/* Our coaches */
	
	lr_start_transaction("Case_g01_02_Our-Coaches");

	web_url("Our_Coaches.html", 
		"URL=http://www.mercury-tours.com/Our_Coaches.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.mercury-tours.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	//web_reg_find("Text=Seat Buses",LAST);

	lr_end_transaction("Case_g01_02_Our-Coaches",LR_AUTO);
	
	lr_think_time(10);

	/* Contact Us */

	lr_start_transaction("Case_g01_03_Contact-Us");

	web_url("Contact_Us.html", 
		"URL=http://www.mercury-tours.com/Contact_Us.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.mercury-tours.com/Our_Coaches.html", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=email or fax",LAST);
	
	lr_think_time(5);

	lr_end_transaction("Case_g01_03_Contact-Us",LR_AUTO);

	lr_think_time(10);
	
	/* San Franscisco Tours */

	lr_start_transaction("Case_g01_04_San-Franscisco-Tours");

	web_link("San Franscisco Tours", 
		"Text=San Franscisco Tours", 
		"Snapshot=t7.inf", 
		LAST);
	
	web_reg_find("Text=The Golden Gate Bridge",LAST);

	lr_end_transaction("Case_g01_04_San-Franscisco-Tours",LR_AUTO);

	lr_think_time(10);
	
	/* Specialized Tours */

	lr_start_transaction("Case_g01_05_Specialized-Tours");

	web_link("Specialized Tours", 
		"Text=Specialized Tours", 
		"Snapshot=t8.inf", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIzLjAuNjMxMi4xMDYaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARC7_hMaAhgJzRx8miIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQybYNGgIYCX-mRToiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEPStDRoCGAmFE7YwIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCXpgcaAhgJt7JzJSIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQkTYaAhgJMlYjlCIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQtPkBGgIYCYuc1L8iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgJ6qKaVyIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAmL0zudIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARDfFBoCGAnkzSkpIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCYgwIaAhgJHB8KIyIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQhv0NGgIYCXx7bX8iBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEI0fGgIYCQ6Bm1kiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);
	
	web_reg_find("Text=The Wine Country",LAST);

	lr_end_transaction("Case_g01_05_Specialized-Tours",LR_AUTO);
	
	lr_think_time(10);

	/* More of Where We Go */

	lr_start_transaction("Case_g01_06_More-Of-Where-We-Go");

	web_url("More%20of%20Where%20we%20Go.html", 
		"URL=http://www.mercury-tours.com/More%20of%20Where%20we%20Go.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.mercury-tours.com/Specialized_Tours.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=Where We go",LAST);
	
	/* Return to Specialized Tours */

	web_url("Specialized_Tours.html_2", 
		"URL=http://www.mercury-tours.com/Specialized_Tours.html", 
		"Resource=0", 
		"Referer=http://www.mercury-tours.com/More%20of%20Where%20we%20Go.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_find("Text=The Wine Country",LAST);

	lr_end_transaction("Case_g01_06_More-Of-Where-We-Go",LR_AUTO);

	return 0;
}