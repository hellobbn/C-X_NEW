//
//  Calculator.c
//  C-X_NEW
//
//  Created by BBN on 16/6/26.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    double number1=0.0;
    double number2=0.0;
    char operation=0;
    
    printf("\nEnter the calculaton\n");
    scanf("%lf%c%lf",&number1,&operation,&number2);
    
    switch (operation) {
        case '+':
            printf("=%lf\n",number1+number2);
            break;
        case '-':
            printf("=%lf\n",number1-number2);
            break;
        case '*':
            printf("=%lf\n",number1*number2);
            break;
        case '/':
            if (number2 == 0) {
                printf("\n\n\aDavision by zero error!\n");
            }else{
                printf("=%lf\n",number1/number2);
            }
            break;
        case '%':
            if ((long)number2 == 0) {
                printf("\n\n\aDavision by zero error!\n");
            }else{
                printf("=%ld\n",(long)number1%(long)number2);
            }
            break;
            
        default:
            printf("Invalid input detected");
            break;
    }
    
    return 0;
    
    
}
