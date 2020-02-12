#include "saturating_add.h"
#include <assert.h>
#include <limits.h>

int main(int argc, char * argv[]) {
    assert(INT_MAX == saturating_add(INT_MAX, 0x1234));
    assert(INT_MIN == saturating_add(INT_MIN, -0x1234));
    assert(0x11 + 0x22 == saturating_add(0x11, 0x22));
    
    return 0;
}
