#include "stdio.h"

typedef enum {
    SUCCESS = 0,
    FAILURE = -1
} error_type_t; 

typedef enum { 
    TDH_MNG_CREATE = 1,
    TDH_BLANK = 2
} instruction_type_t; 

typedef error_type_t error_t; 
typedef instruction_type_t instruction_t; 