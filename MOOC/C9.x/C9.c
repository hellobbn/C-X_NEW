//
//  C9.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "stdlib.h"

int main()
{
    char s1[100];
    int sum;
    int h = 0  , m = 0, s =0;
    
    do {
        scanf("%s",s1);
        if (strstr(s1, "$GPRMC") && strstr(s1, ",A,")) {
            sum = s1[1];
            for (int i = 2; s1[i] != '*'; i++) {
                sum = sum ^ s1[i];
            }
            //Get the numbers
            char *p = strchr(s1, '*');
            p = p+1;
            //Change it!
            int x;
            x = (int)strtol(p,NULL,16);
            sum = sum % 65532;
            
            if (sum == x)
            {
                p = strchr(s1,',') + 1;
                int tm = atoi(strncpy(s1,p,6));
                h = tm / 10000 + 8;
                m = (tm % 10000) / 100;
                s = tm % 100;
                if (h > 24)
                {
                    h = h -24;
                }
            }
        }
    } while (strcmp(s1, "END"));
    
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
