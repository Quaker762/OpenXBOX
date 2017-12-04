#include "common.h"

/*
 * DbgUnLoadImageSymbols
 *
 * Import Number:      11
 * Calling Convention: stdcall
 * Parameter 0:        PSTRING   FileName
 * Parameter 1:        PVOID     ImageBase
 * Parameter 2:        ULONG_PTR ProcessId
 * Return Type:        VOID
 */
int Xbox::DbgUnLoadImageSymbols()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(PSTRING,   FileName);
	K_INIT_ARG(PVOID,     ImageBase);
	K_INIT_ARG(ULONG_PTR, ProcessId);

	K_EXIT();
	return ERROR_NOT_IMPLEMENTED;
}