#include <stdio.h>
#include "leftmost_one.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    assert(leftmost_one(0xFF00) == 0x8000);
    assert(leftmost_one(0x6000) == 0x4000);
    assert(leftmost_one(0x0) == 0x0);
    assert(leftmost_one(0x80000000) == 0x80000000);

    return 0;
}
