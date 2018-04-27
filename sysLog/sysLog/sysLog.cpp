// sysLog.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include"System_Log.h"

hiker::CSystemLog *Log = hiker::CSystemLog::GetInstance (LOG_DEBUG);

int main()
{

	Log->SetLogDirectory (L"SYSTEM_LOG");

	Log->Log (L"Network", LOG_SYSTEM, L"Network LogStart");
	Sleep (1);
	Log->Log (L"Game", LOG_SYSTEM, L"Game LogStart");
	Sleep (10);
	Log->SetLogLevel (LOG_ERROR);
	Log->Log (L"Network", LOG_SYSTEM, L"Network LogEnd");
    return 0;
}

