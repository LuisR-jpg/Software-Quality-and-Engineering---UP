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
	
	// IS SERVER ALIVE
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_01-Alive");
	web_url("Alive",
	    "URL=https://40.233.6.50/misc/",
		"RecContentType=application/json", 
		"Mode=HTML", 
		LAST
	);
	lr_end_transaction("Whole_workflow_01-Alive", LR_AUTO);
	
	// FETCH ALL QUESTIONS
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_02-Questions");
	web_url("Questions", 
		"URL=https://40.233.6.50/user/questions", 
		"RecContentType=application/json", 
		"Mode=HTML", 
		LAST
	);
	lr_end_transaction("Whole_workflow_02-Questions", LR_AUTO);
	
	// CREATE ACCOUNT
	sprintf(username, "loadrunner_%s", lr_eval_string("{user_id}"));
	sprintf(temp, "Body={\"username\": \"%s\", \"password\": \"vugen\", \"email\": \"%s@gmail.com\", \"questions\": [{\"id\": \"1\", \"answer\": \"Melbourne\"}, {\"id\": \"2\", \"answer\": \"Cookie\"}]}", username, username);
	
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_03-Create");
    web_custom_request("Create",
        "URL=https://40.233.6.50/user/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	lr_end_transaction("Whole_workflow_03-Create", LR_AUTO);
	
	// USER QUESTIONS
	sprintf(temp, "URL=https://40.233.6.50/user/questions?user=%s", username);
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_04-User-Questions");
	web_url("User-Questions", 
		temp,
		"RecContentType=application/json", 
		"Mode=HTML", 
		LAST
	);
	lr_end_transaction("Whole_workflow_04-User-Questions", LR_AUTO);
	
	// UPDATE PASSWORD - Two ways
	sprintf(temp, "Body={\"email\": \"%s@gmail.com\", \"old_password\": \"vugen\", \"new_password\": \"loadrunner\"}", username);
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_05-Update-Password");
	web_custom_request("Update-Password",
        "URL=https://40.233.6.50/user/password",
        "Method=PUT",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	lr_end_transaction("Whole_workflow_05-Update-Password", LR_AUTO);
	
	// LOGIN
	web_reg_save_param_ex(
        "ParamName=token",
        "LB=\"token\":\"",
        "RB=\"}",
        LAST
    );
	sprintf(temp, "Body={ \"username\": \"%s\", \"password\": \"loadrunner\" }", username);
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_06-Login");
    web_custom_request("Login",
        "URL=https://40.233.6.50/user/login",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        temp,
        LAST
    );
	lr_end_transaction("Whole_workflow_06-Login", LR_AUTO);
	
	web_add_auto_header("Authorization", "Bearer {token}");
	
	// CREATE CREDENTIAL
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_07-Create-Credential");
	web_custom_request("Create-Credential",
        "URL=https://40.233.6.50/credential/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"cred_name\": \"DEV_Guardian\", \"cred_username\": \"guardian\", \"cred_password\": \"guardian_pwd\", \"cred_url\": \"guardian.com\", \"cred_comment\": \"This is my password for guardian.\"}",
        LAST
    );
	lr_end_transaction("Whole_workflow_07-Create-Credential", LR_AUTO);
    
    //	LIST CREDENTIALS
    web_reg_save_param_ex(
        "ParamName=credential_id",
        "LB=\"ID\":",
        "RB=}]",
        LAST
    );
    web_reg_find("Text=\"success\":true", LAST);
    lr_start_transaction("Whole_workflow_08-List");
    web_custom_request("List",
        "URL=https://40.233.6.50/credential/",
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Whole_workflow_08-List", LR_AUTO);
	
	// SEARCH CREDENTIALS
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_09-Search");
    web_custom_request("Search",
        "URL=https://40.233.6.50/credential/ZGV2", // ZGV2 = Base64(DEV)
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Whole_workflow_09-Search", LR_AUTO);
	

	// UPDATE CREDENTIAL
	strcpy(url, "URL=https://40.233.6.50/credential/");
	strcat(url, "{credential_id}");
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_10-Update-credential");
	web_custom_request("Update-credential",
        url,
        "Method=PUT",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"cred_name\": \"DEV_Guardian\", \"cred_username\": \"guardian\", \"cred_password\": \"guardian_pwd\", \"cred_url\": \"guardian.com\", \"cred_comment\": \"UPDATED THIS CREDENTIAL.\"}",
        LAST
    );
	lr_end_transaction("Whole_workflow_10-Update-credential", LR_AUTO);

	// GET CREDENTIAL
	strcpy(url, "URL=https://40.233.6.50/credential/");
	strcat(url, "{credential_id}");
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_11-Get-credential");
    web_custom_request("Get-credential",
        url,
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Whole_workflow_11-Get-credential", LR_AUTO);

	// DELETE CREDENTIAL
	strcpy(url, "URL=https://40.233.6.50/credential/");
	strcat(url, "{credential_id}");
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_12-Delete-credential");
    web_custom_request("Delete-credential",
        url,
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Whole_workflow_12-Delete-credential", LR_AUTO);

	// EXPORT CREDENTIALS 
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_13-Export");
    web_custom_request("m",
        "URL=https://40.233.6.50/credential/export",
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Whole_workflow_13-Export", LR_AUTO);

	// DELETE ACCOUNT	
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Whole_workflow_14-Delete-account");
    web_custom_request("Export",
        "URL=https://40.233.6.50/user/",
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Whole_workflow_14-Delete-account", LR_AUTO);
	
	web_remove_auto_header("Authorization", "ImplicitGen=Yes");
	
	return 0;
}