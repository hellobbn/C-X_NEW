//
//  C11-4.c
//  C-X_NEW
//
//  Created by BBN on 2017/8/20.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include "stdio.h"
#include "string.h"
#include "strings.h"

int main(int argc, char const *argv[])
{
    char strBuf[100];
    char str[1000];
    do{
        fgets(strBuf, sizeof(strBuf), stdin);
        strcat(str, strBuf);
    } while(strBuf[0] != '\n');
    
    //    strtok begin here
    char delimeters[] = " \".,;:!?)(\n";
    char* wordsBuf;
    char* words[1000] = {0};
    int counter[1000] = {0};
    wordsBuf = strtok(str, delimeters);
    words[0] = wordsBuf;
    counter[0]++;
    int i = 1;
    while((wordsBuf = strtok(NULL, delimeters))) {
//        printf("%s\n", wordsBuf);
        int isSame = 0;
        for (int x = 0; x < i && isSame == 0; ++x)        //    This function will find if the word matches the former
        {
            if (strcasecmp(wordsBuf, words[x]) == 0)
            {
                counter[x] ++;
                isSame = 1;
            }
        }
        if (isSame == 0)
        {
            words[i] = wordsBuf;
            counter[i]++;
            i++;
        }
    }
    for (int x = 0; x < i; ++x)
    {
        printf("%s\t%d\n",words[x], counter[x] );
    }
    return 0;
}
