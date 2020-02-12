#include <stdlib.h>
#include <assert.h>
#include "copy_int.h"

int main(int argc, char * argv[]) {
    int maxbytes = sizeof(int) * 10;
    void * buf = malloc(maxbytes);
    int val;

    val = 0x12345678;
    copy_int(val, buf, maxbytes);
    assert(*(int *) buf == val);

    val = 0xAABBCCDD;
    copy_int(val, buf, 0);
    assert(*(int *) buf != val);

    free(buf);
    
    return 0;
}
