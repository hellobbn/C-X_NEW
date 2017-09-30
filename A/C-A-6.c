//
//  main.c
//  PPRC
//
//  Created by BBN on 2017/9/25.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INIT_CHAR_NUM 20
#define INIT_STR_NUM 5
#define CHAR_ADD_PER_STEP 10
#define STR_ADD_PER_STEP 2
#define SPACE_EACH_BLANK 4
char** read_str(int* current_str_num);
int main(){
    char** str = NULL;
    int num_of_str = 0, blank_cnt = 0, blank_start = 0;
    str = read_str(&num_of_str);
    int i =0, j=0, k = 0;
    for(i = 0; i < num_of_str; ++i){
        for(j = 0; *(*(str + i) + j) != '\0'; ++j){
            if(*(*(str + i) + j) == ' '){
                blank_cnt ++;
                if (blank_cnt == 1) {
                    blank_start = j;
                }
            }
            if(*(*(str + i) + j) != ' ' || *(*(str + i) + j + 1) == '\0' ){
                if(!blank_cnt) {                //  if blank_cnt == 0
                    putchar(*(*(str + i) + j));
                } else {
                    int a = blank_start % SPACE_EACH_BLANK;
                    int tab_num = (((blank_cnt + a) % SPACE_EACH_BLANK) == 0? ((blank_cnt + a)/ SPACE_EACH_BLANK) : ((blank_cnt / SPACE_EACH_BLANK) + 1));
                    for(k = 0; k < tab_num; k++) {
                        putchar('\t');
                    }
                }
            }
        }
    }
}

char** read_str(int* current_str_num){
    char** string;
    char c;
    int max_str_num = INIT_STR_NUM;
    int max_char_num = INIT_CHAR_NUM;
    int current_char_num = 0;
    char* temp_str = calloc(max_char_num, sizeof(char));
    string = calloc(max_str_num, sizeof(char*));
    while((c = getchar()) != EOF) {
        if(current_char_num == max_char_num) {
            max_char_num += CHAR_ADD_PER_STEP;
            temp_str = realloc(temp_str, max_char_num);
        }
        if(c == '\n') {
            c = '\0';
            if(*current_str_num == max_str_num){
                max_str_num += STR_ADD_PER_STEP;
                string = (char**)realloc(string, max_str_num * sizeof(char*));
            }
            *(temp_str + current_char_num) = c;
            current_char_num = 0;
            *(string + *current_str_num) = calloc(current_char_num, sizeof(char));
            strcpy(*( string + *current_str_num), temp_str);
            (*current_str_num)++;
        } else {
            *(temp_str + current_char_num) = c;
            current_char_num ++;
        }
        
    }
    return string;
}
