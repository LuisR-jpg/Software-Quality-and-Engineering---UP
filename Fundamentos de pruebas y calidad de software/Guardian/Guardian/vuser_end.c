vuser_end()
{
	// DELETE ACCOUNT	
	web_reg_find("Text=\"success\":true", LAST);
	lr_start_transaction("Performance-Delete-account");
    web_custom_request("Export",
        "URL=https://api.guardian.4736251.xyz/user/",
        "Method=DELETE",
        "RecContentType=application/json",
        "Mode=HTML",
        "EncType=application/json",
        LAST
    );
	lr_end_transaction("Performance-Delete-account", LR_AUTO);
	
	web_remove_auto_header("Authorization", "ImplicitGen=Yes");
	return 0;
}
