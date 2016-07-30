//
//  C7-1.c
//  C-X_NEW
//
//  Created by 陈泺帆 on 2016/7/28.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include "stdio.h"

int main(int argc, char const *argv[]) {
    int x = 0;
    int ask = 0;
    int saver;
    char no_use;
    scanf("%d%c%d",&x,&no_use,&ask);
    printf("0.");
    x = x * 10;
    for (int i = 0; i < 200; i++) {
        saver = x / ask;
        printf("%d",saver);
        x = x % ask;
        if (x == 0) {
            break;
        }else{
            x = x*10;
        }
        
    }
    printf("\n");
    return 0;
}
