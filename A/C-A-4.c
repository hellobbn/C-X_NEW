//
//  C-A-4.c
//  C-X_NEW
//
//  Created by BBN on 2017/9/26.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define INIT_WORDS 10
#define WORDS_EACH_STEP 5
int main(void)
{
    char c;
    int len_cnt = 0;
    int now_num_of_words = 0;
    int isBlank = 0;
    int num_of_words = INIT_WORDS;
    int *len_of_words = calloc(num_of_words, sizeof(int));        //  Allocate some space for recording the length
    while ((c = getchar()) != EOF) {
        if(c != ' ') {
            isBlank = 0;
            len_cnt ++;
        }
        if(( (c == ' ') || c == '\n')&& (isBlank == 0) ){
            isBlank = 1;
            if (now_num_of_words == num_of_words) {
                num_of_words += WORDS_EACH_STEP;
                len_of_words = realloc(len_of_words, num_of_words * sizeof(int));
            }
            *(len_of_words + now_num_of_words) = len_cnt;
            now_num_of_words ++;
            len_cnt = 0;
        }
    }
    //  Determine the largest number
    int max = 0;
    for (int x = 0; x < num_of_words; x++) {
        if (max < *(len_of_words + x)) {
            max = *(len_of_words + x);
        }
    }
    //  Now draw the graph
    for (int i = max; i > 0; --i) {
        for (int j = 0; j < now_num_of_words; j++) {
            if ((*(len_of_words + j)) >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
