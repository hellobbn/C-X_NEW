//
//  Function_minprintf.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/27.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdarg.h>
#include <stdio.h>

void minprintf(char *fmt, ...) {
    va_list ap;
    char *p, *sval;
    int ival;
    double dval;
    
    va_start(ap, fmt);
    for (p = fmt; *p ; ++p) {
        if (*p != '%') {
            putchar(p);
            continue;
        }
        switch (*++p) {
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break;
            case 'f':
                dval = va_arg(ap, double);
                printf("%lf", dval);
                break;
            case 's':
                for (sval = va_arg(ap, char*); *sval; ++sval) {
                    putchar(*sval);
                }
                break;
            default:
                putchar(*p);
                break;
        }
    }
    va_end(ap);
}
