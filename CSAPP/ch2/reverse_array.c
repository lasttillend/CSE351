#include <stdio.h>

void inplace_swap(int *x, int *y);

void reverse_array(int a[], int cnt);

int main() {
	int array[] = {1, 2, 3, 4, 5};
	reverse_array(array, 5);
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
	int first, last;
	for (first = 0, last = cnt - 1; 
			first < last; 
			first++, last--) 
			inplace_swap(&a[first], &a[last]);
}

