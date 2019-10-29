#include <stdio.h>

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main() {
	int a = 6;
	int b = 10;
	printf("Before swap: a=%d, b=%d\n", a, b);

	inplace_swap(&a, &b);

	printf("After swap: a=%d, b=%d\n", a, b);

	return 0;
}


