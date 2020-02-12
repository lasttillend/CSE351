#include "divide_power2.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    int x = 0x12345678;
    int y = 0x80000007;

    assert(divide_power2(x, 1) == x / 2);
    assert(divide_power2(x, 2) == x / 4);
    assert(divide_power2(y, 1) == y / 2);
    assert(divide_power2(y, 2) == y / 4);

    return 0;
}
