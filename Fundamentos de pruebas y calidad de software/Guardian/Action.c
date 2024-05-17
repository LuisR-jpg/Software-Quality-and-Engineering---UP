#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

Action()
{
	// IS SERVER ALIVE
	web_url("alive", 
		"URL=https://40.233.6.50/misc/", 
		"RecContentType=application/json", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST
	);
	
	// LOGIN
    web_reg_save_param_ex(
        "ParamName=token",
        "LB=\"token\":\"",
        "RB=\"}",
        LAST
    );
	lr_start_transaction("login_transaction");
    web_custom_request("PostRequest",
        "URL=https://40.233.6.50/user/login",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={ \"username\": \"canidodis\", \"password\": \"canidodat\" }",
        LAST
    );
    lr_end_transaction("login_transaction", LR_AUTO);
    lr_output_message("Captured token: %s", lr_eval_string("{token}"));
    
    //	LIST CREDENTIALS USING TOKEN
   	web_reg_save_param_ex(
    	"ParamName=list",
    	"LB=",
    	"RB=",
    	LAST
    );
	lr_start_transaction("list_transaction");
	web_reg_find("Text=\"success\":true", LAST);
	web_add_header("Authorization", "Bearer {token}");
    web_custom_request("PostRequest",
        "URL=https://40.233.6.50/credential/",
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("list_transaction", LR_AUTO);
	lr_output_message("Fetched list: %s", lr_eval_string("{list}"));
	return 0;
}
