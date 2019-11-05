#include <stdio.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y);

int main() {
	// negative overflow
	int x = 0x80000000;
	int y = 0xFFFFFFFF;
	printf("is %d + %d = %d overflow? %d\n", x, y, x + y, tadd_ok(x, y));	

	// positive overflow
	x = 0x7FFFFFFF;
	y = 0x00000001;
	printf("is %d + %d = %d overflow? %d\n", x, y, x + y, tadd_ok(x, y));	

	// normal
	x = 0x00000001;
	y = 0x0000000F;
	printf("is %d + %d = %d overflow? %d\n", x, y, x + y, tadd_ok(x, y));	

	return 0;
}

int tadd_ok(int x, int y) {
	int is_overflow;
	if ((x + y <= 0) && (x > 0) && (y > 0)) {
		is_overflow = 1;  // positive overflow
	} else if ((x + y >= 0) && (x < 0) && (y < 0)) {
		is_overflow = 1;  // negative overflow
	} else {
		is_overflow = 0;  // normal
	}
	
	return is_overflow;  
}
