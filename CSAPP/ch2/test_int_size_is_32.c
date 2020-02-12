#include <stdio.h>
#include "int_size_is_32.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    assert(int_size_is_32());
    assert(int_size_is_32_for_16bit());
    
    return 0;
}
