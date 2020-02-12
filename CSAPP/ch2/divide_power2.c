#include "divide_power2.h"
#include <limits.h>

/*
 * Divide by power of 2, -> x/2^k
 * Assume 0 <= k < w-1
 */
int divide_power2(int x, int k) {
    // Note: integer division always rounds towards zero
    int is_neg = x & INT_MIN;
    (is_neg && (x = x + (1 << k) - 1));
    return x >> k;
}
