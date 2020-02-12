#include <stdio.h>
#include "lower_one_mask.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    assert(lower_one_mask(6) == 0x3F);
    assert(lower_one_mask(17) == 0x1FFFF);
    assert(lower_one_mask(32) == -1);
    assert(lower_one_mask(1) == 1);

    return 0;
}
