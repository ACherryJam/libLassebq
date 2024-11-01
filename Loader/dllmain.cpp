#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <ShlObj.h>

#include <string>

int initialised = 0;

typedef HRESULT(WINAPI *CreateDXGIFactory1_t)(REFIID riid, _COM_Outptr_ void **ppFactory);
typedef HRESULT(WINAPI *CreateDXGIFactory2_t)(UINT Flags, REFIID riid, _COM_Outptr_ void **ppFactory);

CreateDXGIFactory1_t OriginalCreateDXGIFactory1 = NULL;
CreateDXGIFactory2_t OriginalCreateDXGIFactory2 = NULL;

BOOL APIENTRY DllMain(HINSTANCE hInstDLL,
                      DWORD fdwReasonForCall,
                      LPVOID lpvReserved)
{
    switch (fdwReasonForCall)
    {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}

VOID WINAPI LoadDXGIDll()
{
    if (OriginalCreateDXGIFactory1)
        return;

    HMODULE hLib = LoadLibraryW(L"C:\\Windows\\System32\\dxgi.dll");

    if (hLib) {
        OriginalCreateDXGIFactory1 = (CreateDXGIFactory1_t)GetProcAddress(hLib, "CreateDXGIFactory1");
        OriginalCreateDXGIFactory2 = (CreateDXGIFactory2_t)GetProcAddress(hLib, "CreateDXGIFactory2");
    }
}

VOID WINAPI LoadLibLassebqDll()
{
    size_t buffer_size = GetCurrentDirectory(0, NULL);
    LPWSTR buffer = new WCHAR[buffer_size];

    if (GetCurrentDirectory(buffer_size, buffer) != buffer_size - 1)
        MessageBoxA(NULL, "Failed to get current directory :(\nAsk Cherry about it.", "Loader error", MB_OK);
    
    std::wstring path(buffer);
    path += L"\\liblassebq.dll";

    HANDLE hLib = LoadLibraryW(path.c_str());
    if (!hLib) {
        std::string fail_message = "Failed to load liblassebq.dll, error code: " + std::to_string(GetLastError());
        MessageBoxA(NULL, fail_message.c_str(), "DLL attachment failure", MB_OK);
    }
}

using PrepareGame = bool(__cdecl *)(void);
PrepareGame trampoline = nullptr;

bool __cdecl hook(void) {
    LoadLibLassebqDll();
    return trampoline();
}

#define MessageBoxError(text) MessageBoxA(NULL, (LPCSTR)text, "Error!", MB_OK)

VOID WINAPI EnsureInit() {
    if (!initialised) {
        LoadDXGIDll();
        LoadLibLassebqDll();

        //if (MH_Initialize() != MH_OK) {
        //    MessageBoxError("Failed to initialize minhook");
        //    return;
        //}

        //HANDLE exeBase = GetModuleHandleW(nullptr);
        //uintptr_t exeAsUint = reinterpret_cast<uintptr_t>(exeBase);
        //trampoline = reinterpret_cast<PrepareGame>(exeAsUint + 0x014eb350u);

        //MH_CreateHook()

        initialised = TRUE;
    }
}

__declspec(dllexport)
HRESULT WINAPI CreateDXGIFactory1(
    REFIID riid,
    _COM_Outptr_ void **ppFactory)
{
    HRESULT hR = DXGI_ERROR_DRIVER_INTERNAL_ERROR;
    EnsureInit();

    hR = OriginalCreateDXGIFactory1(riid, ppFactory);
    return hR;
}

__declspec(dllexport)
HRESULT WINAPI CreateDXGIFactory2(
    UINT Flags,
    REFIID riid,
    _COM_Outptr_ void **ppFactory)
{
    HRESULT hR = DXGI_ERROR_DRIVER_INTERNAL_ERROR;
    EnsureInit();

    hR = OriginalCreateDXGIFactory2(Flags, riid, ppFactory);
    return hR;
}
