//
//  C9-1-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/10.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  String Example - 1

#include <stdio.h>

int main()
{
    int i;
    char *s = "Hello, World!";
    char *s2 = "Hello, World!";
    char s3[] = "Hello, World!";
    
    printf("&i = %p\n", &i);
    printf("*s = %p\n",s);
    printf("*s2 = %p\n", s2);
    printf("*s3 = %p\n", s3);
    printf("s3 = %s\n\n", s3);
    s3[0] = 'B';
    printf("Change s3[0] to B\n\n");
    printf("s3' = %s\n", s3);
    
//    s[0] = 'h';             // Will FAIL to RUN
    
    return 0;
}
