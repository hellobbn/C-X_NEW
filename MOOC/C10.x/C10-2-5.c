//
//  C10-2-5.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/17.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Read a struct
//
#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point get_struct(void)
{
    struct point p;
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    
    return p;
}

void out_struct(struct point out)
{
    printf("x = %i\ny = %i\n",out.x, out.y);
}

int main (void)
{
    struct point test = {0,0};
    test = get_struct();
    out_struct(test);
    
    return 0;
}
