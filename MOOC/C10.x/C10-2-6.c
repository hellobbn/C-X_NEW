//
//  C10-2-6.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/17.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Use a pointer.
//

#include <stdio.h>

struct point {
    int x;
    int y;
};

void get_struct(struct point *in)
{
    scanf("%d",&in->x);
    scanf("%d",&in->y);
}

void output(struct point *out)
{
    printf("x = %d\n",out->x);
    printf("y = %d\n",out->y);
}
int main()
{
    struct point test;
    get_struct(&test);
    output(&test);
    
    return 0;
}
