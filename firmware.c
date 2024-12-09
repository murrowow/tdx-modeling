#include "stdio.h"
#include "firmware.h"

error_t instruction_wrapper(instruction_t instr) {
    error_t e = FAILURE;
    switch (instr) {
        case TDH_MNG_CREATE: {
            printf("TDH_MNG_CREATE\n");
            break;
        }
        default: break; 
    }
    return e;
}

