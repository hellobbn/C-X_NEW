//
//  assert.c
//  C
//
//  Created by BBN on 2018/3/11.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(void) {
    double x, y, z;
    
    puts("Entera a pair of numbers (0 0 to quit): ");
    while (scanf("%lf %lf", &x, &y) == 2 &&
           (x != 0 || y != 0)) {
        z = x * x - y * y;
        assert(z >= 0);
        printf("Answer is %f\n", sqrt(z));
        puts("NExt pair of numbers.");
    }
    puts("Done!\n");
    
    return 0;
}
