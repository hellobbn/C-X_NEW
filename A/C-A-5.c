//
//  main.c
//  PPRC
//
//  Created by BBN on 2017/9/25.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define INIT_STR_NUM 10
#define INIT_WORDS_NUM 10
#define CHR_STEP 5
#define STR_STEP 1
void print(char** string, int str_num);
int main(void) {
    char c;
    int max_words = INIT_WORDS_NUM;
    int max_str = INIT_STR_NUM;
    char **str = calloc(max_str, sizeof(char*));
    char* str_temp = calloc(max_words, sizeof(char));
    int char_num = 0;
    int str_num = 0;
    while ((c = getchar()) != EOF) {
        if (char_num == max_words) {
            max_words += CHR_STEP;
            str_temp = realloc(str_temp, max_words * sizeof(char));
        }
        if(c != '\n') {
            *(str_temp + char_num) = c;
            char_num++;
        } else {
            c = '\0';
            *(str_temp+ char_num) = c;
            char_num++;
            if (max_words >= 80) {
                if (str_num == max_str) {
                    max_str += STR_STEP;
                    str = realloc(str, max_str*sizeof(char*));
                }
                *(str + str_num) = calloc(max_words, sizeof(char));
                for (int i = 0; i < char_num; ++i) {
                    *(*str + i) = *(str_temp + i);
                }
                str_num++;
            }
            max_words = 0;
        }
    }
    print(str, str_num);
}

void print(char** string, int str_num) {
    for (int i = 0; i < str_num; ++i) {
        printf("%s\n", *(string + i));
    }
}

