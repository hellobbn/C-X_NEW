//
//  C5-TEST.c
//  C-X_NEW
//
//  Created by BBN on 16/7/7.
//  Copyright © 2016年 BBN. All rights reserved.
//
//Decomposition of the quality factor
//
//Upgrade time: July 7th, 2016
//Version: 1.2
 

#include <stdio.h>

void down(unsigned long long int x);

int main()
{
    unsigned long long int read_number = 2;
    scanf("%lld",&read_number);
    if (read_number < 2) {
        printf("Invalid Input");
        return 1;
    }
    printf("%llu=",read_number);
    down(read_number);
    return 0;
}

void down(unsigned long long int x)
{
    int counter = 1;
    for (int i = 2; i > 1 & i <= x; i++) {
        while (x % i == 0) {
            if (counter == 1) {
                printf("%d", i);
            }else{
                printf("x%d", i);
            }
            counter++;
            x = x / i;
            }
        }
        printf("\n");
    }
    
