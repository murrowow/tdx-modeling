#include "stdio.h"
#include "flows.h"
#include "hardware.h"

int main() {
    init_hardware(); 
    create_TD(0llu); 
    return 0; 
}