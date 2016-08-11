//
//  C4-2-3.c
//  C-X
//
//  Created by BBN on 16/4/10.
//  Copyright © 2016年 BBN. All rights reserved.
//
//This Program calculate the average
//Version 1.0.0
//Update Time: 2016/4/10

#include <stdio.h>
#include <stdbool.h>

int avg_main()
{
    int sum = 0;
    int counter = 1;
    int input_number = 0;
    bool judge = true;
    //Read Number
    
    do{
         printf("Enter the %d number,End with \"0\"", counter);
         scanf("%d", &input_number);
         sum = sum + input_number;
         judge = input_number;
         input_number = 0;
         counter++;
         
    }while (judge);
    
    printf("The average is:%d", sum/(counter-2));
    return 0;
    
    
}
