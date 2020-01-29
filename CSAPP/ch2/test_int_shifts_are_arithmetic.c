#include "int_shifts_are_arithmetic.h"
#include <stdio.h>

int main(int argc, const char * argv[]) {
    if (int_shifts_are_arithmetic()) {
        printf("Int shifts are arithmetic on this machine.\n");
    } else {
        printf("Int shifts are not arithmetic on this machine.\n");
    }
    return 0;
}
