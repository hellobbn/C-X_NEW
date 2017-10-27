//
//  C-A-18.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/27.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEF_NUM 100

struct clist {
    struct clist *next;
    char* name;
    char* defn;
};

struct clist *list[DEF_NUM];

unsigned int hash(char* s) {
    unsigned int hashval = 0;
    
    for (int i = 0; *(s + i) != '\0'; ++i) {
        hashval = s + hashval * 31;
    }
    
    return hashval % DEF_NUM;
}

struct clist* lookup(char *s) {
    struct clist* np;
    for (np = list[hash(s)]; np != NULL; np = np->next) {
        if (strcmp(s, np->name) == 0) {
            return np;                              //  Got it!
        }
    }                                               //  A list Lookup
    return NULL;
}

struct clist* install(char *name, char *defn) {
    struct clist *np = NULL;
    unsigned int hashval = 0;
    
    if ((np = lookup(name)) == NULL) {
        /* Not Found */
        np = (struct clist *)malloc(sizeof(*np));
        np->name = strdup(name);                       //  Install the name
        if ((np == NULL) || (np->name == NULL)) {
            /* No use*/
            return NULL;
        }
        /* Store the defn */
        hashval = hash(name);
        np->next = list[hashval];                       //  Make np->next point to NULL
        list[hashval] = np;
        
    } else {
        free((void *)np->defn);
    }
    np->defn = strdup(defn);
    if (np->defn == NULL) {
        return NULL;
    }
    return np;
}

int main() {
    install("test", "1");
    install("test", "2");
}
