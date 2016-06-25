//
//  C4-2-2.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

//Guessing Game!
//There is a NEW Function named "rand()"


//Version 1.1.0.0
//Update Time 2016/4/10



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
    //Welcome area
    printf("Guessing Game");
    printf("\nBy BBN\n\n");
    
    SET_NUMBER_LENGTH();
    THINK_NUMBER();
    LIMIT_CHANCES();
    GUESSING();
    return 0;
    
    
}

