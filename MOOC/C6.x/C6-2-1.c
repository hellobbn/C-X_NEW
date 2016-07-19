//
//  C6-2-1.c
//  C-X_NEW
//
//  Created by BBN on 16/7/19.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Update date: 7/19/2016
//  Version: 1.0.0
//  Status: Beta
//

#include <stdio.h>


//Function
int search(int key, int a[], int length);


int main()
{
    int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
    int x;
    int loc;
    printf("Enter a number");
    scanf("%d", &x);
    loc=search(x, a, sizeof(a)/sizeof(a[0]));
    
    if (loc != -1) {
        printf("%d is at the %d place\n", x , loc);
    }else{
        printf("%d does not exist!\n", x );
    }
    
    return 0;
}

int search(int key, int a[], int length)
{
    int ret = -1;
    int i;
    for (i = 0; i < length; i++) {
        if (a[i] == key) {
            ret = i;
            break;
        }
    }
    return ret;
}
