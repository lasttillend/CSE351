#include <stdio.h>
#include "show_bytes.h"

int main() {

	unsigned a, b, c;    // <==> unsigned int
	a = 4294967294;
	b = 4294967295;
	c = 4294967296;      // overflow
	printf("a=%u\n", a);
	printf("b=%u\n", b);
	printf("c=%u\n", c);

	short x = 12345;
	short mx = -x;

	show_bytes((byte_pointer) &x, sizeof(short));
	show_bytes((byte_pointer) &mx, sizeof(short));

	short int v = -12345;
	unsigned short uv = (unsigned short) v;
	printf("v = %d, uv = %u\n", v, uv);
	
	unsigned u  = 4294967295u;  /* UMax */
	int 	 tu = (int) u;
	printf("u = %u, tu = %d\n", u, tu);
	
	return 0;
}
