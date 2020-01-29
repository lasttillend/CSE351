#include <stdio.h>
#include "lsg_byte_x_and_remaining_y.h"
#include <assert.h>

int main(int argc, const char * argv[]) {
    printf("Result: %x\n", lsg_byte_x_and_remaining_y(0x89ABCDEF, 0x765432EF)); 
    assert(lsg_byte_x_and_remaining_y(0x89ABCDEF, 0x765432EF) == 0x765432EF);
}


    
