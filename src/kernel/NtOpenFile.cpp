#include "common.h"

/*
 * NtOpenFile
 *
 * Import Number:      202
 * Calling Convention: stdcall
 * Parameter 0:        PHANDLE            FileHandle
 * Parameter 1:        ACCESS_MASK        DesiredAccess
 * Parameter 2:        POBJECT_ATTRIBUTES ObjectAttributes
 * Parameter 3:        PIO_STATUS_BLOCK   IoStatusBlock
 * Parameter 4:        ULONG              ShareAccess
 * Parameter 5:        ULONG              OpenOptions
 * Return Type:        NTSTATUS
 */
int Xbox::NtOpenFile()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(XboxTypes::PHANDLE,            FileHandle);
	K_INIT_ARG(XboxTypes::ACCESS_MASK,        DesiredAccess);
	K_INIT_ARG(XboxTypes::POBJECT_ATTRIBUTES, ObjectAttributes);
	K_INIT_ARG(XboxTypes::PIO_STATUS_BLOCK,   IoStatusBlock);
	K_INIT_ARG(XboxTypes::ULONG,              ShareAccess);
	K_INIT_ARG(XboxTypes::ULONG,              OpenOptions);
	XboxTypes::NTSTATUS rval;

	K_EXIT_WITH_VALUE(rval);
	return ERROR_NOT_IMPLEMENTED;
}
