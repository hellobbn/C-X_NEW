//
//  C5-3-1.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Calculate 1-1/2+1/3-1/4+...+1/n

#include <stdio.h>

int main()
{
    int end = 1;
    double sum = 0.0;
    int sign =1;
    scanf("%d", &end);
    
    for (int i = 1; i <= end; i++) {
        sum = sum + sign*1.0/i;
        //WE must use 1.0 instead OF 1 !
        sign = -sign;
    }
    printf("%f", sum);
    return 0;
}
