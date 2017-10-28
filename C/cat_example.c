//
//  C-C-1.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/27.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  My version of a command "cat" in Linux
//

#include <stdio.h>
void filecpy(FILE *, FILE *);
int main(int argc, char *argv[]) {
    FILE *fp;
    char* prog = argv[0];
    
    if (argc == 1) {
        filecpy(stdin, stdout);
    } else {
        while (--argc > 0) {
            if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                return 1;
            } else {
                filecpy(fp, stdout);
                fclose(fp);
            }
        }
    }
    return 0;
}

void filecpy(FILE * ifp, FILE *ofp) {
    int c;
    
    while ((c = getc(ifp)) != EOF) {            //  while((c = getc(stdin)) != EOF)
        putc(c, ofp);                           //      putc(c, stdout);
    }
}
