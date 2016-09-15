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

    //  Welcome Area
    
    printf("***************Guessing Game***************");
    printf("\n*****************By BBN********************\n\n");

    int saver;      //This stores misc staff
    
    //  Judge input area
	while (correct) {
		printf("How long do you want(1-9)(Defalut = 3):");
        scanf("%d", &input_length);
		if (input_length >= 3 && input_length <=9) {
			break;
		}else {
			printf("\aInvalid input!\n");
			printf("Would you like to reset it?(Y/N):");
			char read;
			scanf("%s",&read);
			if (toupper(read) == 'Y')
			{
				continue;
			}else{
				return 1;
			}
		}
	}
	
	P_MAIN(input_length);
    //  End the program
	
    return 0;
}
