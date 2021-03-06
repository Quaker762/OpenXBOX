#include "common.h"

/*
 * KeRemoveQueueDpc
 *
 * Import Number:      137
 * Calling Convention: stdcall
 * Parameter 0:        PRKDPC Dpc
 * Return Type:        BOOLEAN
 */
int Xbox::KeRemoveQueueDpc()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PRKDPC, Dpc);
	XboxTypes::BOOLEAN rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
