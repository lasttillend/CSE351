#include "tadd_ok.h"

int tadd_ok(int x, int y) {
    int sum = x + y;
    int positive_over = x > 0 && y > 0 && sum < 0;
    int negative_over = x < 0 && y < 0 && sum >= 0;
    
    return !(positive_over || negative_over);
}
