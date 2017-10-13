//
//  C-A-11.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/13.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version 1.1
//  Updated on: 2017 - 10 - 13

#include <stdio.h>
#include <stdlib.h>

#define INIT_INSTR_LEN 50
#define INIT_SERSTR_LEN 10
int getStr(char str[], int str_len);
int searchd(char inStr[], char targetStr[], int inStr_len, int targerStr_len);
int main() {
    char inputStr[100] = {};
    char searchedStr[100] = {};
    int position = 0;
    int inputStrLen = INIT_INSTR_LEN, searchedStrLen = INIT_SERSTR_LEN;
    /*  Get the string */
    inputStrLen =  getStr(inputStr, inputStrLen);
    searchedStrLen = getStr(searchedStr, searchedStrLen);
    
    /*  Search the string */
    position = searchd(inputStr, searchedStr, inputStrLen, searchedStrLen);
    
    /*  Output */
    printf("%d\n", position);
    
    /*  End */
    return 0;
}

int getStr(char str[], int str_len) {
    char c;
    int cnt = 0;
    while ((c = getchar()) != '\n') {
        str[cnt++] = c;
        if (cnt == str_len) {
            str_len += 5;
            str = realloc(str, str_len);
        }
    }
    str[cnt] = '\0';
    return cnt;
}

int searchd(char inStr[], char targetStr[], int inStr_len, int targetStr_len) {
    int i = 0, j = 0;
    int found = 1;
    int pos = 0;
    for (i = 0; i < inStr_len; ++i) {
        found = 1;
        if (inStr[i] == targetStr[j]) {
            pos = i;
            for (int x = i; x < targetStr_len; ++x, ++j) {
                if (inStr[x] != targetStr[j]) {
                    found = 0;
                    break;
                }
            }
            if (targetStr[++j] == '\0') {
                return ++pos;
            }
        }
    }
    return -1;
}
