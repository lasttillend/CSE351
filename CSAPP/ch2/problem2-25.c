#include <stdio.h>

float sum_elements(float a[], unsigned length);

int main() {
	// float a[] = {1.1, 2.0, -2.0};
	// unsigned length = sizeof(a) / sizeof(a[0]);
	float a[] = {};
	printf("Sum of elements: %f\n", sum_elements(a, 0));
	return 0;
}

float sum_elements(float a[], unsigned length) {
	int i;
	float result = 0;

	for (i = 0; i < length; i++) {
		result += a[i];
	}

	return result;
}
