//
//  C-A-14.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/16.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
int custom_getline(char *str, int max);
int main(int argc, char *argv[]) {
    char line[MAXLINE];
    int found = 0;
    
    if (argc != 2) {
        printf("Usage: find pattern\n");
    } else {
        while (custom_getline(line, MAXLINE)) {
            if (strstr(line, argv[1]) != NULL) {
                printf("%s\n", line);
                found++;
            }
        }
    }
    return found;
}


