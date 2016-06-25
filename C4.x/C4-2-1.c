//
//  C4-2-1.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int x;
    int ret = 0;
    
    scanf("%d", &x);
    int t = x;
    while (x > 1) {
        x /= 2;
        ret ++;
    }
    printf("log2 of %d is %d", t, ret);
    
    return 0;
}