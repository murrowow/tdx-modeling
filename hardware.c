#include "stdio.h"
#include "tdx_defs.h"
#include "hardware.h"

error_t init_hardware() {
    error_t e = SUCCESS; 
    for (int i = 0; i < 10; i++) {
        (global_data[i]).PAMT = PT_NDA; 
        (global_data[i]).KOT = HKID_FREE; 
    }
    return e; 
}

void * read(array_t array, int addr) {
    switch (array) {
        case GLOBAL_DATA_ARRAY: {
            global_data_t * data = &global_data[addr];
            return (void *)data; 
        }
        case LOCAL_DATA_ARRAY: {
            break; 
        }
    }
}