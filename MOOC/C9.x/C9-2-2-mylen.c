//
//  C9-2-2-mylen.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/11.
//  Copyright © 2016年 BBN. All rights reserved.
//

#include "C9-2-2.h"


size_t mylen(const char *s)
{
    size_t cnt = 0;
    while (*(s+cnt) != '\0') {
        cnt ++;
    }
    return cnt;
}
