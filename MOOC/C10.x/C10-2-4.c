//
//  C10-2-4.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/17.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

//  struct
struct date{
    int day;
    int month;
    int year;
};

//  Functions
int Num_OF_days(struct date tod);

//  main
int main()
{
    struct date today, tomorrow;
    
    printf("Enter today's date: (yyyy-mm-dd):");
    scanf("%i-%i-%i", &today.year, &today.month, &today.day);
    
    if (today.day != Num_OF_days(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }else if(today.year != 12){
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }else{
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    
    printf("The date of tomorrow is: %i-%i-%i\n",tomorrow.year,tomorrow.month,tomorrow.day);
    
    return 0;
}

//  This Func. calculates the days of the input month
int Num_OF_days(struct date tod)
{
    int days;
    const int date_per_month[]= {31,28,31,30,31,30,31,31,30,31,30,31,};
    if (tod.month == 2 && tod.year % 4 == 0)
    {
        days = 29;
    }else{
        days = date_per_month[tod.month - 1];
    }
    
    return days;
}
