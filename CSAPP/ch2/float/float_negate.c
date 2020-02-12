#include "float_negate.h"

typedef unsigned float_bits;

float_bits float_negate(float_bits f) {
    float_bits sign, exp, frac;

    sign = f >> 31;
    exp = f >> 23 & 0xFF;
    frac = f & 0x7FFFFF;

    // If f is Nan, then return f. 
    if (exp == 0XFF && frac) {
        return f;
    } else {
        return (~sign << 31) | (exp << 23) | frac;  // flip the sign bit
    }
}
