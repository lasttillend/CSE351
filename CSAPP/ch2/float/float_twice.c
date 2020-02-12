#include "float_twice.h"

typedef unsigned float_bits;

float_bits float_twice(float_bits f) {
    float_bits sign, exp, frac;
    sign = f >> 31;
    exp = f >> 23 & 0xFF;
    frac = f & 0x7FFFFF;
    
    int is_NaN_or_oo = (exp == 0xFF);    
    if (is_NaN_or_oo) {
        return f;
    }
    
    if (exp == 0) {  // denormalized
        frac <<= 1;
    } else if (exp == 0xFF - 1) {  // twice f will be oo
        frac = 0;
        exp = 0xFF;
    } else {
        exp += 1;  // normalized 
    }

    return (sign << 31) | (exp << 23) | frac;
}
