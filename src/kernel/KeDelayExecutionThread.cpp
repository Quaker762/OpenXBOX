#include "common.h"

/*
 * KeDelayExecutionThread
 *
 * Import Number:      99
 * Calling Convention: stdcall
 * Parameter 0:        KPROCESSOR_MODE WaitMode
 * Parameter 1:        BOOLEAN         Alertable
 * Parameter 2:        PLARGE_INTEGER  Interval
 * Return Type:        NTSTATUS
 */
int Xbox::KeDelayExecutionThread()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::KPROCESSOR_MODE, WaitMode);
	K_INIT_ARG(XboxTypes::BOOLEAN,         Alertable);
	K_INIT_ARG(XboxTypes::PLARGE_INTEGER,  Interval);
	XboxTypes::NTSTATUS rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
