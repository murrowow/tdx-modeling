#include "stdio.h"
#include "tdx_defs.h"
#include "hardware.h"

error_t init_hardware() {
    error_t e = SUCCESS; 
    for (int i = 0; i < 10; i++) {
        (global_data[i]).pamt = PT_NDA; 
        (global_data[i]).kot = HKID_FREE; 
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
            return NULL;
            break; 
        }
    }
}

void write (array_t array, int addr, void * data, field_t field) {
    switch (array) {
        case GLOBAL_DATA_ARRAY: {
            if (field == DATA) {
                global_data[addr].data = *(int *)data;
            } 
            else if (field == PAMT) {
                global_data[addr].pamt = *(int *)data; 
            }
            else if (field == KOT) {
                global_data[addr].kot = *(int *)data; 
            }
        }
        case LOCAL_DATA_ARRAY: {
            break;
        }
    }
}