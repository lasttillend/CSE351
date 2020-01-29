#include "lsg_byte_x_and_remaining_y.h"

int lsg_byte_x_and_remaining_y(int x, int y) {
    /* This function returns a word consisting of
     * the least significant byte of x and remaining
     * bytes of y.
     */
    int lsg_byte_x = x & 0xFF;
    int remaining_y = (~0 ^ 0xFF) & y;
    return lsg_byte_x | remaining_y;
}

