//
//  byebye.c
//  C
//
//  Created by BBN on 2018/3/11.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

int main(void) {
    int n;
    
    atexit(sign_off);
    puts("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        puts("That's no integer!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");
    
    return 0;
}

void sign_off(void) {
    puts("Thus terminates another magnificent program from");
    puts("SeeSaw Software!");
}

void too_bad(void) {
    puts("SeeSaw Software extends its heartfelt condolences");
    puts("to you apon the failure of your program.");
}
