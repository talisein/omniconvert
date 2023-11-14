#pragma once
#ifdef _WIN32
#include <windows.h>
#else

typedef unsigned int UINT;
typedef void* HWND;
typedef unsigned long DWORD;
typedef void* HANDLE;
typedef long LRESULT;

#define MAX_PATH 255ULL

#define FALSE 0
#define TRUE 1

#define MB_OK (1 << 0)
#define MB_ICONERROR (1 << 1)

#define GENERIC_READ (1 << 0)
#define FILE_SHARE_READ (1 << 1)
#define OPEN_EXISTING (1 << 2)
#define GENERIC_WRITE (1 << 3)
#define CREATE_ALWAYS (1 << 4)
#define INVALID_HANDLE_VALUE ((HANDLE)((unsigned long long)-1))

int MessageBox(HWND, void*, const char*, UINT);

HANDLE CreateFile(const char*, UINT, UINT, void*, UINT, UINT, void*);
void WriteFile(HANDLE, void*, UINT, void*, void*);
void ReadFile(HANDLE, void*, UINT, DWORD*, void*);
int GetFileSize(HANDLE, void*);
void CloseHandle(HANDLE);


#endif // !WIN32
