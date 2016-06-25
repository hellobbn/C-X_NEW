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
int number_length = 3;
int set_number_length = 1;//Default
int thinking_number;
int set_final_number = 5;
int input_number = 0;


void SET_NUMBER_LENGTH();
void THINK_NUMBER();
void LIMIT_CHANCES();
void GUESSING();

void SET_NUMBER_LENGTH()
{
    //Get the "length"
    printf("How long do you want(1-10)(Defalut = 3):");
    scanf("%d", &number_length);
    //Change the set number
    int i = 0;
    while (i < number_length) {
        set_number_length = set_number_length * 10;
        i++;
    }
    //    Test
    //    {
    //    printf("%d\n%d", number_length, set_number_length);
    //    }
}

void THINK_NUMBER()
{
    //Giving a Number
    srand(time(0));
    thinking_number = rand()%set_number_length + 1;
}

void LIMIT_CHANCES()
{
    printf("Now You can set a Final Try Times: Whatever you like\n");
    printf("You will be told te answer if you answered to many times\n");
    printf("Please enter it:");
    scanf("%d", &set_final_number);
    
}

void GUESSING()
{
    //GUESSING
    
    printf("Now The guessing number is ready\n");
    printf("What do you think it is?\n");
    printf("Enter it please:");
    scanf("%d", &input_number);
    //Checkout
    int count = 1;
    do{
        printf("No no no,You are wrong\n");
        count ++;
        if(input_number > thinking_number){
            printf("It is too large\n");
        }
        else if(input_number < thinking_number)
        {
            printf("It is too small\n");
        }
        printf("Try again:");
        scanf("%d", &input_number);
        if (count == set_final_number) {
            printf("Unfortunately You failed....You have tried %d times", count);
            printf("The answer is:%d", thinking_number);
            exit(0);
        }
    }while(input_number != thinking_number);
    
    printf("Finally You did it. You have tried %d Times", count);
}
