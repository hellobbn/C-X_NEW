//
//  C8-4.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/10.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Pointer Example 4
//  sizeof(/*array*/)
//

#include <stdio.h>

void minmax(int *a, int len, int *max, int *min);

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
    int min,max;
    printf("main sizeof(a) = %lu\n", sizeof(a));
    printf("main *a = %p\n",a);
    minmax(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("a[0] = %d\n", a[0]);
    printf("max = %d\nmin = %d\n", max, min);
    
    return 0;
}

void minmax(int *b, int len, int *max, int *min)
{
    printf("minmax sizeof(b) = %lu\n",sizeof(b));
    printf("maxmin *b = %p\n",b);
    b[0] = 1000;
    *min = *max = b[0];
    for (int i = 1; i < len; i++) {
        if (b[i] > *max) {
            *max = b[i];
        }
        if (b[i] < *min) {
            *min = b[i];
        }
    }
}
