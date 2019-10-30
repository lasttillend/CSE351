// This program shows a way of using only bit-level and logical operations to write an expression that is equivalent to x == y.

#include <stdio.h>

int main() {
	int x = 2;
	int y = 2;
	int z = 3;
	printf("%d == %d: 0x%.2x\n", x, y, !(x ^ y));
	printf("%d == %d: 0x%.2x\n", x, z, !(x ^ z));
	return 0;
}
