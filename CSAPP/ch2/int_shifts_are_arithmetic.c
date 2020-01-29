#include "int_shifts_are_arithmetic.h"

int int_shifts_are_arithmetic() {
    int w = 8 * sizeof(int);
    return ((1 << (w - 1)) >> (w - 1)) == -1;
}
