//
//  C-A-8.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/8.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version: 2.1
//  Updated on: 2017 - 10 - 8

#include <stdio.h>
/* ddd
 ddd
 */
int main(){
    char c;
    int inStr = 0;
    int backCnt = 0;
    int inComment = 0;
    int inLongComment = 0;
    int temp_index = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            //  Reset something
            inComment = 0;
            backCnt = 0;
        }
        if(!inLongComment || !inComment){
            if ((c == '\'') || (c == '"')) {
                    inStr = !inStr;
            }
        }
        if ((!inStr) && ((!inComment) && (!inLongComment))) {
            if ((backCnt == 1) && (!inComment) && (!inLongComment)) {
                if (c == '*') {
                    inLongComment = 1;
                    c = ' ';
                } else if (c == '/') {
                    inComment = 1;
                    c = ' ';
                }
                
            }
            if (c == '/') {
                backCnt++;
                c = ' ';
            }
        }
        if (inComment || inLongComment) {
            putchar(' ');
        } else {
            putchar(c);
        }

        if (inLongComment) {
            if (temp_index == 1) {
                if (c != '/') {
                    temp_index = 0;
                } else {
                    inLongComment = 0;
                }
            }
            if (c == '*') {
                temp_index = 1;
            }

        }
    }
}
