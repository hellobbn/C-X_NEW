//
//  C10-1-3.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

enum colors { red, yellow, green, NumCOLORS};

int main()
{
    int color = -1;
    char *ColorNames[NumCOLORS] = {
        "red","yellow","green"
    };
    char *colorName = NULL;
    
    printf("Enter a number:");
    scanf("%d",&color);
    
    if (color >= 0 && color < NumCOLORS) {
        colorName = ColorNames[color];
    } else{
        colorName = "unknown";
    }
    printf("It is %s\n",colorName);

    return 0;
}
