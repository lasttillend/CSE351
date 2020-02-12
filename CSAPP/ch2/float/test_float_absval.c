#include "float_absval.h"
#include <assert.h>
#include <math.h>
// #include <stdio.h>

typedef unsigned float_bits;

float u2f(unsigned x) {
    return *(float *) &x;
}

unsigned f2u(float f) {
    return *(unsigned *) &f;
}

int main(int argc, char *argv[]) {
    float f = -0.0;
    unsigned uf = f2u(f);
    assert(fabsf(f) == u2f(float_absval(uf)));
    // printf("%f\n", u2f(float_absval(uf)));
    // printf("%f\n", fabsf(f));

    f = 0.0;
    uf = f2u(f);
    assert(fabsf(f) == u2f(float_absval(uf)));

    f = 1.0;
    uf = f2u(f);
    assert(fabsf(f) == u2f(float_absval(uf)));

    f = -1.0;
    uf = f2u(f);
    assert(fabsf(f) == u2f(float_absval(uf)));

    f = u2f(0x7F800000);    // +oo
    uf = f2u(f);
    assert(fabsf(f) == u2f(float_absval(uf)));

    f = u2f(0xFF800000);    // -oo
    uf = f2u(f);
    assert(fabsf(f) == u2f(float_absval(uf)));

    f = u2f(0x7F800001);    // NaN
    uf = f2u(f);
    assert(isnan(f) && isnan(u2f(float_absval(uf))));

    return 0;
}


    
