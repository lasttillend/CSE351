#include "show_bytes.h"

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
    short sval = (short) val;
    long lval = (long) val;
    double dval = (double) val;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
    show_short(sval);
    show_long(lval);
    show_double(dval);
}

int main() {
	test_show_bytes(12345);

	return 0;
}
