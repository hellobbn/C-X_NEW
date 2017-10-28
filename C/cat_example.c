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
    
    if (argc == 1) {
        filecpy(stdin, stdout);
    } else {
        while (--argc > 0) {
            if ((fp = fopen(*++argv, "r")) == NULL) {
                printf("cat: cannot open %s\n", *argv);
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
    
    while ((c = getc(ifp)) != EOF) {
        putc(c, ofp);
    }
}
