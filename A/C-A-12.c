//
//  C-A-12.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/13.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
int main() {
    int m = 0, n = 0;
    int cnt = 1;
    int isPrime = 0;
    int sum = 0;
    scanf("%d%d", &m, &n);
    sum = m == 1 ? 2 : 0;
    for ( int i = 3; cnt < n ; ++i) {
        isPrime = 1;
        for (int x = 2; x < i; ++x) {
            if (i % x == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            cnt++;
            if ((cnt >= m) && (cnt <= n) ) {
                sum += i;
            }
        }
    }
    printf("%d", sum);
    
    return 0;
}
