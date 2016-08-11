//
//  C9-2-3.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  String Functions
//  strcmp()
//  Another Version strncmp() -- use man strncmp for more information!
//

#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "abcd";
    char b[] = "Ebcd";
    
    printf("%d\n",strcmp(a, b));
    
    return 0;
}
