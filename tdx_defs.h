#ifndef TDX_DEFS_H
#define TDX_DEFS_H

#include "stdio.h"
#include "stdint.h"

#define LOW 0
#define UP 10

typedef enum {
    SUCCESS = 0,
    FAILURE = -1
} error_type_t; 

typedef enum { 
    TDH_MNG_CREATE = 1,
    TDH_BLANK = 2
} instruction_type_t; 

typedef enum  {
    PT_NDA = 0, 
    PT_ASSIGNED = 1, 
} pamt_type_t; 

typedef enum {
    HKID_FREE = 0,
    HKID_ASSIGNED = 1
} kot_type_t; 

typedef enum {
    GLOBAL_DATA_ARRAY = 0,
    LOCAL_DATA_ARRAY = 1
} array_t; 

typedef enum {
    DATA = 0,
    KOT = 1, 
    PAMT = 2
} field_t; 

typedef struct register_info {
    uint64_t rdi; //first argument
    uint64_t rsi; //second
    uint64_t rcx; //third
    uint64_t rax; //return register
} reg_info_t; 

typedef error_type_t error_t; 
typedef instruction_type_t instruction_t; 
typedef pamt_type_t pamt_t;
typedef kot_type_t kot_t; 

static inline void dump_registers(reg_info_t *registers, error_t e) 
{
    printf("rdi: %llu\n", registers->rdi);
    printf("rdi: %llu\n", registers->rsi);
    printf("rdi: %llu\n", registers->rcx);
    printf("rdi: %llu\n", registers->rax);
    if (e == SUCCESS) {
        printf("SUCCESS\n");
    } else {
        printf("ERROR\n");
    }
}

typedef struct global_data {
    pamt_t pamt; 
    kot_t kot; 
    int data; 
} global_data_t; 


#endif //TDX_DEFS_H
