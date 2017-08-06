// sysLog.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include"System_Log.h"

hiker::CSystemLog *Log = hiker::CSystemLog::GetInstance (LOG_DEBUG);

int main()
{
	int Cnt = 0;
	int Cnt1 = 2;
	int Cnt2 = 100;
	Log->SetLogDirectory (L"../test1");

	Log->Log (L"Network", LOG_DEBUG, L"LogLevel %d,%d,Cnt = %d", Cnt, Cnt1, Cnt2);
	Sleep (1);
	Log->Log (L"Game", LOG_DEBUG, L"LogLevel %d,%d,Cnt = %d", Cnt, 10, 1000);
	Sleep (10);
	Log->SetLogLevel (LOG_ERROR);
	Log->Log (L"Network", LOG_DEBUG, L"LogLevel %d,%d,Cnt = %d", Cnt, 50, 10000);
    return 0;
}

