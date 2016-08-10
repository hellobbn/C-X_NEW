//
//  C8-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/7/30.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Pointer Example - 1
//  Swap numbers
//

#include <stdio.h>

void swap(int *a,int *b);

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    swap(&a, &b);
    printf("a' = %d\nb' = %d", a, b);
    return 0;
}

void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
