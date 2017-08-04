//
//  C6-3.c
//  C-X_NEW
//
//  Created by BBN on 2017/8/4.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version 1.1
//  Update on 2017-8-4

#include "stdio.h"

int isPrime(int input, int inPrimeList[], int number);

int main(int argc, char const *argv[])
{
    const int number = 100;
    int primeList[number] = {2};
    int cnt = 1;
    int i = 3;
    while( cnt < number )
    {
        if (isPrime(i, primeList, cnt) == 1)
        {
            primeList[cnt++] = i;
        }
        i++;
    }
    
    for (cnt = 0; cnt < number; ++cnt)
    {
        printf("%d\t",primeList[cnt] );
        if ((cnt + 1) % 5 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}

int isPrime(int input, int inPrimeList[], int number)
{
    int is_true = 1;
    for (int i = 0; i < number; ++i)
    {
        if (input / inPrimeList[i] != 0)
        {
            is_true = 0;
            break;
        }
    }
    return is_true;
}

