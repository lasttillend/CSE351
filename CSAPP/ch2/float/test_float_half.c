#include "float_half.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

typedef unsigned float_bits;

unsigned f2u(float f) {
    return *(unsigned *) &f;
}

float u2f(unsigned u) {
    return *(float *) &u;
}

int main(int argc, char *argv[]) {
    float f = -0.0;
    unsigned uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));

    f = 0.0;
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));

    f = 1.0;
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    
    f = -1.0;
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    
    f = u2f(0x00000001);  // smallest denormalized value, f / 2 --> 0.0
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    printf("smallest denormalized value: f = %.80f\n f / 2 = %.80f\n", f, f / 2);

    f = u2f(0x007FFFFF);  // largest denormalized value, f / 2 will round to even
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    printf("largest denormalized value: f = %.80f\n f / 2 = %.80f\n", f, f / 2);
    
    f = u2f(0x00800000);  // smallest normalized value, f / 2 --> denormalized value
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    printf("smallest normalized value: f = %.80f\n f / 2 = %.80f\n", f, f / 2);
    
    f = u2f(0x00800003);  // normalized value to denormalized value, need rounding to even
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    printf("normalized value to denormalized value: f = %.80f\n f / 2 = %.80f\n", f, f / 2);
    
    f = u2f(0x7F800000);  // +oo
    uf = f2u(f);
    assert(f / 2 == u2f(float_half(uf)));
    printf("f = %f, f / 2 = %f\n", f, f / 2);
    
    f = u2f(0x7F800001);  // NaN
    uf = f2u(f);
    assert(isnan(f) && isnan(u2f(float_half(uf))));
    printf("f = %f, f / 2 = %f\n", f, f / 2);
    
    return 0;
}
 
    

    
    
