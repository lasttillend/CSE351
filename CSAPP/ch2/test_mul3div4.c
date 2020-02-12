#include "mul3div4.h"
#include <assert.h>
#include <limits.h>

int main(int argc, char *argv[]) {
   	int x = INT_MIN;
	int y = INT_MAX;
	int m = 3;
	int n = -3;
	
	assert(mul3div4(x) == 3 * x / 4);
	assert(mul3div4(y) == 3 * y / 4);
	assert(mul3div4(m) == 3 * m / 4);
	assert(mul3div4(n) == 3 * n / 4);
    
    return 0;
}
