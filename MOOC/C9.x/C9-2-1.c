//
//  C9-2-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  string functions
//  int putchar()
//  int getchar()
//

#include <stdio.h>

int main(void)
{
    int ch;
    
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    
    printf("%c",ch);
    return 0;
}


