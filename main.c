#include "stdio.h"
#include "flows.h"
#include "hardware.h"

int main() {
    init_hardware(); 
    error_t e = create_TD(0llu); 
    if (e == FAILURE) {
        printf("instruction failed");
    }
    return 0; 
}