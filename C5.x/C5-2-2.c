//
//  C5-2-2.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//
//FInd ALL PRIMES LESS THAN ENTERED_NUMBER

#include <stdio.h>
int main()
{
    
    int entered_number;
    scanf("%d", &entered_number);
    int counter = 1;
    for (int begin = 2; begin < entered_number; begin++)
        //*****************************************
        //IF use counter < entered_number -- Well..
        //******************************************
    {
        int isPrime = 1;
        for (int i = 2; i < begin; i ++) {
            isPrime = begin % i;
            if (isPrime == 0) {
                break;
            }
        }
        if (isPrime != 0) {
            printf("%d  ",begin);
            counter++;
            if (counter % 5 == 0)
            {
            printf("\n");
            }
        }

    }
    printf("\nThere are %d primes less than %d\n", counter, entered_number);
    return 0;

}
