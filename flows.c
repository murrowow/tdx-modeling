#include "stdio.h"
#include "firmware.h"

error_t create_TD() {
    error_t e;
    e = instruction_wrapper(TDH_MNG_CREATE); 
    return e; 
}
