//
//  mytype.c
//  C
//
//  Created by BBN on 2018/3/11.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
int: "int",\
float: "float",\
double:"double",\
default:"other"\
)

int main() {
    int d = 5;
    
    printf("%s\n", MYTYPE(d));
    printf("%s\n", MYTYPE(2.0*d));
    printf("%s\n", MYTYPE(7L));
    printf("%s\n", MYTYPE(&d));
    
    return 0;
}
