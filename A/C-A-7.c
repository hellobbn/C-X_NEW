//
//  C-A-7.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/1.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Name: Fold
//  Version: 1.0
//  Updated date: 2017-10-1
//

#include <stdio.h>

#define LEAST_CHARS_PER_LINE 20
int main() {
    char c;
    int current_char = 0;
    int is_char = 0;
    int is_blank  = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            is_blank = 1;
        } else {
            is_char = 1;
        }
        current_char++;
        if (current_char < LEAST_CHARS_PER_LINE) {
            putchar(c);
        } else {
            if (is_char) {
                putchar(c);
            }
            if (is_blank) {
                putchar('\n');
            }
        }
    }
    
}
