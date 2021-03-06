#include "common.h"

/*
 * RtlCopyString
 *
 * Import Number:      272
 * Calling Convention: stdcall
 * Parameter 0:        PSTRING DestinationString
 * Parameter 1:        PSTRING SourceString
 * Return Type:        VOID
 */
int Xbox::RtlCopyString()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PSTRING, DestinationString);
	K_INIT_ARG(XboxTypes::PSTRING, SourceString);

	K_EXIT();
	return ERROR_NOT_IMPLEMENTED;
}
