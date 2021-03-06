#include "common.h"

/*
 * RtlAssert
 *
 * Import Number:      264
 * Calling Convention: stdcall
 * Parameter 0:        PVOID FailedAssertion
 * Parameter 1:        PVOID FileName
 * Parameter 2:        ULONG LineNumber
 * Parameter 3:        PCHAR Message
 * Return Type:        VOID
 */
int Xbox::RtlAssert()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PVOID, FailedAssertion);
	K_INIT_ARG(XboxTypes::PVOID, FileName);
	K_INIT_ARG(XboxTypes::ULONG, LineNumber);
	K_INIT_ARG(XboxTypes::PCHAR, Message);

	K_EXIT();
	return ERROR_NOT_IMPLEMENTED;
}
