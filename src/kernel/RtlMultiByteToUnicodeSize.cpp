#include "common.h"

/*
 * RtlMultiByteToUnicodeSize
 *
 * Import Number:      300
 * Calling Convention: stdcall
 * Parameter 0:        PULONG BytesInUnicodeString
 * Parameter 1:        PCHAR  MultiByteString
 * Parameter 2:        ULONG  BytesInMultiByteString
 * Return Type:        NTSTATUS
 */
int Xbox::RtlMultiByteToUnicodeSize()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PULONG, BytesInUnicodeString);
	K_INIT_ARG(XboxTypes::PCHAR,  MultiByteString);
	K_INIT_ARG(XboxTypes::ULONG,  BytesInMultiByteString);
	XboxTypes::NTSTATUS rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
