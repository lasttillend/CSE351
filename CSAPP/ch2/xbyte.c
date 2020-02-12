#include "xbyte.h"

int xbyte(packet_t word, int bytenum) {
    int size = sizeof(unsigned);
    int shift_left_val = (size - 1 - bytenum) << 3; // shift the byte to the front
    int shift_right_val = (size - 1) << 3;          // use arithmetic shift right to reserve significant bit
    return (int) word << shift_left_val >> shift_right_val;
}
