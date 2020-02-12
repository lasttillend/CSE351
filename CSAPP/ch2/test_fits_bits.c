#include "fits_bits.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    assert(!fits_bits(0xFF, 8));
    assert(!fits_bits(~0xFF, 8));
    assert(fits_bits(~0xFF, 25));

    assert(fits_bits(0b0010, 3));
    assert(!fits_bits(0b1010, 3));
    assert(!fits_bits(0b0110, 3));

    assert(fits_bits(~0b11, 3));
    assert(!fits_bits(~0b01000011, 3));
    assert(!fits_bits(~0b111, 3));
    assert(fits_bits(~0b111, 4));

    return 0;
}
