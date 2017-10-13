//
//  C-A-10.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/12.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version: 1.2.1
//  Updated: 2017-10-13
//
//
#include <stdio.h>
#include <stdlib.h>

#define DEBUG 1

#define INIT_S1_CHAR 50
#define INIT_S2_CHAR 100
void init_string(char str[], int size);
int read_str(char str[], int* size);
int check_legal(char str1[], int num_of_str1);
void expand(char str1[], char str2[], int num_of_str1, int num_of_str2);
int main() {
    int s1_size = INIT_S1_CHAR;
    int s2_size = INIT_S2_CHAR;
    char s1[s1_size];
    char* s2 = calloc(s2_size, sizeof(char));
    int i = 0;
    int isillegal = 0;                //  Check if the input is leagal
    init_string(s1, s1_size);
    init_string(s2, s2_size);
    i = read_str(s1, &s1_size);
    s1[i] = '\0';
    if(!(isillegal = check_legal(s1, i))){
        expand(s1, s2, i, s2_size);                    //  Temp debug with number 10 and 100
        if (DEBUG) {
            printf("%s\n", s1);
        }
        printf("%s\n", s2);
    } else {
        printf("Error: illegal input in function %s\n", __FUNCTION__);
        printf("Quitting");
        return 1;
    }
    return 0;
}

int read_str(char str[], int* size){
    char c;
    int i = 0;
    while (((c = getchar()) != EOF) && (i < *size)) {
        if (c == '\n') {
            break;
        }
        str[i++] = c;
    }
    return i;
}

void init_string(char str[], int size) {
    for (int i = 0; i < size; ++i) {
        str[i] = 0;
    }
}

int check_legal(char str1[], int num_of_str1){
    int i = 0;
    while (str1[i] == ' ') {
        ++i;
    }
    if ((str1[i] < 'A' && str1[1] > '9') || (str1[i] >= 'z') || str1[i] < '0') {
        return 1;
    }
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
            if (j == num_of_str2) {
                num_of_str2 += 5;
                str2 = realloc(str2, num_of_str2);
            }
        }
        ++i;
    }
    str2[++j] = '\0';
}
