#include "fpwr2.h"
#include <assert.h>
#include <math.h>

int main(int argc, char *argv[]) {
    assert(fpwr2(0) == powf(2,0));
    assert(fpwr2(100) == powf(2, 100));
    assert(fpwr2(-100) == powf(2, -100));
    assert(fpwr2(10000) == powf(2, 10000));
    assert(fpwr2(-10000) == powf(2, -10000));

    return 0;
}
