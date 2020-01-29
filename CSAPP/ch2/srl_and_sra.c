#include "srl_and_sra.h"

unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    int w = 8 * sizeof(unsigned);
    int mask = ~0 << (w - k);
    return xsra & ~mask;
}

int sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int w = 8 * sizeof(int);
    int mask = ~0 << (w - k);
    // let mask remain unchanged when the first bit of x is 1, otherwise 0
    int m = 1 << (w - 1);
    mask &= !(x & m) - 1;
    return xsrl | mask;
}

