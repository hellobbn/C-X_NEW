//
//  C6-init_test.c
//  C-X_NEW
//
//  Created by BBN on 16/7/7.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    char i[5];
    scanf("%s",i);
    
    for (int b = 0; b <= 5; b++) {
        printf("%c\n",i[b]);
    }
    return 0;
}
