//
//  C3-2-2.c
//  C-X
//
//  Created by BBN on 16/3/19.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int x;
    
    printf("Enter some numbers:");
    scanf("%d", &x);
    
    int f = 0;
    if (x < 0){
        f = -1;
    }
    else if (x == 0){
        f = 0;
    }
    else{
        if (x > 5) {
            f = 2 * x;
        }
        else{
            f = 3 * x;
        }
    }
    
    printf("%d\n", f);
    
    return 0;
}