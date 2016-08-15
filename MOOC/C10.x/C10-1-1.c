//
//  C10-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  enum example
//

#include <stdio.h>

enum COLOR {RED, YELLOW, GREEN};

int main()
{
    int color = -1;
    char *colorName = NULL;
    
    printf("Enter a Number:");
    scanf("%d", &color);
    
    switch (color) {
        case RED:
            colorName = "red";
            break;
        case YELLOW:
            colorName = "yellow";
            break;
        case GREEN:
            colorName = "green";
            break;
        default:
            colorName = "unknow";
            break;
    }
    
    printf("You entered:%s\n",colorName);
    
    return 0;
}
