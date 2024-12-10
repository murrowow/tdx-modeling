#include "stdio.h"
#include "../tdx_defs.h"

error_t tdh_mng_create(reg_info_t *registers) {
    error_t e = FAILURE;
    uint64_t rdi = registers->rdi; 
    uint64_t rsi = registers->rsi; 
    uint64_t rcx = registers->rcx; 
    uint64_t rax = rdi + rsi + rcx;
    registers->rax = rax; 
    return e; 
}