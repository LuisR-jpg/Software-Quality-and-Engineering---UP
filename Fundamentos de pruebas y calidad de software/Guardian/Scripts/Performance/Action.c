#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"

Action()
{
	char url[250];
	
	// CREATE CREDENTIAL
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Performance-Create-Credential");
	web_custom_request("Create-Credential",
        "URL=https://api.guardian.4736251.xyz/credential/",
        "Method=POST",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        "Body={\"cred_name\": \"DEV_Guardian\", \"cred_username\": \"guardian\", \"cred_password\": \"guardian_pwd\", \"cred_url\": \"guardian.com\", \"cred_comment\": \"This is my password for guardian.\"}",
        LAST
    );
	lr_end_transaction("Performance-Create-Credential", LR_AUTO);
    
    //	LIST CREDENTIALS
    web_reg_save_param_ex(
        "ParamName=credential_id",
        "LB=\"ID\":",
        "RB=}]",
        LAST
    );
    web_reg_find("Text=\"success\":true", LAST);
    lr_start_transaction("Performance-List");
    web_custom_request("List",
        "URL=https://api.guardian.4736251.xyz/credential/",
        "Method=GET",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Performance-List", LR_AUTO);
	
	// DELETE CREDENTIAL
	strcpy(url, "URL=https://api.guardian.4736251.xyz/credential/");
	strcat(url, "{credential_id}");
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Performance-Delete-credential");
    web_custom_request("Delete-credential",
        url,
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Performance-Delete-credential", LR_AUTO);
	
	return 0;
}