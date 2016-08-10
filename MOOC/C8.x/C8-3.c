//
//  C8-3.c
//  C-X_NEW
//
//  Created by BBN on 2016/7/31.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Pointer Example - 3
//  Divide numbers
//

#include "stdio.h"

double divide(double a, double b, double *re);

int main(int argc, char const *argv[])
{
    double a = 2;
    double b = 5;
    double result;
    if (divide(a,b,&result) == 0)
    {
        printf("%.0f / %.0f = %.2f\n", a, b, result);
    }
    return 0;
}

double divide(double a, double b, double *re)
{
    if (b == 0)
    {
        return 1;
    }
    *re = a / b;
    return 0;
}
