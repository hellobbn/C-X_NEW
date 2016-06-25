//
//  C3-2-3.c
//  C-X
//
//  Created by BBN on 16/3/19.
//  Copyright © 2016年 BBN. All rights reserved.
//
#include "stdio.h"

int main(void)
{
    int begin,end;
    int Prime = 2;
    int counter = 1;
    int isPrime = 0;
    
    //Read
    scanf("%d",&begin);
    
    //Loop 1
    while(counter < begin)
    {
        for (int i = 2; i < Prime; ++i)
        {
            isPrime = Prime % i;
            if (isPrime == 0) {
                break;
            }
        }
        if (isPrime == 1)
        {
            counter++;
        }
        Prime++;
    }
    printf("counter = %d\n", counter);
    printf("x = %d\n",Prime-1 );
    return 0;
}
