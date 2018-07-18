//
//  2797_new.c
//  CProgDesign
//
//  Created by Chen LF on 2018/7/17.
//  Copyright © 2018 Chen LF. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 1000
#define MAX_CHAR 22

struct aWord {
    char word[MAX_CHAR];
    int wordSize;
    int printSize;
    int turn;
};

typedef struct aWord sWord;
typedef sWord* pWord;

pWord MakeWord(void) {
    return malloc(sizeof(struct aWord));
}

int maximum(int a, int b) {
    if (a < b) {
        return b;
    } else {
        return a;
    }
}

int minimum(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}
int compare(const void* wordA,const void* wordB) {
    const pWord* wa = (pWord*)wordA;
    const pWord* wb = (pWord*)wordB;
    return strcmp((*wa)->word, (*wb)->word);
}

int compareInt(const void* wordA,const void* wordB) {
    const pWord* wa = (pWord*)wordA;
    const pWord* wb = (pWord*)wordB;
    if ((*wa)->turn > (*wb)->turn) {
        return 1;
    } else if ((*wa)->turn == (*wb)->turn) {
        return 0;
    } else {
        return -1;
    }
}
int main(void) {
    int numWord = 0;
    pWord* wordList = malloc(sizeof(pWord) * MAX_WORD);
    
    for (int i = 0; i < MAX_WORD; i ++) {
        wordList[i] = MakeWord();
    }
    while (fgets(wordList[numWord]->word, MAX_CHAR, stdin) != NULL) {
        strtok(wordList[numWord]->word, "\n ");
        wordList[numWord]->wordSize = (int)strlen(wordList[numWord]->word);
        wordList[numWord]->turn = numWord;
        numWord++;
    }
    qsort(wordList, numWord, sizeof(pWord), compare);
    int search = 0;
    int search_after = 0;
    for (int i = 0; i < numWord; ++ i) {
        search = 0;
        search_after = 0;
        if (i == 0) {
            while (strncmp(wordList[i]->word, wordList[i + 1]->word, search) == 0
                   && search < wordList[i]->wordSize && search < wordList[i + 1]->wordSize) {
                search ++;
            }
            wordList[i]->printSize = minimum(search, wordList[i]->wordSize);
        } else if (i == numWord - 1) {
            while (strncmp(wordList[i]->word, wordList[i - 1]->word, search) == 0
                   && search < wordList[i]->wordSize && search < wordList[i - 1]->wordSize) {
                search ++;
            }
            wordList[i]->printSize = minimum(search, wordList[i]->wordSize);
        } else {
            while (strncmp(wordList[i]->word, wordList[i + 1]->word, search) == 0
                   && search < wordList[i]->wordSize
                   && search < wordList[i + 1]->wordSize) {
                search ++;
            }
            while (strncmp(wordList[i]->word, wordList[i - 1]->word, search_after) == 0
                   && search_after < wordList[i]->wordSize
                   && search_after < wordList[i - 1]->wordSize) {
                search_after ++;
            }
            wordList[i]->printSize = minimum(wordList[i]->wordSize,
                                             maximum(search, search_after));
        }

    }
    
    qsort(wordList, numWord, sizeof(pWord), compareInt);
    
    for (int i = 0; i < numWord; ++ i) {
        int needPrint = wordList[i]->printSize;
        printf("%s ", wordList[i]->word);
        for (int j = 0; j < needPrint; ++ j) {
            printf("%c", wordList[i]->word[j]);
        }
        printf("\n");
    }
}
