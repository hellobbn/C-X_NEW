//
//  C6.c
//  C-X_NEW
//
//  Created by BBN on 16/7/20.
//  Copyright © 2016年 BBN. All rights reserved.
//
//Version 1.2

#include "stdio.h"

void print(int a, int b);
int main(int argc, char const *argv[])
{
    int saver[101] = {0};
    int a = 0;                 //    save 幂次
    int b = 0;                //    save 幂数
    int cnt = 0;            //     记录 0 个数
    while( cnt != 2)
    {
        scanf("%d %d", &a, &b);
        saver[a] += b;
        if (a == 0)
        {
            cnt++;
        }
    }
    cnt = 0;
    for (int i = 100; i >= 0; --i)
    {
        if(saver[i] != 0)
        {
            if(i != 0){
                if (cnt == 0)
                {
                    print(saver[i], i);
                    cnt ++;
                } else if (saver[i] > 0){
                    printf("+");
                    print(saver[i], i);
                } else {
                    print(saver[i], i);
                }
            } else if(cnt == 0){
                printf("%d", saver[i]);
            } else {
                printf("+%d", saver[i]);
            }
            
        }
        if (cnt == 0 && i == 0 && saver [i] == 0) {
            printf("0");
        }
    }
    return 0;
}

void print(int a, int b) {              //a = saver[i] b = i
    if (a == 1) {
        if (b == 1) {
            printf("x");
        } else {
            printf("x%d", b);
        }
    } else if(a == -1) {
        if (b == 1) {
            printf("-x");
        } else {
            printf("-x%d", b);
        }
    } else {
        if (b == 1) {
            printf("%dx", a);
        } else {
            printf("%dx%d", a, b);
        }
    }
}
