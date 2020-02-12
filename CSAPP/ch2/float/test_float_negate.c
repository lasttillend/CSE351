#include "float_negate.h"
#include <assert.h>
#include <math.h>

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
    assert(-f == u2f(float_negate(uf)));

    f = 0.0;
    uf = f2u(f);
    assert(-f == u2f(float_negate(uf)));

    f = 1.0;
    uf = f2u(f);
    assert(-f == u2f(float_negate(uf)));

    f = -1.0;
    uf = f2u(f);
    assert(-f == u2f(float_negate(uf)));

    f = u2f(0x7F800000);    // +oo
    uf = f2u(f);
    assert(-f == u2f(float_negate(uf)));

    f = u2f(0xFF800000);    // -oo
    uf = f2u(f);
    assert(-f == u2f(float_negate(uf)));

    f = u2f(0x7F800001);    // NaN
    uf = f2u(f);
    assert(isnan(f) && isnan(u2f(float_negate(uf))));

    return 0;
}


    
