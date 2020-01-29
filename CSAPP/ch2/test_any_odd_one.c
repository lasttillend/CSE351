#include <stdio.h>
#include "any_odd_one.h"
#include <assert.h>

int main(int argc, const char * argv[]) {

    unsigned a = 0b11010011;
    assert(any_odd_one(a) == 1);

    unsigned b = 0b01010101;
    assert(any_odd_one(b) == 0);
    return 0;
}
