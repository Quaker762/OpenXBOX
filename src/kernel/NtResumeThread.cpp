#include "common.h"

/*
 * NtResumeThread
 *
 * Import Number:      224
 * Calling Convention: stdcall
 * Parameter 0:        HANDLE ThreadHandle
 * Parameter 1:        PULONG PreviousSuspendCount
 * Return Type:        NTSTATUS
 */
int Xbox::NtResumeThread()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::HANDLE, ThreadHandle);
	K_INIT_ARG(XboxTypes::PULONG, PreviousSuspendCount);
	XboxTypes::NTSTATUS rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
