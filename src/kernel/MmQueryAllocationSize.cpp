#include "common.h"

/*
 * MmQueryAllocationSize
 *
 * Import Number:      180
 * Calling Convention: stdcall
 * Parameter 0:        PVOID BaseAddress
 * Return Type:        SIZE_T
 */
int Xbox::MmQueryAllocationSize()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PVOID, BaseAddress);
	XboxTypes::SIZE_T rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
