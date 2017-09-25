//
//  C-A-3.c
//  C-X_NEW
//
//  Created by BBN on 2017/9/17.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdbool.h"

#define PER_ADD 5
// #define STR_CAP STR_LEN * sizeof(char))
int main(int argc, char const *argv[])
{
    int BUF_LEN =100;
    int STR_LEN = 50;
    char buffer[BUF_LEN];                        //    init buffer
    char *str = malloc(STR_LEN);                //    the entire str
    char delimeters[] = " \n\",.();:!?";
    // char* ERROR;
    while(true) {
        fgets(buffer, BUF_LEN, stdin);            //    get one string in buffer
        if (buffer[0] == '\n')
        {
            break;
        }
        if (strlen(buffer) + strlen(str) + 1 > STR_LEN)
        {
            STR_LEN = (int)(strlen(buffer) + strlen(str) + 1);
            str = realloc(str, STR_LEN);                //    re-allocate memory
        }
        if (!strcat(str, buffer))                        //     link the strings
        {
            printf("Error reading the string, quitting...\n" );
            return 1;
        }
        
        
    }
    int maxWords = 10;
    char **pWords = calloc(maxWords, sizeof(char*));        //    This stores the words
    int *words_number = calloc(maxWords, sizeof(int));                             //    This stores the number of words
    int count = 0;
    
    char *pWord = strtok(str, delimeters);
    if (!pWord)
    {
        printf("Error no words found\n");
        return 1;
    }
    
    int is_new = 1;
    while(pWord) {
        for (int i = 0; i < count; ++i)
        {
            if (strcmp(pWord, *(pWords + i)) == 0)
            {
                //    We found it is the same to the former words, Add the cnt
                *(words_number + i) += 1;
                is_new = 0;
            }
        }
        if (is_new == 1)
        {
            //    The check if the memory is enough -- if not, use realloc the make it bigger
            if (count == maxWords)
            {
                maxWords += PER_ADD;
                pWords = realloc(pWords, maxWords * sizeof(char*));
                words_number = realloc(words_number, maxWords * sizeof(int));
            }
            //    Now the memory is enough, stepping to add the new word and the count
            *(pWords + count) = pWord;
            *(words_number + count) += 1;
            //  Debug
            {
                printf("%d\n", *(words_number + count));
            }
            //  Finally add the count
            count++;
        }
        //    prepare for the next loop
        is_new = 1;
        pWord = strtok(NULL, delimeters);
    }
    //    Output
    int prt_cnt = 0;
    for (int i = 0; i < count;     ++i)
    {
        
        printf("%s\t%d\t\t", *(pWords + i), *(words_number + i));
        prt_cnt ++;
        if (prt_cnt == 5)
        {
            printf("\n");
        }
    }
    // printf("%ld\n",sizeof(char) );
    return 0;
}
