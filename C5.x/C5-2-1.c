//
//  C5-2-1.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//
//This Program aimed at find if the entered number is a Prime numbers

//Wengkai Version
//int main()
//{
//    int x;
//    
//    scanf("%d", &x);
//    int isPrime = 1;
//    
//    for (int i=2; i < x; i++) {
//        if (x % i == 0) {
//            isPrime = 0;
//            break;
//        }
//    }
//    
//    if (isPrime == 1) {
//        printf("yes.");
//    }else{
//        printf("No.");
//    }
//    return 0;
//}


#include <stdio.h>
int main()
{
    int entered_number;
    scanf("%d", &entered_number);
    int out = 0;
    
    for (int i = 2; i < entered_number; i ++) {
        out = entered_number % i;
        if (out == 0) {
            break;
        }
    }
    if (out == 0) {
        printf("No.");
    }else{
        printf("Yes.");
    }
    return 0;

}
//We should be aware of two functions: break and countinue

