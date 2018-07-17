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
        if (word[i] == ' ') {
            break;
        }
        wordNode->translation[j] = word[i];
    }
    wordNode->translation[j] = '\0';
    return wordNode;
}

int WordHash(char* word) {
    int i = 0;
    int hash = 0;
    while (word[i] != '\0') {
        hash += (word[i] - 97);
        i++;
    }
    return hash;
}

int CalHash(pWord wordNode) {
    int hash = WordHash(wordNode->translation);
    return hash;
}

pWord TraceList(pWord node) {
    if (node->nextWord != NULL) {
        node = node->nextWord;
    }
    return node;
}

pWord FindMatch(pWord* list, int hash, char* word) {
    pWord node = list[hash];
    if (node == NULL) {
        return NULL;
    }
    while (strcmp(node->translation, word) != 0) {
        node = node->nextWord;
        if (node == NULL) {
            break;
        }
    }
    if (node != NULL) {
        return node;
    } else {
        return NULL;
    }
}

int main(void) {
    // Construct list
    pWord* hashList = (pWord*)malloc(260 * sizeof(pWord));
    
    for (int i = 0; i < 260; ++i) {
        hashList[i] = NULL;
    }
    
    // Read and save words
    char allInput[40];
    int i = 0;
    while (1) {
        fgets(allInput, sizeof(allInput), stdin);
        strtok(allInput, "\n");
        if (strcmp(allInput, "\n") == 0) {
            break;
        }
        // Split words
        pWord wordGrp = SpiltWord(allInput);
        
        // Calculate Hash Number
        int wordHash = CalHash(wordGrp);
        
        // Store the section to the list
        if (hashList[wordHash] == NULL) {
            hashList[wordHash] = wordGrp;
        } else {
            // Go to the end of the list
            TraceList(hashList[wordHash])->nextWord = wordGrp;
        }
        i = 0;
    }
    char output[100000][10];
    int pointer = 0;
    // Search
    while (1) {
        char queryWord[100];
        i = 0;
        void* saver = fgets(queryWord, sizeof(queryWord), stdin);
        if (saver == NULL) {
            break;
        }
        strtok(queryWord, "\n");
        strtok(queryWord, " ");
        int queryHash = WordHash(queryWord);
        pWord foundNode = FindMatch(hashList, queryHash, queryWord);

        if (foundNode) {
            strcpy(output[pointer++], foundNode->word);
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
