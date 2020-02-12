#include <assert.h>

int main(int argc, char * argv[]) {
    int x = 5;
    int k1 = 17, k2 = -7, k3 = 60, k4 = -112;
    int exp1, exp2, exp3, exp4;

    exp1 = (x << 4) + x;
    exp2 = x - (x << 3);
    exp3 = (x << 6) - (x << 2);
    exp4 = (x << 4) - (x << 7);
    
    assert(exp1 == x * k1);
    assert(exp2 == x * k2);
    assert(exp3 == x * k3);
    assert(exp4 == x * k4);
    
    return 0;
}
    
