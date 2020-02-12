#include <stdlib.h>
#include "calloc.h"
#include <stdio.h>
#include <string.h>

void * another_calloc(size_t nmemb, size_t size) {
    if (nmemb == 0 | size == 0) {
        return NULL;
    }
    size_t buf_size = nmemb * size;
    if (nmemb == buf_size / size) {   // not overflow in this case
        void * ptr = malloc(buf_size);
        memset(ptr, 0, buf_size);     // initiate elements to 0
        return ptr;
    }
    
    return NULL;
}
        

