#include "float_twice.h"
#include <assert.h>
#include <math.h>

typedef unsigned float_bits;

unsigned f2u(float f) {
  return *(unsigned*) &f;
}

float u2f(unsigned u) {
  return *(float*) &u;
}

int main(int argc, char *argv[]) {
    float f = -0.0;
    unsigned uf = f2u(f);
    assert(2 * f == u2f(float_twice(uf)));

    f = 0.0;
    uf = f2u(f);
    assert(2 * f == u2f(float_twice(uf)));
    
    f = 1.0;
    uf = f2u(f);
    assert(2 * f == u2f(float_twice(uf)));
    
    f = -1.0;
    uf = f2u(f);    
    assert(2 * f == u2f(float_twice(uf)));

    f = u2f(0x00000001);  // smallest denormalized value
    uf = f2u(f);
    assert(2 * f == u2f(float_twice(uf)));
    
    f = u2f(0x7F000001);  // twice f will be +oo
    uf = f2u(f);
    assert(2 * f == u2f(float_twice(uf)));

    f = u2f(0x7F800000);  // +oo
    uf = f2u(f);
    assert(2 * f == u2f(float_twice(uf)));

    f = u2f(0x7F800001);  // NaN
    uf = f2u(f);
    assert(isnan(f) && isnan(u2f(float_twice(uf))));

    return 0;
}
