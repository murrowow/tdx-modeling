#ifndef TDX_DEFS_H
#define TDX_DEFS_H

#include "stdio.h"
#include "stdint.h"

typedef enum {
    SUCCESS = 0,
    FAILURE = -1
} error_type_t; 

typedef enum { 
    TDH_MNG_CREATE = 1,
    TDH_BLANK = 2
} instruction_type_t; 


typedef struct register_info {
    uint64_t rdi;
    uint64_t rsi; 
    uint64_t rcx;
    uint64_t rax;
} reg_info_t; 

typedef error_type_t error_t; 
typedef instruction_type_t instruction_t; 

static inline void dump_registers(reg_info_t *registers) 
{
    printf("rdi: %llu\n", registers->rdi);
    printf("rdi: %llu\n", registers->rsi);
    printf("rdi: %llu\n", registers->rcx);
    printf("rdi: %llu\n", registers->rax);
}
#endif //TDX_DEFS_H