//
//  C6-2-2.c
//  C-X_NEW
//
//  Created by BBN on 16/7/19.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

//  Function
int isPrime(int x);

int main()
{
    int input_number;
    printf("Enter a number please:");
    scanf("%d", &input_number);
    
    if (isPrime(input_number)) {
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

int isPrime(int x)
{
    for (int i = 2; i < x; i ++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}
