//
//  C4-2-2.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

//Guessing Game!
//There is a NEW Function named "rand()"


//Version 2.0
//Update Time 2016/7/7



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

#include "C4-2-2.h"
//INITIAL

int main(void)
{
    static int number_length = 3;
    //Welcome area

    printf("Guessing Game");
    printf("\nBy BBN\n\n");
    printf("How long do you want(1-10)(Defalut = 3):");//Default
    scanf("%d", &number_length);
    
    SET_NUMBER_LENGTH(number_length);
    return 0;
    
    
}

