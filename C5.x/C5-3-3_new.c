//
//  C5-3-3_new.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  This program is updated from C5-3-3.c
//  Using Euclidean algorithm
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    do {
        c = a % b;
        a = b;
        b = c;
        
    } while (b != 0);
    printf("%d\n", a);
    return 0;
}