//
//  C4-2-2.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

//     Guessing Game!
//  There is a NEW Function named "rand()"


//  Version 2.4.0
//  Update Time 2016/8/11
//  Status: nearly done


// include .. 
#include "C4-2-2.h"


int cal_main(void)
{
    int input_length = 3;

    //  Welcome Area
    
    printf("***************Guessing Game***************");
    printf("\n*****************By BBN********************\n\n");

    int saver;      //This stores misc staff
    
    //  Judge input area
    do
    {
        printf("How long do you want(1-9)(Defalut = 3):");
        scanf("%d", &input_length);
        saver = JUDGE(input_length);
    } while (saver == 1);
    if (saver == 2)
    {
        return 1;
    }
    
    //  End the program
    
    return 0;
}
