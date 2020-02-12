#include "p81.h"
#include <assert.h>

int main(int argc, char *argv[]) {
    assert(A(8) == 0xFFFFFF00);
    assert(B(16, 8) == 0x00FFFF00);

    return 0;
}
