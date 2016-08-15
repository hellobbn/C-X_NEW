//
//  C10-2-3.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/15.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

struct date {
    int date;
    int month;
    int year;
};

int main()
{
    struct date today;
    struct date *p_today = NULL;
    
    today = (struct date){15,8,2016};
    p_today = &today;
    
    printf("Address of today is %p\n", p_today);
    
    return 0;
}
