//
//  varwid.c
//  C
//
//  Created by BBN on 2018/3/11.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>
int main(void) {
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    
    printf("Enter a field width: \n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    printf("Now enter a width and a precision: \n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");
    
    return 0;
    
}
