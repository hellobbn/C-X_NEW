//
//  C-A-19.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/30.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>

int max(int lower, int upper, int arr[]) {
    int m1 = 0, m2 = 0, max1 = 0, max2 = 0, left = 0, right = 0, cross = 0;
    int mid = (lower + upper) / 2;
    //  Calculate left and right max
    if (lower < upper) {
        left = max(lower, mid, arr);
        right = max(mid + 1, upper, arr);
        for (int i = mid; i >= lower; --i) {
            m1 += arr[i];
            if (m1 > max1) {
                max1 = m1;
            }
        }
        for (int i = mid + 1; i <= upper; ++i) {
            m2 += arr[i];
            if (m2 > max2) {
                max2 = m2;
            }
        }
        cross = m1 + m2;
    } else {
        left = arr[lower];
    }
    return (left > right ? left : right) > cross ? (left > right ? left : right) : cross;
}
int main() {
    int arr[10] = {7, 2, -5, 9, -7, 3, 12, -9, 9, 7};
    printf("%d\n",max(0, 9, arr));
    
}
