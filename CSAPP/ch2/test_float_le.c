#include "float_le.h"
#include <assert.h>

int main(int argc, char *argv[]) {
    assert(float_le(-0, +0));
    assert(float_le(+0, -0));
    assert(float_le(0, 3));
    assert(float_le(-4, -0));
    assert(float_le(-4, 4));
    assert(float_le(1.1, 3.14));

    return 0;
}
