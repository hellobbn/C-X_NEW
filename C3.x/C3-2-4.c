//
//  C3-2-4.c
//  C-X
//
//  Created by BBN on 16/3/19.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    int type;
    
    scanf("%d", &type);
    
    switch (type)
    {
        case 1:
            printf("hello\n");
            break;
        case 2:
            printf("morning\n");
            break;
        case 3:
            printf("evening\n");
            break;
        case 4:
            printf("GoodBye\n");
        default:
            printf("What???\n");
            break;
    }
    return 0;
}
