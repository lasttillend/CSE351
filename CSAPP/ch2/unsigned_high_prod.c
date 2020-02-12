#include "unsigned_high_prod.h"
#include <inttypes.h>

int signed_high_prod(int x, int y) {
    int64_t mul = (int64_t) x * y;
    return mul >> 32;
}

unsigned unsigned_high_prod(unsigned x, unsigned y) {
    unsigned p = (unsigned) signed_high_prod((int) x, (int) y);
    if ((int) x < 0) {
        p += y;
    } 
    if ((int) y < 0) {
        p += x;
    }
    return p;
}

/* a theoritically correct version to test unsigned_high_prod function */
unsigned another_unsigned_high_prod(unsigned x, unsigned y) {
    uint64_t mul = (uint64_t) x * y;
    return mul >> 32;
}
