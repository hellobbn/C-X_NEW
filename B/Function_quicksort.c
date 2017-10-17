//
//  Function_quicksort.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/16.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  A possible example of quicksort
//  Updated on: 2017-10-16
//


void swap(int v[], int i, int j);
void custom_quicksort(int v[], int left, int right) {
    int i, last;
    
    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i < right; ++i) {
        if (v[left] > v[i]) {
            swap(v, ++last, i);
        }
    }
    swap(v, last, i);
    custom_quicksort(v, left, last - 1);
    custom_quicksort(v, last, right);
}

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
