//
//  C5-Test.c
//  C-X
//
//  Created by BBN on 16/6/26.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    int sum = 0;
    for ( int i=0; i<10; i++ ) {
        if ( i%2 ) break;
        sum += i;
    }
    printf("%d\n", sum);

    
}
