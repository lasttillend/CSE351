#include <stdio.h>
#include <assert.h>
#include "replace_byte.h"

int main(int argc, const char * argv[]) {
    unsigned rep_0 = replace_byte(0x12345678, 0, 0xAB);
    unsigned rep_3 = replace_byte(0x12345678, 3, 0xAB);

    assert(rep_0 == 0x123456AB);
    assert(rep_3 == 0xAB345678);
    return 0;
}


