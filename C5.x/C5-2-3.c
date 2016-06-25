//
//  C5-2-3.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Calculate money
//  Jump out of a huge loop

#include <stdio.h>

int main()
{
    int one, two, three;
    for (one = 0; one <= 10 / 0.1; one ++) {
        for (two = 0; two <= 10 / 0.2; two ++) {
            for (three = 0; three <= 10 / 0.5; three ++) {
                if (one * 0.1 + two * 0.2 + three * 0.5 == 10) {
                    printf("One:%d , Two:%d, Five:%d\n",one , two, three);
                    goto out;
                }
            }
        }
    }
out:
    return 0;
}
