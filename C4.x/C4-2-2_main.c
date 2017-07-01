//
//  C4-2-2.c
//  C-X
//
//  Created by BBN on 16/4/2.
//  Copyright © 2016年 BBN. All rights reserved.
//

//     Guessing Game!
//  There is a NEW Function named "rand()"


//  Version 2.5.0
//  Update Time 2016/9/3
//  Status: nearly done


// include ..
#include "C4-2-2.h"


int main(void)
{
    int input_length = 3;
    bool correct = true;
    int is_true = 0;
    int is_right = -1;

    //  Welcome Area

    printf("***************Guessing Game***************\n");
    printf("*****************By BBN********************\n\n");


    //  Judge input area
	while (is_true == 0) {
		printf("How long do you want(3-9)(Defalut = 3):");
        scanf("%d", &input_length);
		if (input_length >= 3 && input_length <=9) {
			break;
		} else {
			printf("\aInvalid input!\n");
			printf("Would you like to reset it?(Y/N):");
			char read;
			scanf("%s",&read);
			if (toupper(read) == 'Y')
			{
				continue;
			}else{
				is_true = 1;
			}
		}
	}
	if (is_true == 0) {
	    is_right = P_MAIN(input_length);
	}  else {
        printf("Quiting...\n");
    }

    if (is_right != 0) {
        printf("Congratulations! You have tried %d times\n", is_right);
        is_true = 0;
    } else if (is_right == 0) {
        printf("Unfortunately, it is wrong....\n");
        is_true = 1;
    }

    //  End the program
    return is_true;
}
