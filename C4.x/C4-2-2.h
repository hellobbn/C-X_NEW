//
//  C4-2-2.h
//  C-X
//
//  Created by BBN on 16/4/10.
//  Copyright © 2016年 BBN. All rights reserved.
//
//Included by C4-2-2.c

#ifndef C4_2_2_h
#define C4_2_2_h


#endif /* C4_2_2_h */


//  Initial Functions
void SET_NUMBER_LENGTH(int i);
void THINK_NUMBER(int set_length);

//  Judge Function
int JUDGE(int number_length)
{
    if (number_length >= 3 && number_length <=9)
    {
        SET_NUMBER_LENGTH(number_length);
        return 0;
    }else{
        printf("Invalid input!");
        printf("Would you like to reset it?(Y/N):");
        char read;
        scanf("%s",&read);
        if (toupper(read) == 'Y')
        {
            return 1;
        }else{
            return 2;
        }
    }
}

//  Mixed Function
void SET_NUMBER_LENGTH(int length)
{
    int set_number_length = 1;
    int set_final_number = 5;
    int count = 0;
    int input_number = 0;
    int i = 0;
    int thinking_number;

    while (i < length)
    {
        set_number_length = set_number_length * 10;
        i++;
    }

    //  Giving a Number
    srand(time(0));
    thinking_number = rand()%set_number_length + 1;
    
    
    //  Set Limit
    printf("Now You can set a Final Try Times: Whatever you like\n");
    printf("You will be told te answer if you answered to many times\n");
    printf("Please enter it:");
    scanf("%d", &set_final_number);
    
    //  Guessing
    printf("Now The guessing number is ready\n");
    printf("What do you think it is?\n");
    printf("Enter it please:");
    scanf("%d", &input_number);
    
    //  Check
    while(input_number != thinking_number){
    printf("No no no,You are wrong\n");
    count ++;
    if(input_number > thinking_number)
    {
        printf("It is too large\n");
    }
    else if(input_number < thinking_number)
    {
        printf("It is too small\n");
    }
    if (count == set_final_number)
    {
        printf("Unfortunately You failed....You have tried %d times\n", count);
        printf("The answer is:%d", thinking_number);
        exit(0);
    }
    printf("Try again:");
    scanf("%d", &input_number);
    }
    
    printf("Finally You did it. You have tried %d Times", count);
}
