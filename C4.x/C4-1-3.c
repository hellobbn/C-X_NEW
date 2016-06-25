//
//  C4-1-2.c
//  C-X
//
//  Created by BBN on 16/3/19.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int x;
    int n = 0;
    
    scanf("%d", &x);
        
    while (x>0){
        n++;
        x /= 10;
        }
    printf("%d\n", n);
    return 0;
}
