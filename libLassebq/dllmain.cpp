// dllmain.cpp: определяет точку входа для приложения DLL.
#include "stdafx.h"
#include "libLassebq.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call) {
		case DLL_PROCESS_ATTACH:
		{
			//lassebq_initYYC();
			lassebq_InitHook();
			return TRUE;
		}

		case DLL_PROCESS_DETACH:
		{
			lassebq_shutdown();
			return TRUE;
		}
	}

	return TRUE;
}

