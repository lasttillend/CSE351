#include "unsigned_high_prod.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    unsigned x = 0x12345678;
    unsigned y = 0xFFFFFFFF;

    assert(another_unsigned_high_prod(x, y) == unsigned_high_prod(x, y));

    return 0;
}
