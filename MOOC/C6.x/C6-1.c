//
//  C6-1.c
//  C-X_NEW
//
//  Created by BBN on 16/7/8.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Calculate average
//  Version: 1.0
//  Update time: 7/8/2016

#include <stdio.h>

int main()
{
    int x;
    double sum;
    int cnt = 0;
    scanf("%d", &x);
    while (x != -1) {
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }
    if (cnt > 0) {
        printf("%f\n", sum/cnt);
    }
    return 0;
}
