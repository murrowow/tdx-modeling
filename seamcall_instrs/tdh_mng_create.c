#include "stdio.h"
#include "../tdx_defs.h"
#include "../hardware.h"

error_t tdh_mng_create(reg_info_t *registers) {
    //__CPROVER_precondition(((global_data_t *)(read(GLOBAL_DATA_ARRAY, registers->rdi)))->PAMT == PT_NDA , "TDR page metadata in PAMT is correct (PT must be PT_NDA)");
    error_t e = FAILURE;
    uint64_t rdi = registers->rdi; 
    uint64_t rsi = registers->rsi; 
    uint64_t rcx = registers->rcx; 
    void *data; 
    registers->rax = rdi + rsi + rcx; 
    e = SUCCESS; 
    return e; 
}