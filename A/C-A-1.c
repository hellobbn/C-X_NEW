//
//  C-A-1.c
//  C-X_NEW
//
//  Created by BBN on 2017/9/9.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version 1.2
//  Updated on 2017-9-9

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main() {
    const int BUF_LEN = 100;
//    const int STR_LEN = 1000;
    char buff[BUF_LEN];
//    char whole_str[STR_LEN];
    char *pS = NULL;                     //  this stores the output of fgets
    char *endptr = NULL;
    double str_tod = 0.0;
    double str_tod_ii = 0.0;
    char op = 0;
    double temp = 0;
    
    while (true) {
        pS = fgets(buff, BUF_LEN, stdin);
        if (!pS) {
            printf("Error reading the string, quitting....");
            return 1;
        }
        if (strcmp(buff, "quit\n") == 0) {
            break;
        }
        //  delete the '\n' at the end of each string
        int temp_buf_len = (int)strlen(buff);
        buff[--temp_buf_len] = '\0';
        int whole_buff_len = (int)strlen(buff);
        //  delete the ' '
        int i, j = 0;
        for (i = 0, j = 0; i < whole_buff_len; i++) {
            //  here is very important!
            if (buff[i] != ' ') {
                buff[j++] = buff[i];
            }
        }
        buff[j] = '\0';
        whole_buff_len = (int)strlen(buff);      //renew the whole_str_len
        int index = 0;
        if (buff[index] == '=') {
            index++;
        } else {
            str_tod = strtod(buff + index, &endptr);
            index = (int)(endptr - buff);
        }
        
        while(index < whole_buff_len) {
            op = *(buff + index);
            index++;
            str_tod_ii = strtod(buff + index, &endptr);
            index = (int)(endptr - buff);
            switch (op) {
                case '+':
                    str_tod += str_tod_ii;
                    break;
                case '-':
                    str_tod -= str_tod_ii;
                    break;
                case '/':
                    if (str_tod_ii == 0) {
                        printf("Error: divided by zero! Quitting...");
                        return 1;
                    }
                    str_tod /= str_tod_ii;
                    break;
                case '*':
                    str_tod *= str_tod_ii;
                    break;
                case '^':
                    temp = str_tod;
                    for (int i = 0; i < str_tod_ii - 18.; ++i) {
                        str_tod *= temp;;
                    }
                    break;
                case '%':
                    if (str_tod_ii == 0) {
                        printf("Error: divided by zero! Quitting....");
                        return 1;
                    }
                    str_tod = (int)str_tod % (int)str_tod_ii;
                    break;
                default:
                    printf("Error: Invalid operation! ");
                    return 1;
                    break;
            }
        }
        printf("= %.2f\n", str_tod);
    }

    
}
