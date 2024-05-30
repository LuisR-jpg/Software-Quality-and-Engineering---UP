#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

Action()
{
	char url[250];
	char username[50];
	char temp[500];


	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_cache_cleanup();
	web_cleanup_cookies();
	
	// CREATE ACCOUNT
	sprintf(username, "security");
	sprintf(temp, "Body={\"username\": \"%s\", \"password\": \"loadrunner\", \"email\": \"%s@gmail.com\", \"questions\": [{\"id\": \"1\", \"answer\": \"Melbourne\"}, {\"id\": \"2\", \"answer\": \"Cookie\"}]}", username, username);
	
	web_reg_find("Text=\"success\":true", LAST);

	lr_start_transaction("Consistency-Create");
    web_custom_request("Create",
        "URL=https://40.233.6.50/user/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	lr_end_transaction("Consistency-Create", LR_AUTO);
	
	
	
	// LOGIN
	sprintf(temp, "Body={ \"username\": \"%s\", \"password\": \"loadrunner\" }", username);
	
	web_reg_save_param_ex(
        "ParamName=token",
        "LB=\"token\":\"",
        "RB=\"}",
        LAST
    );
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Consistency-Login");
	
    web_custom_request("Login",
        "URL=https://40.233.6.50/user/login",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	
	lr_end_transaction("Consistency-Login", LR_AUTO);
	
	web_add_auto_header("Authorization", "Bearer {token}");
	
	
	// Test this	
	strcpy(url, "URL=https://40.233.6.50/credential/1");
	web_reg_find("Text=\"message\":\"No entries found\"", LAST);
	lr_start_transaction("Consistency-Get-credential");
    web_custom_request("Get-credential",
        url,
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Consistency-Get-credential", LR_AUTO);
	

	
	
	// DELETE ACCOUNT	
	web_reg_find("Text=\"success\":true", LAST);
	
	lr_start_transaction("Consistency-Delete-account");
    
	web_custom_request("Delete",
        "URL=https://40.233.6.50/user/",
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	
	lr_end_transaction("Consistency-Delete-account", LR_AUTO);
	
	web_remove_auto_header("Authorization", "ImplicitGen=Yes");
	
	return 0;
}