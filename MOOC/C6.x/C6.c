//
//  C6.c
//  C-X_NEW
//
//  Created by BBN on 16/7/20.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[101];
    int b[101];
    int c[202];
    int d[202];
    int saver[2];
    int cnt = 0;
    int i = 0;
    
    while (cnt < 2)
    {
        scanf("%d%d",&a[i],&b[i]);
        if (a[i] == 0)
        {
            cnt++;
            saver[cnt] = i;
        }
        i++;
    }
    i = 0;
    for (int j = 0; i <= saver[0]; j ++) {
        for ( int k = 0; saver[1]<i & i <= saver[1] ; k ++) {
            if (a[j] > a[k]) {
                c[i] = a[j];
                d[i] = b[j];
            }else if (a[j] == a[i])
            {
                c[i] = a[j];
                d[i] = b[j] + b[i];
            }else if (a[j] < a[k]){
                c[i] = b[j];
                d[i] = b[j];
            }
        }
        i++;
    }
    
    for (int x = 0; x <= i; x++) {
        printf("c[i] = %d  d[i] = %d\n",c[x],d[x]);
    }
    return 0;
    
    
}
