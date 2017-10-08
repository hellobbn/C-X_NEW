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
    while ((c = getchar()) != EOF) {
        if (((c == '\"') | (c == '\''))) {
            if (inStr) {
                inStr = 0;
            } else {
                inStr = 1;
            }
        }                                           //  Judge if it is in string ends
        if (c == '\\') {
            back_num ++;
        }
        if ((back_num == 2) && (!inStr)) {
            // it is in a comment
        } else {
            putchar(c);
        }
        
        if(c == '\n') {
            // Reset all
            inStr = 0;
            back_num = 0;
            putchar('\n');
        }
    }
}
