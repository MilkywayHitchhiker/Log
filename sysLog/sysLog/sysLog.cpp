// sysLog.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"System_Log.h"


int main()
{
	int num1 = 10;
	int num2 = 100;
	char a[] = "123456789123456789123144567891234657986";
	unsigned long long SessionKey;
	SessionKey = 0xf1200034L;

	SYSLOG_DIRECTORY(L"SYSTEM_LOG")

	SYSLOG_LOG (L"Network", LOG_SYSTEM, L"Network LogStart");
	Sleep (1);
	SYSLOG_LOG (L"GAME", LOG_SYSTEM, L"Network Log1 d1 = %d,d2 = %d ============================================================================================================================================================================================================================123456789",num1,num2);
	Sleep (10);
	SYSLOG_LEVEL(LOG_SYSTEM,true)
	SYSLOG_LOG (L"Network", LOG_SYSTEM, L"Network LogEnd");
	
	SYSLOG_LOGHEX (L"Network", LOG_SYSTEM, L"HEX Log", (byte *)a, sizeof (a));
	SYSLOG_LOGSession (L"Session", LOG_SYSTEM, L"SessionKey = ", ( byte * )&SessionKey);
    return 0;
}

