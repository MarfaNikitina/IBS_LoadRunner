Action()
{

	lr_start_transaction("StartPage");

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("csrftoken=Pu1k109gOPWuGFN6iUUFJu41ZueeAvRA0cm8ZuPYBWoIXc2NH7hGZTrBoadTWaBz; DOMAIN=127.0.0.1");

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("StartPage",LR_AUTO);

	lr_think_time(15);

	lr_start_transaction("Login");

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=137839.365492102HAQAVVcpDzcftcftApzHtVHf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=44", ENDITEM, 
		"Name=login.y", "Value=16", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("AllUserFlights");

	web_url("Itinerary Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AllUserFlights",LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("Delete Flight");

	web_submit_data("itinerary.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=210297424-100296-JB", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=flightID", "Value=210297416-177189-JB", ENDITEM, 
		"Name=flightID", "Value=210297416-254112-JB", ENDITEM, 
		"Name=flightID", "Value=210297424-331066-JB", ENDITEM, 
		"Name=flightID", "Value=210297424-407989-JB", ENDITEM, 
		"Name=flightID", "Value=33492785-48-JB", ENDITEM, 
		"Name=flightID", "Value=0-0-P", ENDITEM, 
		"Name=flightID", "Value=0-0-M", ENDITEM, 
		"Name=flightID", "Value=4-0-60", ENDITEM, 
		"Name=flightID", "Value=8-0-60", ENDITEM, 
		"Name=flightID", "Value=1-0-60", ENDITEM, 
		"Name=flightID", "Value=0-0-5\r\n", ENDITEM, 
		"Name=flightID", "Value=6-1-5\r\n", ENDITEM, 
		"Name=flightID", "Value=8-1-5\r\n", ENDITEM, 
		"Name=flightID", "Value=12-1-5\r\n", ENDITEM, 
		"Name=flightID", "Value=15-1-5\r\n", ENDITEM, 
		"Name=flightID", "Value=21-1-5\r\n", ENDITEM, 
		"Name=flightID", "Value=0-1-\r\n", ENDITEM, 
		"Name=flightID", "Value=3-1-\r\n", ENDITEM, 
		"Name=flightID", "Value=0-1-\r\n", ENDITEM, 
		"Name=flightID", "Value=3-1-10", ENDITEM, 
		"Name=flightID", "Value=3-1-1\r\n", ENDITEM, 
		"Name=flightID", "Value=0-1-10", ENDITEM, 
		"Name=flightID", "Value=0-1-1\r\n", ENDITEM, 
		"Name=flightID", "Value=0-1-11", ENDITEM, 
		"Name=flightID", "Value=0-2-10", ENDITEM, 
		"Name=flightID", "Value=0-2-10", ENDITEM, 
		"Name=flightID", "Value=0-2-10", ENDITEM, 
		"Name=flightID", "Value=0-2-10", ENDITEM, 
		"Name=flightID", "Value=0-2-10", ENDITEM, 
		"Name=flightID", "Value=0-2-10", ENDITEM, 
		"Name=flightID", "Value=0-24-10", ENDITEM, 
		"Name=removeFlights.x", "Value=83", ENDITEM, 
		"Name=removeFlights.y", "Value=13", ENDITEM, 
		"Name=.cgifields", "Value=32", ENDITEM, 
		"Name=.cgifields", "Value=21", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=26", ENDITEM, 
		"Name=.cgifields", "Value=17", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=18", ENDITEM, 
		"Name=.cgifields", "Value=30", ENDITEM, 
		"Name=.cgifields", "Value=16", ENDITEM, 
		"Name=.cgifields", "Value=27", ENDITEM, 
		"Name=.cgifields", "Value=25", ENDITEM, 
		"Name=.cgifields", "Value=28", ENDITEM, 
		"Name=.cgifields", "Value=20", ENDITEM, 
		"Name=.cgifields", "Value=14", ENDITEM, 
		"Name=.cgifields", "Value=24", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=31", ENDITEM, 
		"Name=.cgifields", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=22", ENDITEM, 
		"Name=.cgifields", "Value=13", ENDITEM, 
		"Name=.cgifields", "Value=23", ENDITEM, 
		"Name=.cgifields", "Value=29", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=15", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=19", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);

	lr_end_transaction("Delete Flight",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("Logout");

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}