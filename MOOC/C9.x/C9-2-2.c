//
//  C9-2-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  String Functions
//  size_t strlen(const char *s)
//

#include <stdio.h>
#include <string.h>

int main()
{
    char line[] = "Hello";
    printf("strlen = %lu\n",strlen(line));
    printf("sizeof = %lu\n",sizeof(line));
    
    return 0;
}
