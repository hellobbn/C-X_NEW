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



void SET_NUMBER_LENGTH(int i);
void THINK_NUMBER(int set_length);
void GUESSING(int thinking);

void SET_NUMBER_LENGTH(int length)
{
    static int set_number_length = 1;

    int i = 0;
    while (i < length)
    {
        set_number_length = set_number_length * 10;
        i++;
    }
//    Test
//    {
//    printf("%d\n%d", number_length, set_number_length);
//    }
    THINK_NUMBER(set_number_length);

}

void THINK_NUMBER(int set_length)
{
    //Giving a Number
    static int thinking_number;
    srand(time(0));
    thinking_number = rand()%set_length + 1;
    GUESSING(thinking_number);
    
}

void GUESSING(int thinking)
{
    //set limit
    static int set_final_number = 5;
    printf("Now You can set a Final Try Times: Whatever you like\n");
    printf("You will be told te answer if you answered to many times\n");
    printf("Please enter it:");
    scanf("%d", &set_final_number);
    //GUESSING
    static int input_number = 0;
    
    printf("Now The guessing number is ready\n");
    printf("What do you think it is?\n");
    printf("Enter it please:");
    scanf("%d", &input_number);
    //Checkout
    int count = 1;
    do{
        printf("No no no,You are wrong\n");
        count ++;
        if(input_number > thinking){
            printf("It is too large\n");
        }
        else if(input_number < thinking)
        {
            printf("It is too small\n");
        }
        printf("Try again:");
        scanf("%d", &input_number);
        if (count == set_final_number) {
            printf("Unfortunately You failed....You have tried %d times", count);
            printf("The answer is:%d", thinking);
            exit(0);
        }
    }while(input_number != thinking);
    
    printf("Finally You did it. You have tried %d Times", count);
}
