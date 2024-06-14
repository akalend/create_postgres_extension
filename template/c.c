/*
 * contrib/{{ name }}/{{ name }}.c
 */
#include "postgres.h"
#include "fmgr.h"
#include "c.h"

#include "utils/fmgrprotos.h"

PG_MODULE_MAGIC;


PG_FUNCTION_INFO_V1({{ name }}_1);

/* the tamplate function for debuging */
Datum
{{ name }}_1(PG_FUNCTION_ARGS)
{	
	PG_RETURN_UINT64(777);
}