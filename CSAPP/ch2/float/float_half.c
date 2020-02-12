#include "float_half.h"

typedef unsigned float_bits;

float_bits float_half(float_bits f) {
    float_bits sign, exp, frac, rest;
    sign = f >> 31;
    exp = f >> 23 & 0xFF;
    frac = f & 0x7FFFFF;
    rest = f & 0x7FFFFFFF;

    int is_NAN_or_oo = (exp == 0xFF);
    if (is_NAN_or_oo) {
         return f;
    }
    
    /*
     * round to even, we care about last 2 bits of frac
     *
     * 0: 00 => 0 just >>1
     * 1: 01 => 0 (1/2=0.5, round to even=0.0) just >>1
     * 2: 10 => 1 just >>1
     * 3: 11 => 1 + 1 (3/2=1.5, round to even=2.0) just >>1 and plus 1
     */
    int addition = (frac & 0x3) == 0x3; // if last two bits of frac is 11, then add one to round to even
    
    if (exp == 0) {
        /* denormalized */
        frac >>= 1;
        frac += addition;
    } else if (exp == 1) {
        /* normalized to denormalized */
        rest >>= 1;
        rest += addition;
        exp = (rest >> 23) & 0xFF;
        frac = rest & 0x7FFFFF;

        /* below is a false implementation for this case. Counter example: when f is smallest 
         * normalized value f=u2f(0x00800000). frac is 0 in this case, so we need the variable
         * rest.
         */
       // exp = 0x00;
       // frac >>= 1;
       // frac += addition;
    } else {
        /* normalized */
        exp -= 1;
    }

    return (sign << 31) | (exp << 23) | frac;
}
