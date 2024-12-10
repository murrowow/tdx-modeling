#ifndef FIRMWARE_H
#define FIRMWARE_H

#include "stdio.h"
#include "tdx_defs.h"

error_t instruction_wrapper(instruction_t, reg_info_t *); 

#endif // FIRMWARE_H