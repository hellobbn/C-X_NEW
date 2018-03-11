//
//  width.c
//  C
//
//  Created by BBN on 2018/3/11.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>
#define PAGES 959

int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    
    return 0;
}
