#include "float_le.h"

unsigned f2u(float x) {
    return *(unsigned *) &x;
}

int float_le(float x, float y) {
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);

    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;

    // ref: https://github.com/DreamAndDead/CSAPP-3e-Solutions/issues/1
    return (ux << 1 == 0 && uy << 1 == 0) || /* both x and y are zeros */
        (sx && !sy) ||                       /* x is non-positive and y is non-negative */
        (!sx && !sy && ux <= uy) ||          /* both x and y are non-negative */
        (sx && sy && ux >= uy);              /* both x and y are non-positive */
}

