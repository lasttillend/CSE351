#include "mul3div4.h"
#include "divide_power2.h"

int mul3div4(int x) {
    int mul3 = (x << 1) + x;
    return divide_power2(mul3, 2);
}
