//
//  C-A-13.c
//  C-X_NEW
//
//  Created by clfbbn on 2017/10/13.
//  Copyright © 2017年 BBN. All rights reserved.
//

#include <stdio.h>
int main(){
    int m,n,m1,i,j,s;
    m1=3;i=2;j=2;s=0;
    scanf("%d%d",&m,&n);
    for(;;){
        if (m1%i==0&&m1>i) {
            m1=m1+2;
            i=2;
        } else if (m1==i) {
            if (m<=j&&n>=j) {s=s+m1;
//                printf("%d\n",m1);
            } else if (n<j+1)
                break;
            m1=m1+2;
            i=2;
            j++;
        } else if (m1>i&&m1%i!=0) i++;
  }
    if (m==1)
        s=s+2;
    printf("%d",s);
}


