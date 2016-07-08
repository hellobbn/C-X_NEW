//
//  C6-1.c
//  C-X_NEW
//
//  Created by BBN on 16/7/8.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Calculate average
//  Version: 1.1
//  Update time: 7/8/2016

#include <stdio.h>

int main()
{
    int x;
    double sum;
    double average;
    int cnt = 0;
    int number[100];
    scanf("%d", &x);
    
    while (x != -1) {
        number[cnt] = x;
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }
    average = sum/cnt;
    if (cnt > 0) {
        printf("The average is:%f\n", average);
    }
    printf("And the numbers larger than(>=) the average(%f) are:\n", average);
    for (int i = 0; i <=cnt; i++) {
        if (number[i] >= average) {
            printf(" %d ",number[i]);
        }
    }
    return 0;
}
