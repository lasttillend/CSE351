#include "xbyte.h"
#include <assert.h>

int main(int argc, char * argv[]) {
    assert(xbyte(0xAABBCCDD, 1) == 0xFFFFFFCC);
    assert(xbyte(0x00112233, 2) == 0x11);
    
    return 0;
}
