//
//  C-A-12.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/13.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

double custom_atof(char s[]) {
    double val, power;
    int i, sign;
    int isScience = 0;
    int scienceSign = 0;
    int scienceVal = 0;
    
    for (i = 0; s[i] == ' '; ++i)  ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+') {
        ++i;
    }
    for (val = 0.0; isdigit(s[i]); ++i) {
        val = val * 10 + (s[i] - '0');
    }
    if (s[i] == '.') {
        ++i;
    }
    for (power = 1.0; isdigit(s[i]); ++i) {
        val = val * 10 + (s[i] - '0');
        power *= 10;
    }
    if (tolower(s[i]) == 'e') {
        isScience = 1;
        ++i;
    }
    
    scienceSign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+') {
        ++i;
    }
    for (scienceVal = 1; isdigit(s[i]); ++i) {
        scienceVal = 10 * scienceVal + (s[i] - '0');
    }
    if (isScience) {
        if (sign == 1) {
            for (int j = 0; j < scienceVal; ++j) {
                power /= 10;
            }
        } else {
            for (int j = 0; j < scienceVal; ++j) {
                power *= 10;
            }
        }
    }
    return sign * val / power;
}
