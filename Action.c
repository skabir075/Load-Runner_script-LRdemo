Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://blazedemo.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=https://blazedemo.com/img/glyphicons-halflings.png", "Referer=https://blazedemo.com/", ENDITEM, 
		LAST);

	return 0;
}