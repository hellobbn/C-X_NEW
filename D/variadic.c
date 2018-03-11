//
//  variadic.c
//  C
//
//  Created by BBN on 2018/3/11.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main() {
    double x = 48;
    double y;
    
    y = sqrt(x);
    PR(1, "X = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y);
    
    return 0;
}
