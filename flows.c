#include "stdio.h"
#include "firmware.h"

error_t create_TD() {
    error_t e;
    reg_info_t registers; 
    registers.rdi = 0; 
    registers.rsi = 0; 
    registers.rcx = 0; 
    registers.rax= 0; 
    e = instruction_wrapper(TDH_MNG_CREATE, &registers); 
    return e; 
}
