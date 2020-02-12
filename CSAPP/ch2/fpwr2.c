#include "fpwr2.h"

float u2f(unsigned u) {
    /*
     * Returns a floating-point value having an identical bit representation
     * as its unsigned argument.
     */
    return *(float *) &u;
}

float fpwr2(int x) {
    /* Result exponent and fraction */
    unsigned exp, frac;
    unsigned u;

    if (x < -126 - 23) {
        /* Too small. Return 0.0 */
        exp = 0;
        frac = 0;
    } else if (x < -126) {
        /* Denormalized result */
        exp = 0;
        frac = 1 << (x + 126 + 23); // e.g., x = -130, x + 126 = -4, 
                                    // frac = 000 1000 0000 0000 0000 0000                                                           // 1 << 19(=-4+23) will produce the above frac
    } else if (x < 128) {
        /* Normalized result */
        exp = x + 127;              // x --> E, exp --> e, bias = 127, and E = e - bias
        frac = 0;
    } else {
        /* Too big. Return +infinity */
        exp = 255;
        frac = 0;
    }

    /* Pack exp and frac into 32 bits */
    u = exp << 23| frac;
    
    return u2f(u);
}
