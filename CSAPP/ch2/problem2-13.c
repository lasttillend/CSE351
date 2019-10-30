#include <stdio.h>
#include "show_bytes.h"

/* Generate a result integer z consiting of the bits of x modified according to the bits
 * of m, with 1 at each bit position where m is 1.
 */
int bis(int x, int m);

/* Generate a result integer z consiting of the bits of x modified according to the bits 
 * of m, with 0 at each bit position where m is 1.
 */
int bic(int x, int m);

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y);

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y);

int main() {
	int x = 0x2A;
	int y = 0x12;
	int result;
	printf("x is:\n");
	show_int(x);
	printf("y is:\n");
	show_int(y);
	result = bool_or(x, y);
	printf("Bool or: \n");
	show_int(result);

	printf("Bool xor:\n");
	result = bool_xor(x, y);
	show_int(result);
	
	return 0;
}

int bis(int x, int m) {
	int z = x | m;
	return z;
}

int bic(int x, int m) {
	int z = x & (~m);
	return z;
}

int bool_or(int x, int y) {
	int result = bis(x, y);
	return result;
}

int bool_xor(int x, int y) {
	int result = bis(bic(x, y), bic(y, x));
	return result;
}
