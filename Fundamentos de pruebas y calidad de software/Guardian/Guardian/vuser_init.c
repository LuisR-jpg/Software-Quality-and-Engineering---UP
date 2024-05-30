#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

vuser_init()
{
	char url[250];
	char username[50];
	char temp[500];
	
	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_cache_cleanup();
	web_cleanup_cookies();
	
	// CREATE ACCOUNT
	sprintf(username, "loadrunner_performance");
	sprintf(temp, "Body={\"username\": \"%s\", \"password\": \"loadrunner\", \"email\": \"%s@gmail.com\", \"questions\": [{\"id\": \"1\", \"answer\": \"Melbourne\"}, {\"id\": \"2\", \"answer\": \"Cookie\"}]}", username, username);
	
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Performance-Create");
    web_custom_request("Create",
        "URL=https://api.guardian.4736251.xyz/user/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	lr_end_transaction("Performance-Create", LR_AUTO);
	
	// LOGIN
	web_reg_save_param_ex(
        "ParamName=token",
        "LB=\"token\":\"",
        "RB=\"}",
        LAST
    );
	sprintf(temp, "Body={ \"username\": \"%s\", \"password\": \"loadrunner\" }", username);
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Performance-Login");
    web_custom_request("Login",
        "URL=https://api.guardian.4736251.xyz/user/login",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	lr_end_transaction("Performance-Login", LR_AUTO);
	
	web_add_auto_header("Authorization", "Bearer {token}");
	
	return 0;
}
