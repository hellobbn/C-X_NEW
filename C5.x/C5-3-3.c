//
//  C5-3-3.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Find Greatest common divisor

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    int c ;
    int out = 0;
    for (c = 1; c < a | c < b; c ++) {
        if (a % c == 0 && b % c == 0) {
            out = c;
        }
    }
    printf("%d\n", out);
    return 0;
}