// pdbex-demo.cpp
// generate defn using: pdbexe _PEB -m -j -i ntdll.pdb
// generate defn using: pdbexe _RTL_USER_PROCESS_PARAMETERS -m -j -i ntdll.pdb
// merge them and include as header
// The ntdll.pdb used is for win7 x86
//

#include <Windows.h>
#include <stdio.h>

#include "pdbex_peb.h"


int main()
{
    PEB _peb = {0};

#if _M_IX86
    DWORD peb_x86;
    DWORD teb_x86;

    _asm {
        //int 3
        mov eax, fs:[0x30] // PEB
        mov peb_x86, eax
        mov eax, fs:[0x18] // TEB
        mov teb_x86, eax
    }
    printf("[+]peb_x86 : 0x%x\n", peb_x86);
    printf("[+]teb_x86 : 0x%x\n", teb_x86);

    // using compiler intrinsic
    DWORD dwPeb = __readfsdword(0x30);
    printf("[+]peb_x86 : 0x%x\n", dwPeb);

    DWORD dwTeb = __readfsdword(0x18);
    printf("[+]teb_x86 : 0x%x\n", dwTeb);

    _peb = *(PEB*)dwPeb;
    printf("[*]Image base address: %p\n", _peb.ImageBaseAddress);
    // The only thing we have to do is to map back to windows specific types from stdint
    // That is not yet supported i suppose.
    printf("[+]Image name: %ls\n", (wchar_t*)_peb.ProcessParameters->ImagePathName.Buffer);

#elif _M_AMD64
    // using compiler intrinsic
    DWORD64 dwPeb = __readgsqword(0x60);
    printf("[+]peb_x64 : 0x%llx\n", dwPeb);

    DWORD64 dwTeb = __readgsqword(0x30);
    printf("[+]teb_x64: 0x%llx\n", dwTeb);

    _peb = *(PEB*)dwPeb;
    printf("[*]Image base address: %p\n", _peb.ImageBaseAddress);
    printf("[+]Image name: %ls\n", (wchar_t*)_peb.ProcessParameters->ImagePathName.Buffer);
#endif

    return 0;
}
