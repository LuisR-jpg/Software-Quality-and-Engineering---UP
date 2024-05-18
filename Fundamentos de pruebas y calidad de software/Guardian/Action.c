#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

Action()
{
	char url[250];
	
	// IS SERVER ALIVE
	lr_start_transaction("a_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_url("a",
	    "URL=https://40.233.6.50/misc/",
		"RecContentType=application/json", 
		"Mode=HTML", 
		LAST
	);
	lr_end_transaction("a_transaction", LR_AUTO);
	
	// FETCH ALL QUESTIONS
	lr_start_transaction("b_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_url("b", 
		"URL=https://40.233.6.50/user/questions", 
		"RecContentType=application/json", 
		"Mode=HTML", 
		LAST
	);
	lr_end_transaction("b_transaction", LR_AUTO);
	
	// CREATE ACCOUNT
	lr_start_transaction("c_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("c",
        "URL=https://40.233.6.50/user/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"username\": \"loadrunner\", \"password\": \"vugen\", \"email\": \"loadrunner@gmail.com\", \"questions\": [{\"id\": \"1\", \"answer\": \"Melbourne\"}, {\"id\": \"2\", \"answer\": \"Cookie\"}]}",
        LAST
    );
	lr_end_transaction("c_transaction", LR_AUTO);
	
	// USER QUESTIONS
	lr_start_transaction("d_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_url("d", 
		"URL=https://40.233.6.50/user/questions?user=loadrunner", 
		"RecContentType=application/json", 
		"Mode=HTML", 
		LAST
	);
	lr_end_transaction("d_transaction", LR_AUTO);
	
	// UPDATE PASSWORD - Two ways
	lr_start_transaction("e_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_custom_request("e",
        "URL=https://40.233.6.50/user/password",
        "Method=PUT",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"email\": \"loadrunner@gmail.com\", \"old_password\": \"vugen\", \"new_password\": \"loadrunner\"}",
        LAST
    );
	lr_end_transaction("e_transaction", LR_AUTO);
	
	// LOGIN
	web_reg_save_param_ex(
        "ParamName=token",
        "LB=\"token\":\"",
        "RB=\"}",
        LAST
    );
	lr_start_transaction("f_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("f",
        "URL=https://40.233.6.50/user/login",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={ \"username\": \"loadrunner\", \"password\": \"loadrunner\" }",
        LAST
    );
	lr_end_transaction("f_transaction", LR_AUTO);
	
	web_add_auto_header("Authorization", "Bearer {token}");
	
	// CREATE CREDENTIAL
	lr_start_transaction("g_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_custom_request("g",
        "URL=https://40.233.6.50/credential/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"cred_name\": \"DEV_Guardian\", \"cred_username\": \"guardian\", \"cred_password\": \"guardian_pwd\", \"cred_url\": \"guardian.com\", \"cred_comment\": \"This is my password for guardian.\"}",
        LAST
    );
	lr_end_transaction("g_transaction", LR_AUTO);
    
    //	LIST CREDENTIALS
    web_reg_save_param_ex(
        "ParamName=credential_id",
        "LB=\"ID\":",
        "RB=}]",
        LAST
    );
    lr_start_transaction("h_transaction");
    web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("h",
        "URL=https://40.233.6.50/credential/",
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("h_transaction", LR_AUTO);
	
	// SEARCH CREDENTIALS
	lr_start_transaction("i_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("i",
        "URL=https://40.233.6.50/credential/ZGV2", // ZGV2 = Base64(DEV)
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("i_transaction", LR_AUTO);
	

	// UPDATE CREDENTIAL
	strcpy(url, "URL=https://40.233.6.50/credential/");
	strcat(url, "{credential_id}");
	lr_start_transaction("j_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_custom_request("j",
        url,
        "Method=PUT",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"cred_name\": \"DEV_Guardian\", \"cred_username\": \"guardian\", \"cred_password\": \"guardian_pwd\", \"cred_url\": \"guardian.com\", \"cred_comment\": \"UPDATED THIS CREDENTIAL.\"}",
        LAST
    );
	lr_end_transaction("j_transaction", LR_AUTO);

	// GET CREDENTIAL
	strcpy(url, "URL=https://40.233.6.50/credential/");
	strcat(url, "{credential_id}");
	lr_start_transaction("k_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("k",
        url,
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("k_transaction", LR_AUTO);

	// DELETE CREDENTIAL
	strcpy(url, "URL=https://40.233.6.50/credential/");
	strcat(url, "{credential_id}");
	lr_start_transaction("l_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("l",
        url,
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("l_transaction", LR_AUTO);

	// EXPORT CREDENTIALS 
	lr_start_transaction("m_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("m",
        "URL=https://40.233.6.50/credential/export",
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("m_transaction", LR_AUTO);

	// DELETE ACCOUNT	
	lr_start_transaction("n_transaction");
	web_reg_find("Text=\"success\":true", LAST);
    web_custom_request("m",
        "URL=https://40.233.6.50/user/",
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("n_transaction", LR_AUTO);
	
	web_remove_auto_header("Authorization", "ImplicitGen=Yes");
	
	return 0;
}
