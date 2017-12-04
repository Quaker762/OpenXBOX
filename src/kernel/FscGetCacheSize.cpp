#include "common.h"

/*
 * FscGetCacheSize
 *
 * Import Number:      35
 * Calling Convention: stdcall
 * Return Type:        PFN_COUNT
 */
int Xbox::FscGetCacheSize()
{
	K_ENTER_STDCALL();
	PFN_COUNT rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}