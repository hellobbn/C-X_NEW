//
//  C9-2-6.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Search a string
//  strchr() strrchr()

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[] = "hello";
    char *p = strchr(s, 'l');
//    p = strchr(p+1, 'l');
//    printf("%s\n", p);
    char *t = (char*)malloc(strlen(p) + 1);
    strcpy(t, p);
    printf("%s\n",t);
    printf("%c\n", *p);
    free(t);
    
    return 0;
}
