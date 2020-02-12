#include "copy_int.h"
#include <string.h>

void copy_int(int val, void * buf, int maxbytes) {
    /* compare two signed numbers to avoid someone setting maxbytes to be a negative value */
    if (maxbytes >= (int) sizeof(val)) {
        memcpy(buf, (void *) &val, sizeof(val));
    }
}
