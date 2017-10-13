//
//  C-A-10.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/12.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version: 1.0
//  Updated: 2017-10-12
//
//
#include <stdio.h>

#define DEBUG 1

void expand(char str1[], char str2[], int num_of_str1, int num_of_str2);
int main() {
    char s1[10] = {0}, s2[100] = {0};
    int i = 0;
    char c = 0;
    while (((c = getchar()) != EOF) && (i < 9)) {
        if (c == '\n') {
            break;
        }
        s1[i++] = c;
    }
    s1[i] = '\0';
    expand(s1, s2, i, 100);                    //  Temp debug with number 10 and 100
    if (DEBUG) {
        printf("%s\n", s1);
    }
    printf("%s\n", s2);
    
    return 0;
}

void expand(char str1[], char str2[], int num_of_str1, int num_of_str2) {
    int start = 0, end = 0;
    int i = 0;
    while (str1[i] == ' ') i++  ;                //  If blank -- do nothing!
    int x, j = 0;
    while (str1[i] != '\0') {
        if (str1[i] > 0) {
            start = str1[i];
        }
        if (str1[++i] == '-') {
            end = str1[++i];
        }
        int temp = j;
        for (x = start; j - temp < end - start + 1; ++x, ++j) {
            str2[j] = x;
        }
        ++i;
    }

}
