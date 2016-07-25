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
    int saver[100];
    for(int i = 0;i <=100;i++){
        saver[i] = 0;
    }
    int cnt = 0;
    int a,b = 0;                                                                                                                                                                                                            while(cnt < 2)                                                                                                                                                                                                          {                                                                                                                                                                                                                               scanf("%d%d",&a,&b);                                                                                                                                                                                                    saver[a] += b;                                                                                                                                                                                                          if(a ==0)
        cnt++;
    }
    cnt = 1;
    for(int i = 100; i >= 0; i --)
    {
        if(saver[i]==0&& i!= 0)                                                                                                                                                                                                                 continue;
        if(saver[i] != 1){
            if( i == 0 && cnt != 1 && saver[i] >= 0 ){
                printf("+%d",saver[i]);}
            else if(i == 0 && cnt == 1&& saver[i] >= 0){
                printf("%d",saver[i]);
            }
            else if(i == 0 &&  saver[i] < 0){
                printf("%d",saver[i]);
            }else if(i == 1){
                if(saver[i] > 0 && cnt != 1){
                    printf("+%dx",saver[i]);
                }
                if(saver[i] < 0 && cnt != 1){
                    printf("%dx",saver[i]);
                }
                if(cnt == 1)
                    printf("%dx",saver[i]);
            }
            else if(i > 0 && cnt == 1){
                printf("%dx%d",saver[i],i);
            }else if(i > 0 && cnt != 1 && saver[i] < 0){
                printf("%dx%d",saver[i],i);
            }else if(i > 0 && cnt != 1 && saver[i] > 0){
                printf("+%dx%d",saver[i],i);                                                                                                                                                                                    }
        }else{
            if( i == 0 && cnt != 1 && saver[i] >= 0 ){
                printf("+%d",saver[i]);}
            else if(i == 0 && cnt == 1&& saver[i] >= 0){
                printf("%d",saver[i]);
            }                                                                                                                                                                                   else if(i == 0 &&  saver[i] < 0){
                printf("%d",saver[i]);
            }else if(i == 1){
                if(saver[i] > 0 && cnt != 1){
                    printf("+x");
                    
                }
                if(saver[i] < 0 && cnt != 1){
                    
                    printf("x");
                    
                }
                if(cnt == 1)
                    
                    printf("x");
            }
            else if(i > 0 && cnt == 1){
                printf("x%d",i);
            }else if(i > 0 && cnt != 1 && saver[i] < 0){
                printf("x%d",i);                                                                                                                                                 }else if(i > 0 && cnt != 1 && saver[i] > 0){
                    printf("+x%d",i);
                }
        }
        cnt++;
        
    }
    return 0;
    
}
