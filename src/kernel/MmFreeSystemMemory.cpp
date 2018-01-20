#include "common.h"

/*
 * MmFreeSystemMemory
 *
 * Import Number:      172
 * Calling Convention: stdcall
 * Parameter 0:        PVOID  BaseAddress
 * Parameter 1:        SIZE_T NumberOfBytes
 * Return Type:        ULONG
 */
int Xbox::MmFreeSystemMemory()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PVOID,  BaseAddress);
	K_INIT_ARG(XboxTypes::SIZE_T, NumberOfBytes);
	XboxTypes::ULONG rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
