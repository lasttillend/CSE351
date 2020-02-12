#include "rotate_left.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    unsigned x = 0x12345678;
    assert(rotate_left(x, 4) == 0x23456781);
    assert(rotate_left(x, 20) == 0x67812345);
    assert(rotate_left(x, 0) == x);
    
    return 0;
}
