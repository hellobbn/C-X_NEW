//
//  2797.c
//  CProgDesign
//
//  Created by Chen LF on 2018/7/16.
//  Copyright © 2018 Chen LF. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORDS 1000
#define WORD_SIZE 22

struct word {
    int minNum;
    int wordSize;
    char word[WORD_SIZE];
};
typedef struct word sWord;
typedef sWord* pWord;

int minimum(int a, int b) {
    if (a <= b) {
        return a;
    } else {
        return b;
    }
}
int main(void) {
    pWord* list = calloc(WORDS, sizeof(pWord));
    for (int i = 0; i < WORDS; i++) {
        list[i] = malloc(sizeof(struct word));
    }
    int wordCounter = 0;
    while (fgets(list[wordCounter]->word, WORD_SIZE, stdin)) {
        strtok(list[wordCounter]->word, "\n");
        strtok(list[wordCounter]->word, " ");
        list[wordCounter]->wordSize = (int)strlen(list[wordCounter]->word);
        wordCounter++;
    }
    int sizaA, sizaB, Minnum;
    for (int i = 0; i < wordCounter; ++ i) {
        sizaA = list[i]->wordSize;
        Minnum = sizaA;
        for (int k = 0; k < wordCounter; ++ k) {
            Minnum = 0;
            if (k == i) {
                continue;
            } else {
                sizaB = list[k]->wordSize;
            }
            for (int j = 0; j < sizaA && j < sizaB; ++j) {
                if (strncmp(list[i]->word, list[k]->word, j + 1) == 0) {
                    Minnum++;
                }
            }
            if (Minnum > list[i]->minNum) {
                list[i]->minNum = Minnum;
            }
        }
    }
    int printLength = 0;
    for (int i = 0; i < wordCounter; ++ i) {
        printLength = minimum(list[i]->wordSize, list[i]->minNum + 1);
        printf("%s ", list[i]->word);
        for (int j = 0; j < printLength; ++j) {
            printf("%c",list[i]->word[j]);
        }
        printf("\n");
    }
}
