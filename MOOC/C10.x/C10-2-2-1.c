//
//  C10-2-2-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  E.g. of C10-2-2.c

#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main()
{
    struct date today;
    
    today = (struct date){15,8,2016};
    
    struct date day;
    day = today;
    
    printf("Today's date is: %i-%i-%i\n", today.year,today.month,today.day);
    printf("day's date is %i-%i-%i\n", day.year,day.month,day.day);
    
    return 0;
}
