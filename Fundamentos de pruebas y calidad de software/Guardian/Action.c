#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

Action()
{

	//web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("warn", 
		"URL=http://40.233.6.50/misc/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://40.233.6.50/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
    lr_start_transaction("Post_Request");
    web_reg_save_param_ex(
        "ParamName=response", // The name of the parameter to save the response
        "LB=",                // Left boundary, empty to capture entire response
        "RB=",                // Right boundary, empty to capture entire response
        //"Search=Body",        // Search in the body of the response
        LAST);
    web_custom_request("PostRequest",
        "URL=http://40.233.6.50/user/login",
        "Method=POST",
        "TargetFrame=",
        "Resource=0",
        "RecContentType=application/json",
        "Referer=http://40.233.6.50/",
        "Mode=HTML",
        "EncType=application/json",
        "Body={ \"username\": \"canidodis\", \"password\": \"canidodat\" }",
        LAST);

    lr_end_transaction("Post_Request", LR_AUTO);
    lr_output_message("Response: %s", lr_eval_string("{response}"));
	lr_start_transaction("Post_Request_Transaction");
	
    web_custom_request("PostRequest",
        "URL=http://40.233.6.50/user/questions",
        "Method=GET",
        "TargetFrame=",
        "Resource=0",
        "RecContentType=application/json",
        "Referer=",
        "Mode=HTML",
        "EncType=application/json",
        LAST);

    lr_end_transaction("Post_Request_Transaction", LR_AUTO);
    
    
	return 0;
}
