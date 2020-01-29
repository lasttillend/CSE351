#include <stdio.h>
#include "is_little_endian.h"

int test_is_little_endian() {
    return is_little_endian();
}

int main(int argc, const char * argv[]) {
    if (test_is_little_endian()) {
        printf("This is a little endian machine!\n");
    } else {
        printf("This is a big endian machine!\n");
    }
    return 0;
}

