//
//  C-A-15.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/17.
//  Copyright © 2017年 BBN. All rights reserved.
//
//  Version: 1.0
//  Updated on: 2017/10/28
//  Revise Quick Sort
//
#include <stdio.h>
void rsync(int* i, int* j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void shellsort(int* s, int low, int high) {
    for (size_t gap = (low + high) / 2; gap > 0; gap /= 2) {
        for (size_t i = gap; i <= high; i ++) {
            for (size_t j = i - gap;  (j > 0) && (s[j] < s[j + gap]); j -= gap) {
                rsync(&s[j + gap], &s[j]);
                
            }
        }
    }
}

void quicksort(int* s, int left, int right) {
    if (left >= right) {
        return ;
    }
    int mid = (left + right) / 2;
    rsync(&s[left], &s[mid]);
    int cnt = left;
    for (size_t i = left + 1; i <= right; i++) {
        if (s[i] > s[left]) {
            rsync(&s[i], &s[++cnt]);
            cnt++;
        }
    }
    /* Now the Array */
    /* s[mid] x x x x x x | x x x x x x x x x x x x x x */
    /*                  |                               */
    
    /*                 cnt                              */
    rsync(&s[cnt], &s[left]);
    quicksort(s, left, cnt);
    quicksort(s, cnt + 1, right);
    
}

int main() {
    int a[10] = {9, 4, 5, 8, 7, 4, 3,};
    quicksort(a, 0, 6);
    for (int i = 0; i < 6; i++) {
        printf("a[%d] = %d\n",i, a[i] );
    }
}


