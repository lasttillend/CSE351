#include "float_absval.h"

typedef unsigned float_bits;

float_bits float_absval(float_bits f) {
    float_bits exp, frac;

    exp = f >> 23 & 0xFF;
    frac = f & 0x7FFFFF;
    
    // If f is NaN, then return f.
    if (exp == 0xFF && frac) {
        return f;
    } else {
        return 0 << 31 | (exp << 23) | frac;  // set the sign bit to 0
    }
}
