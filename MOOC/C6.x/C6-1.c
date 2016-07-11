//
//  C6-1.c
//  C-X_NEW
//
//  Created by BBN on 16/7/8.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Calculate average
//  Version: 1.1.1
//  Update time: 7/11/2016
//  Status: Alpha.

#include <stdio.h>

void LOOP_Test()

int main()
{
    int x;
    double sum;
    double average;
    int cnt = 0;
    int number[100];
    int choice = 0;
    
    scanf("%d", &x);
    
    while (x != -1)
    {
        number[cnt] = x;
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }
    average = sum/cnt;
    
    if (cnt > 0)
    {
        printf("The average is:%f\n", average);
    }
    
    printf("Now you can choose to show the number which have a diff to the average.");
    printf("You can choose from the list:\n");
    printf("1. >\n");
    printf("2. <\n");
    printf("3. >=\n");
    printf("4. <=\n");
    printf("Now Enter your choice(The number please.):");
    scanf("%d",&choice);
    
    switch (choice) {
        case 1:
            printf("The numbers larger than(>) the average(%f) are:\n", average);
            for (int i = 0; i <=cnt; i++)
            {
                if (number[i] > average)
                {
                    printf(" %d ",number[i]);
                }
            }
            break;
        case 2:
            printf("The numbers larger than(<) the average(%f) are:\n", average);
            for (int i = 0; i <=cnt; i++)
            {
                if (number[i] < average)
                {
                    printf(" %d ",number[i]);
                }
            }
            break;
        case 3:
            printf("The numbers larger than(>=) the average(%f) are:\n", average);
            for (int i = 0; i <=cnt; i++)
            {
                if (number[i] >= average)
                {
                    printf(" %d ",number[i]);
                }
            }
            break;
        case 4:
            printf("And the numbers larger than(<=) the average(%f) are:\n", average);
            for (int i = 0; i <=cnt; i++)
            {
                if (number[i] >= average)
                {
                    printf(" %d \f",number[i]);
                }
            }
            break;
        default:
            printf("Skipped");
            break;
    }
    return 0;
}


