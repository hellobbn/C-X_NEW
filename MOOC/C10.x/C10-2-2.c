//
//  C10-2-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Possible Usage of Structure

#include <stdio.h>

struct point{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;
    p1 = (struct point){5,10};
    
    p2 = p1;
    
    return 0;
}
