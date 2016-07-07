//
//  C4-2-2.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

//Guessing Game!
//There is a NEW Function named "rand()"


//Version 2.1
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
#include <ctype.h>

#include "C4-2-2.h"
//INITIAL
int JUDGE(int number_length)
{
    if (number_length >= 3 && number_length <=9) {
        SET_NUMBER_LENGTH(number_length);
        return 0;
    }else{
        printf("Invalid input!");
        printf("Would you like to reset it?(Y/N):");
        char read;
        scanf("%s",&read);
        if (toupper(read) == 'Y') {
            return 1;
        }else{
            return 2;
        }
    }
}
int main(void)
{
    static int input_length = 3;
    //Welcome area

    printf("Guessing Game");
    printf("\nBy BBN\n\n");

    int saver;
    do {
        printf("How long do you want(1-9)(Defalut = 3):");//Default
        scanf("%d", &input_length);
        saver = JUDGE(input_length);
    } while (saver == 1);
    if (saver == 2) {
        return 1;
    }
    
    return 0;
}

