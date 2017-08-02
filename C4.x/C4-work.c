//
//  C4-work.c
//  C-X_NEW
//
//  Created by BBN on 2017/8/2.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version 1.0
#include "stdio.h"

int main(int argc, char const *argv[]) {
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    int i = 2;
    int counter = 1;
    int sum = 0;
    
    while( counter <= y ) {
        int is_su = 1;
        /* Judge if it is a ? */
        for( int j = 2; is_su == 1 && j < i; j++) {
            if (i % j == 0)
            {
                is_su = 0;
            }
        }
        /* Sum Up */
        if (counter >= x && counter <= y && is_su == 1) {
            sum += i;
        }
        if (is_su == 1) {
            counter ++;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
