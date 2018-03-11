// altnames.c -- portable int type

#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int32_t me32;
    
    me32 = 45933945;
    printf("First, assum int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);           // #  define PRId32        "d"
    
    return 0;
}


