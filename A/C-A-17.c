//
//  C-A-17.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/17.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Tree -- Structure
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAXWORD 100

struct tree {
    char* words;
    int count;
    struct tree *left;
    struct tree *right;
};
int isword(char c) {
    if (c >= 'A' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}
int getword(char* s, char maxWord) {
    char c;
    int i = 0;
    while ((c = getchar()) == ' ') ;
    if (isword(c)) {
        *(s + i++) = c;
    }
    while ((c = getchar()) != EOF && isword(c)) {
        *(s + i++) = c;
    }
    *(s + i) = '\0';
    return i > 0 ? i : EOF;
}
struct tree *custalloc(void) {
    return (struct tree*)malloc(sizeof(struct tree));
}
struct tree *cusstrdup(char* s) {
    char *p;
    
    p = (char *)malloc(strlen(s));
    if (p != NULL) {
        strcpy(p, s);
    }
    return p;
}
struct tree* addtree(struct tree* in, char* s) {
    int cond;
    
    if (in == NULL) {
        in = custalloc();                          //  what is talloc?
        in->words = cusstrdup(s);
        in->count = 1;
        in->left = in->right = NULL;
    } else if ((cond = strcmp(s, in->words) == 0)) {
        in->count ++;
    } else if(cond < 0) {
        in->left = addtree(in->left, s);
    } else {
        in->right = addtree(in->right, s);
    }
    return in;
}
void treeprint(struct tree *in) {
    if (in != NULL) {
        treeprint(in->left);
        printf("%4d %s\n", in->count, in->words);
        treeprint(in->right);
    }
    return;
}
int main( ) {
    struct tree *root;
    char word[MAXWORD];
    
    root = NULL;
    while (getword(word, MAXWORD) != EOF) {
        if (isalpha(word[0])) {
            root = addtree(root, word);
        }
    }
    treeprint(root);
}

