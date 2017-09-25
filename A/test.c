//
//  test.c
//  C-X_NEW
//
//  Created by BBN on 2017/9/21.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>

int main() {
    double x,y=0;int n=1;
    scanf("%le",&x);
    while (x>1e-11 || x<-1e-11) {
        y=y+x;
        x=-x*x*x/(2*n)/(2*n+1);
        n=n+1;
    }
    printf("%f\n",y );
}

