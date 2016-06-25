//
//  C5-1-1.c
//  C-X
//
//  Created by BBN on 16/5/28.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    int end = 0;
    
    printf("Enter The end:");
    scanf("%d", &end);
    
    int sum = 1;
    for (int i = 1; i <= end; i ++) {
        sum = sum * i;
        }
    printf("%d", sum);
    return 0;
}