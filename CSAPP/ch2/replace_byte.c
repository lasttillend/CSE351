#include "replace_byte.h"
#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    if (i < 0) {
        printf("error: i is negative\n");
        return x;
    }
    if (i > sizeof(unsigned) - 1) {
        printf("error: too big i\n");
        return x;
    }
    
    int mask = 0xFF << (i << 3);
    int pos_byte = b << (i << 3);
    return (x & ~mask) | pos_byte;
}
