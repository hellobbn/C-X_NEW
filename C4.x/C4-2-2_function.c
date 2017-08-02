//
//  C4-2-2.h
//  C-X
//
//  Created by BBN on 16/4/10.
//  Copyright © 2016年 BBN. All rights reserved.
//
//Included by C4-2-2.c


//  Initial Functions
#include "C4-2-2.h"

//  Mixed Function
int P_MAIN(int length) {
    int set_number_length = 1;
    int set_final_number = 5;
    int count = 0;
    int input_number = 0;
    int thinking_number;
    bool correct = true;

    for (size_t i = 0; i < length; i++) {
        set_number_length = set_number_length * 10;
    }

    //  Debug
    //  printf("set_number_length = %d\n", set_number_length);
    //  Giving a random Number

    srand(time(0));
    thinking_number = rand()%set_number_length + 1;


    //  Set Limit
    printf("\n\n******************************************"
           "\n**************IMPORTANT NOTE**************"
           "\n******************************************\n"
           "\nNow You can set a Final Try Times: Whatever you like\n");
    printf("You will be told the answer if you answered too many times\n");
	while( correct ){
        printf("Please enter the limit number:");
        scanf("%d", &set_final_number);
		if (set_final_number <= 5) {
			printf("\aWarning: You've Entered a number <= 5, That's almost Impossile!\n");
			printf("Enter again?(y/N):");
			char rd;
			scanf("%s",&rd);
			if (toupper(rd) == 'Y') {
				continue;
			} else {
				break;
			}
		} else {
			break;
		}
    }
	printf("now The limit is %d\n\n",set_final_number);
    //  Guessing
    printf("Now The guessing number is ready\n");
    printf("What do you think it is?\n");
    printf("Enter it please:");
    scanf("%d", &input_number);

    //  Check
    while(input_number != thinking_number)
    {
        printf("No no no,You are wrong\n");
        count ++;
        if(input_number > thinking_number)
        {
            printf("It is too large\n");
        }else if(input_number < thinking_number)
        {
            printf("It is too small\n");
        }

        if (count == set_final_number)
        {
            printf("Unfortunately You failed....You have tried %d times\n", count);
            printf("The answer is:%d\n", thinking_number);
            count = 0;
            break;
        }
        printf("Try again:");
        scanf("%d", &input_number);
    }
    printf("The Guessing number is %d. ",thinking_number);

    return count;
}
