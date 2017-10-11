//
//  C-A-9.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/11.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Example of two methods - binsearch and shell sort
//  Version: 1.0
//  Updated: 2017-10-8
//


#include <stdio.h>

#define NUM_OF_CHAR 10
void read_array(int inArray[], int n);
void shellsort(int inArray[], int n);
int binsearch(int x, int inArray[], int n);
int main() {
    int charNum = NUM_OF_CHAR;
    int array[charNum];
    int searched = 0;
    int position = 0;
    for (int i = 0; i < charNum ; ++i) {
        array[i] = 0;
    }
    read_array(array, charNum);
    scanf("%d", &searched);
    shellsort(array, charNum);
    position = binsearch(searched, array, charNum);
    return 0;
}

void read_array(int inArray[], int n) {
    for (int i = 0; i < n ; ++i) {
        scanf("%d", inArray + i);
    }
}

void shellsort(int inArray[], int n) {
    int i, j, step;
    int temp;
    for (step = n / 2; step > 0; step /= 2) {
        for (i = step; i < n; i ++) {
            for (j = i - step; ((j >= 0) && (inArray[j] > inArray[j + step])); j -= step) {
                temp = inArray[j];
                inArray[j] = inArray[j + step];
                inArray[j + step] = temp;
            }
        }
    }
}
int binsearch(int x, int inArray[], int n) {
    int lower, mid = -1, upper;
    int finded = 0;
    lower = 0;
    upper = n - 1;
    while (lower <= upper) {
        mid = (lower + upper) / 2;
        if (inArray[mid] == x) {
            finded = 1;
            break;
        } else {
            if (x > inArray[mid]) {
                lower = mid;
            } else {
                upper = mid;
            }
        }
    }
    if (finded == 1) {
        return mid;
    } else {
        return -1;
    }
}
