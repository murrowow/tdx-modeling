#include "stdio.h"
#include "../tdx_defs.h"
#include "../hardware.h"
#include "stdlib.h"

error_t tdh_mng_create(reg_info_t *registers) {
    //__CPROVER_precondition(((global_data_t *)(read(GLOBAL_DATA_ARRAY, registers->rdi)))->PAMT == PT_NDA , "TDR page metadata in PAMT is correct (PT must be PT_NDA)");
    //__CPROVER_precondition(((global_data_t *)(read(GLOBAL_DATA_ARRAY, registers->rdi)))->KOT == HKID_FREE , "KOT correctly assigned to HKID_FREE");
    //__CPROVER_precondition((registers->rdi >= LOW) && (registers->rdi < UP), "Is in the correct range of memory");
    error_t e = FAILURE;
    uint64_t rdi = registers->rdi; 
    uint64_t rsi = registers->rsi; 
    uint64_t rcx = registers->rcx; 
    uint64_t rax = registers->rax; 

    // 
    global_data_t * data = (global_data_t *)(read(GLOBAL_DATA_ARRAY, rdi));
    if ((data->PAMT != PT_NDA) || data->KOT != HKID_FREE) {
        return e; 
    }

    if (rdi < LOW || rdi >= UP) {
        return e; 

    }

    // write the data to be 0
    int *write_data = malloc(sizeof(int));
    if (write_data == NULL) {
        free(write_data); 
        return e; 
    }

    *write_data = 0;  
    write(GLOBAL_DATA_ARRAY, rdi, (void *)write_data); 
    free(write_data);
    registers->rax = rax;  
    e = SUCCESS; 
    //__CPROVER_postcondition(((global_data_t *)(read(GLOBAL_DATA_ARRAY, registers->rdi)))->data == 0, "Written to 0");
    return e; 
}