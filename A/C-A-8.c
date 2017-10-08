//
//  C-A-8.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/8.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>

int main(){
    char c;
    int inStr = 0, back_num = 0;
    int is_inComment = 0;
    while ((c = getchar()) != EOF) {
        if (((c == '\"') | (c == '\''))) {
            if (inStr) {
                inStr = 0;
            } else {
                inStr = 1;
            }
        }                                           //  Judge if it is in string ends
        if (c == '/') {
            back_num ++;
        }
        if ((back_num) && (!inStr)) {
            // it is in a comment
            is_inComment = 1;
        }
        if (!is_inComment) {
            putchar(c);
        }
        if(c == '\n') {
            // Reset all
            inStr = 0;
            back_num = 0;
            is_inComment = 0;
            putchar('\n');
        }
    }
}
