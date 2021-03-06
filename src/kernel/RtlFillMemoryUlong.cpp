#include "common.h"

/*
 * RtlFillMemoryUlong
 *
 * Import Number:      285
 * Calling Convention: stdcall
 * Parameter 0:        PVOID  Destination
 * Parameter 1:        SIZE_T Length
 * Parameter 2:        ULONG  Pattern
 * Return Type:        VOID
 */
int Xbox::RtlFillMemoryUlong()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PVOID,  Destination);
	K_INIT_ARG(XboxTypes::SIZE_T, Length);
	K_INIT_ARG(XboxTypes::ULONG,  Pattern);

	K_EXIT();
	return ERROR_NOT_IMPLEMENTED;
}
