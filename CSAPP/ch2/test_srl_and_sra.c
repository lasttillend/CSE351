#include <stdio.h>
#include "srl_and_sra.h"
#include <assert.h>

int main(int argc, const char * argv[]) {
    unsigned a = 0b1001;    
    int b = 0b1001;

    assert(srl(a, 2) == a >> 2);
    assert(sra(b, 2) == b >> 2);

    return 0;
}
