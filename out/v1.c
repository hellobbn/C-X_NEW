//
//  v1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  BBN-ToolKit
//  Version: 0.0.1
//  Update Time: 2016/8/11
//  Status: Staging


#include "v1.h"

int main()
{
    int choice = 0;
    printf("Initial toolKit\n");
    printf("The tool kit now has the functions below:\n");
    
    printf("1.Guessing Game\n");
    
    printf("please choose one:");
    scanf("%d",&choice);
    
    switch (choice) {
        case 1:
            //Calculator.
            cal_main();
            break;
            
        default:
            printf("Invalid Input!");
            break;
    }
}
