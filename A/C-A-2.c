//
//  C-A-2.c
//  C-X_NEW
//
//  Created by BBN on 2017/9/10.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    const int BUFF_LEN = 100;
    char* buf = malloc(BUFF_LEN * sizeof(char));
    char* pS = NULL;
    pS = fgets(buf, BUFF_LEN, stdin);
    if (!pS) {
        printf("Error 1");
        return 1;
    }
    //  A. delete '\n'
    int buff_num = (int)strlen(buf);
    buff_num -= 1;
    *(buf + buff_num) = '\0';
    //  C. delete other things
    for (int i = 0; i < buff_num; ++i) {
        if (ispunct(*(buf + i))) {
            *(buf + i) = ' ';
        }
    }
    //  B. delete space
    int i = 0, j = 0;
    for (i = 0, j = 0; i < buff_num; ++i) {
        if (*(buf + i) != ' ') {
            *(buf + j++) = *(buf + i);
        }
    }
    buf[j] = '\0';
    buff_num = (int)strlen(buf);
    for (int i = 0; i < buff_num; ++i) {
        printf("%c", *(buf + i));
    }
    return 0;
}
