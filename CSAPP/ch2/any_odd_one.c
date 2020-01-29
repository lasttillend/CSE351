#include "any_odd_one.h"

int any_odd_one(unsigned x) {
    int mask = 0xAAAAAAAA;
    return !!(x & mask);
}
