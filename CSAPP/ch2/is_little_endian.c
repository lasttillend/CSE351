#include "is_little_endian.h" 

int is_little_endian(void) {
    const int ONE = 1;
    return *((byte_pointer) &ONE) == 1;
}
