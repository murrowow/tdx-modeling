#include "stdio.h"
#include "stdint.h"
#include "firmware.h"

error_t create_TD(uint64_t tdr_pa) {
    error_t e;
    reg_info_t registers; 
    registers.rdi = tdr_pa; 
    registers.rsi = 0; 
    registers.rcx = 0; 
    registers.rax= 0; 
    e = instruction_wrapper(TDH_MNG_CREATE, &registers); 
    return e; 
}
