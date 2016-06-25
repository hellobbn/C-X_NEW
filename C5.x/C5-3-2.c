//
//  C5-3-2.c
//  C-X
//
//  Created by BBN on 16/6/5.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    
    //Decide the length
    int length = 0;
    int saver = input;
    while (saver != 0) {
        saver /=10;
        length ++;
    }
//    printf("the number has a length of %d \n",length);
//    return 0;
    
    saver = input;
    int length_saver = length;
    for (int i = 1; i <= length_saver; i++) {
        int x;
        int to_die = 1;
        for (x = 1; x <= length-1; x ++) {
            to_die *= 10;
        }
        printf("%d", saver / to_die);
        if (length > 1) {
            printf(" ");
        }else{
            printf("\n");
        }
        saver = saver % to_die;
        length -=1;
    }
    return 0;
}