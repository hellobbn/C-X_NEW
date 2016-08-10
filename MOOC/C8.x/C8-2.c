//
//  C8-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/7/31.
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
    int len;
    printf("How many number do you need:");
    scanf("%d",&len);
    int a[len];
    int max, min;
    printf("Enter the number please(a number once):\n");
    for (int i = 0; i < len; i++) {
        printf("(%d/%d) %d --> ",i,len,i);
        scanf("%d",&a[i]);
    }
    COMPARE(&max, &min, len, a);
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
