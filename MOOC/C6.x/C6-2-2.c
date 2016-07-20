//
//  C6-2-2.c
//  C-X_NEW
//
//  Created by BBN on 16/7/19.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Version: 1.1.0
//  Update date: 7/20/2016
//  Status: Beta
//


#include <stdio.h>
#include <math.h>

//  Function
int isPrime(int input, int All_P[], int num);

int main()
{
    int input_num;
    int Primes[10000] = {2};
    int prime_test = 3;
    int cnt = 1;
    
    scanf("%d",&input_num);
    while (prime_test < input_num)
    {
        int judge_Prime = 0;
        for (int i = 2; i < prime_test; i++)
        {
            if (prime_test % i == 0)
            {
                judge_Prime = 1;
                break;
            }
        }
        if (judge_Prime == 0)
        {
            Primes[cnt] = prime_test;
            cnt++;
        }
        prime_test++;
    }
    
    if (isPrime(input_num, Primes,cnt-1) == 1) {
        printf("No");
    }else{
        printf("Yes");
    }

//    FOR TEST
//    for (int x = 0; x < cnt; x++) {
//        printf("x = %d", x);
//        printf("%d\n",Primes[x]);
//    }
//    printf("%d",Primes[1]);
    return 0;
}

int isPrime(int input, int All_P[],int num)
{
    int ret = 0;
    for (int i = 0; i <= num; i ++)
    {
//        printf("i = %d, = %d",i, All_P[i]);
        if (input % All_P[i] == 0) {
            ret = 1;
        }
    }
    return ret;
}
