#include "stdio.h"
#include "firmware.h"
#include "seamcall_instrs/seamcall_instrs.h"
#include "tdx_defs.h"

error_t instruction_wrapper(instruction_t instr, reg_info_t * registers) {
    error_t e = FAILURE;
    switch (instr) {
        case TDH_MNG_CREATE: {
            printf("TDH_MNG_CREATE\n");
            e = tdh_mng_create(registers); 
            dump_registers(registers); 
            break;
        }
        case TDH_BLANK: {
            printf("TDH_BLANK\n");
            break;
        }
        default: break; 
    }
    return e;
}

