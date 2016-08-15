//
//  C10-1-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

enum color {red, green, blue};

void f(enum color c);

int main()
{
    enum color t = red;
    
    scanf("%d", &t);
    f(t);
    
    return 0;
}

void f(enum color c)
{
    printf("%d\n",c);
}
