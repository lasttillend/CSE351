#include "tsub_ok.h"
#include "tadd_ok.h"
#include <limits.h>

int tsub_ok(int x, int y) {
   /*
    * If y = INT_MIN, then x - y can only be positive overflow and it's the case when x >= 0;
    * If y does not equal INT_MIN, then 
    *   postive overflow : x > 0, y < 0 but x - y < 0;
    *   negative_overflow: x < 0, y > 0 but x - y > 0.
    * So we can use tadd_ok function with arguments x and -y.
    */
    if (y == INT_MIN) {
        return x < 0;
    } else {
        return tadd_ok(x, -y);
    }
}
