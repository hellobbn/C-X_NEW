//
//  C10-2-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  struct E.g.
//

#include <stdio.h>

struct date{
        int month;
        int day;
        int year;
    };
    
int main(){

    struct date today;
    
    today.day = 15;
    today.month = 8;
    today.year = 2016;
    
    printf("The date today is %i-%i-%i.\n",today.year,today.month,today.day);
    
    return 0;
}
