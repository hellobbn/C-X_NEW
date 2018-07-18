//
//  new.c
//  CProgDesign
//
//  Created by Chen LF on 2018/7/16.
//  Copyright © 2018 Chen LF. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct wordSet word;
typedef word* pWord;

struct wordSet {
    char word[15];
    char translation[15];
    pWord nextWord;
};

pWord MakeNode(void) {
    pWord wordNode = (pWord)malloc(sizeof(struct wordSet));
    wordNode->nextWord = NULL;
    return wordNode;
}

pWord SpiltWord(char* word) {
    pWord wordNode = MakeNode();
    int wordLength = (int)strlen(word);
    int i = 0,j = 0;
    for (i = 0; i < wordLength; ++ i) {
        if (word[i] == ' ') {
            wordNode->word[i] = '\0';
            i++;
            break;
        }
        wordNode->word[i] = word[i];
    }
    for (j = 0; i < wordLength; ++ i, ++ j) {
        wordNode->translation[j] = word[i];
    }
    wordNode->translation[j] = '\0';
    return wordNode;
}

int main() {
    pWord head = MakeNode();
    pWord node = head;
    char allInput[30];
    while (1) {
        pWord* hashList = (pWord*)malloc(260 * sizeof(pWord));
        pWord word = malloc(sizeof(word));
        fgets(allInput, sizeof(allInput), stdin);
        strtok(allInput, "\n");
        if (strcmp(allInput, "\n") == 0) {
            break;
        }
        node->nextWord = SpiltWord(allInput);
        node = node->nextWord;
    }
    char** output = (char**)calloc(100000, sizeof(char*));
    for (int i = 0; i < 100000; ++ i) {
        output[i] = (char*)calloc(20, sizeof(char));
    }
    int pointer = 0;
    while (1) {
        node = head;
        char queryWord[20];
        void* saver = fgets(queryWord, sizeof(queryWord), stdin);
        if (saver == NULL) {
            break;
        }
        strtok(queryWord, "\n");
        while (strcmp(node->translation, queryWord) != 0 ) {
            node = node->nextWord;
            if (node == NULL) {
                break;
            }
        }
        if (node != NULL) {
            strcpy(output[pointer++], node->word);
        } else {
            strcpy(output[pointer++], "eh");
        }
    }
    if (pointer != 0) {
        for (int i = 0; i < pointer; ++ i) {
            printf("%s\n", output[i]);
        }
    }
    return 0;
}
