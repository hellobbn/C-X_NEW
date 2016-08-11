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
#warning:  Please compile it with C9-2-2-mylen.c and C9-2-2.h!!

#include "C9-2-2.h"

int main()
{
    char line[] = "Hello";
    printf("strlen = %lu\n",strlen(line));
    printf("mylen = %d\n", mylen(line));
    printf("sizeof = %lu\n",sizeof(line));
    
    return 0;
}

//  Let's find out how strlen() works!
//  please see C9-2-2-mylen.c
