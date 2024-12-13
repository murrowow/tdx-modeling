#include "stdio.h"
#include "tdx_defs.h"

global_data_t global_data[10];

void * read(array_t, int);
error_t init_hardware(void);