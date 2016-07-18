/
//  C4-2-2.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

//     Guessing Game!
//  There is a NEW Function named "rand()"


//  Version 2.2.0
//  Update Time 2016/7/18
//  Status: Beta



/*rand Sample*/
//int main(void)
//{
//    srand(time(0));
//    int a = rand();
//    
//    printf("%d", a);
//    
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "C4-2-2.h"
//  INITIAL
int main(void)
{
    static int input_length = 3;

    //  Welcome Area
    
    printf("Guessing Game");
    printf("\nBy BBN\n\n");

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

