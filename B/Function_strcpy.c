//
//  Function_strcpy.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/16.
//  Copyright © 2017年 BBN. All rights reserved.
//


void custom_strcpy(char from[], char to[]) {
    while ((*to = *from) != '\0') {
        ++to;
        ++from;
    }
}
