//
//  C4-2-4.c
//  C-X
//
//  Created by BBN on 16/5/28.
//  Copyright © 2016年 BBN. All rights reserved.
//

//This Programe Aims at ...///
#include <stdio.h>


int main()
{
    int entered_number = 0;
    printf("Simply Enter the number please:");
    scanf("%d", &entered_number);
    int ret = 0;
    
    while (entered_number > 0)
    {
        int digit = entered_number % 10;
        entered_number /= 10;
        printf("%d", digit);
        ret = ret * 10 + digit;
    }
    
    printf("\n%d", ret);
    
    return 0;
    
}
