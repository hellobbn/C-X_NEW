//
//  C4-1-1.c
//  C-X
//
//  Created by BBN on 16/3/19.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


//While and For is where I am weak........
//This program is designed to calculate the nunber “位数”

int len_main(void)
{
    //Init
    unsigned long long number = 0;
    printf("Enter the number(less than %llu):", ULLONG_MAX/2);
    scanf("%lld", &number);
    
    //While -- Where I am afraid
    int counter = 0; //Store the current “位数”
    while (number) {
        number = number / 10;
        counter ++;
    }
    printf("The number's length is: %d\n", counter);
    return 0;
}
