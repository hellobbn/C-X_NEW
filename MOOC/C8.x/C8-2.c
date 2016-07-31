//
//  C8-2.c
//  C-X_NEW
//
//  Created by 陈泺帆 on 2016/7/31.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Pointer Example - 2
//  Min and max
//

#include <stdio.h>

//Function
void COMPARE(int *max_saver,int *min_saver,int length,int a[]);

int main()
{
    int a[] = {1,2,3,4,5,8,7,6,9,10,29};
    int max, min;
    COMPARE(&max, &min, sizeof(a)/sizeof(a[0]), a);
    printf("The Max is %d\nThe min is %d\n",max,min);
    return 0;
}

void COMPARE(int *max_saver,int *min_saver,int length,int a[])
{
    *max_saver = *min_saver = a[0];
    for (int i = 0; i < length; i++) {
        if (a[i] <= *min_saver) {
            *min_saver = a[i];
        }
        if (a[i] >= *max_saver) {
            *max_saver = a[i];
        }
    }
}
