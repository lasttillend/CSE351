#include "tsub_ok.h"
#include <assert.h>
#include <limits.h>

int main(int argc, char * argv[]) {
    assert(!tsub_ok(0x00, INT_MIN));
    assert(tsub_ok(0x00, 0x00));
    assert(tsub_ok(0x00, INT_MAX));
    assert(!tsub_ok(INT_MAX, INT_MIN));
    assert(!tsub_ok(INT_MIN, INT_MAX));
    assert(!tsub_ok(INT_MAX, -1));
    assert(!tsub_ok(INT_MIN, 1));

    assert(tsub_ok(5, 3));
    assert(tsub_ok(-1, 1));

    return 0;
}
