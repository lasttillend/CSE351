#include <stdio.h>
#include "odd_ones.h"
#include <assert.h>

int main(int argc, const char * argv[]) {
    assert(odd_ones(0b1011001011100110));
    assert(!odd_ones(0b1010001011100110));
    
    return 0;
}
