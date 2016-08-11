//
//  v1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  BBN-ToolKit
//  Version: 0.0.4
//  Update Time: 2016/8/11
//  Status: Staging


#include "v1.h"

int main()
{
    int choice = 0;
    printf("Initial toolKit\n");
    printf("The tool kit now has the functions below:\n");
    
    printf("1.Guessing Game\n");
    printf("2.Number Length\n");
    printf("3.Calculate Average.\n");
    
    printf("please choose one:");
    scanf("%d",&choice);
    
    switch (choice) {
        case 1:
            //Guessing Game
            cal_main();
            break;
        case 2:
            //Number Length
            len_main();
            break;
        case 3:
            //Average
            avg_main();
            break;
        default:
            printf("Invalid Input!");
            break;
    }
}
