#include "common.h"

/*
 * XcModExp
 *
 * Import Number:      345
 * Calling Convention: stdcall
 * Parameter 0:        PULONG pA
 * Parameter 1:        PULONG pB
 * Parameter 2:        PULONG pC
 * Parameter 3:        PULONG pD
 * Parameter 4:        ULONG  dwN
 * Return Type:        ULONG
 */
int Xbox::XcModExp()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PULONG, pA);
	K_INIT_ARG(XboxTypes::PULONG, pB);
	K_INIT_ARG(XboxTypes::PULONG, pC);
	K_INIT_ARG(XboxTypes::PULONG, pD);
	K_INIT_ARG(XboxTypes::ULONG,  dwN);
	XboxTypes::ULONG rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
