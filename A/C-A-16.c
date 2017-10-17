//
//  C-A-16.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/17.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  A Calculator Program
//  Version: 1.0
//  Updated on: 2017/10/17
//

#include <stdio.h>
#include <ctype.h>

int push(int number);               //  Push the number
int pop(void);                      //  For poping
int main( ) {
    char c;                         //  Store the input
    int number_sto = 0;             //  Temprarily store the number
    int sign;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            continue;
        }
        sign = c == '-'? -1 : 1;
        if (isdigit(c)) {
            number_sto = c - '0';
            while (isdigit(c = getchar())) {
                number_sto = number_sto * 10 + c - '0';
            }
            push(number_sto);
        }
    }
}
