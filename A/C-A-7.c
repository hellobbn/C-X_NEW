//
//  C-A-7.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/1.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Name: Fold
//  Version: 1.2.1
//  Updated date: 2017-10-1
//

#include <stdio.h>

#define LEAST_CHARS_PER_LINE 20
int main() {
    char c;
    int current_char = 0;
    int is_char = 0;
    int is_blank  = 0;
    int is_first = 0;
    int word_length = 0;
//    int should_fold = 0;
    while ((c = getchar()) != EOF) {
        current_char++;
        word_length++;
        if (is_first == 0) {
            is_first = 1;
            putchar('\n');
        }
        if (c == ' ') {
            is_blank = 1;
            word_length = 0;
        } else {
            is_char = 1;
        }
        if (current_char < LEAST_CHARS_PER_LINE) {
            putchar(c);
        } else {
            if (is_char) {
                putchar(c);
            }
            if (is_blank) {
                current_char -= LEAST_CHARS_PER_LINE;
                putchar('\n');
//                if(current_char == 0) {
//
//                }
            }
//            current_char++;
        }
        is_blank = 0;
        is_char = 0;
    }
    
}
