#include <stdio.h>
#include "show_bytes.h"
void retain_least_significant_byte(int *x);
void complement_all_but_least_significant_byte(int *x);
void set_least_significant_byte_to_zero(int *x);	

int main() {
	int x = 0x87654321;
	printf("Before retaining least significant byte:\n");
	show_int(x);
	retain_least_significant_byte(&x);
	printf("After:\n");
	show_int(x);

	x = 0x87654321;
	printf("Before complementing all but the least siginificant byte:\n");
	show_int(x);
	complement_all_but_least_significant_byte(&x);
	printf("After:\n");
	show_int(x);
	
	x = 0x87654321;
	printf("Before setting least significant byte to zero:\n");
	show_int(x);
	set_least_significant_byte_to_zero(&x);
	printf("After:\n");
	show_int(x);

	return 0;
}

void retain_least_significant_byte(int *x) {
	*x = *x & 0xFF;
}

void complement_all_but_least_significant_byte(int *x) {
	*x = ~(*x) ^ 0xFF;
}

void set_least_significant_byte_to_zero(int *x) {
	*x = *x | 0xFF;
}
