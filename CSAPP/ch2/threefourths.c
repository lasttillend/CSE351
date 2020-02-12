#include "threefourths.h"
#include <limits.h>

/*
 * Calculate 3/4x, no overflow, round towards zero.
 * No overflow means divide by 4 first, then multiply by 3.
 */
int threefourths(int x) {
    int is_neg = x & INT_MIN;
    int f = x & ~0x3;  // first 30 bits of x
    int l = x & 0x3;   // last 2 bits of x

    // f is divisible by 4, so it has no rounding issues
    int fdiv4 = f >> 2;
    int fdiv4mul3 = (fdiv4 << 1) + fdiv4;

    // l multiply by 3 can not casue overflow and then divide by 4, rounding towards zero.
    int lmul3 = (l << 1) + l; 
    int bias = (1 << 2) - 1; 
    (is_neg && (lmul3 += bias));
    int lmul3div4 = lmul3 >> 2;

    return fdiv4mul3 + lmul3div4;
}
