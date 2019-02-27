#include <stdio.h>
#include <windows.h>
int main()
{
    wchar_t **wargv;
    int wargc;
    wargv = CommandLineToArgvW(GetCommandLineW(),&wargc);

    if(wargc >1 && wcscmp(wargv[1],L"help")==0)
    {
        wprintf(L"hello world\n");
        return 0;
    }
   return 0;
}

