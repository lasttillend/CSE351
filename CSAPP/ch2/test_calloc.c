#include "calloc.h"
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>

int main(int argc, char * argv[]) {
    void *p;
    p = another_calloc(0x1234, 1);
    assert(p != NULL);
    free(p);

    p = another_calloc(SIZE_MAX, 2);
    assert(p == NULL);
    free(p);

    return 0;
}

