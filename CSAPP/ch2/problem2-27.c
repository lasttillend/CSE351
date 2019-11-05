#include <stdio.h>

/*
 * Determine whether arguments can be added without overflow.
 * Returns 1 if x and y can be added without causing overflow.
 */
int uadd_ok(unsigned x, unsigned y);

int main() {
	unsigned x = 0x0000000F;  // 15
	unsigned y = 0x00000001;  // 1
	printf("Can %u + %u be added without overflow? %d\n", x, y, uadd_ok(x, y));
	
	x = 0x00000001;  // 1
	y = 0xFFFFFFFF;  // 2^32-1 
	printf("Can %u + %u be added without overflow? %d\n", x, y, uadd_ok(x, y));
	
	return 0;
}

int uadd_ok(unsigned x, unsigned y) {
	return x + y >= x; 
}
