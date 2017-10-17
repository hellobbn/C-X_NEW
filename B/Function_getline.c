//
//  Function_getline.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/17.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
int custom_getline(char *str, int max) {
    int i;
    char c;
    char *p = str;
    while ((c = getchar()) != '\n') {
        *(str++) = c;
    }
    *str = '\0';
    return str - p;

}
