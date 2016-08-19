//
//  C11-2-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/19.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	Pre-command
//	Macros

#include <stdio.h>

//	#define PI 3.14159

int main()
{
	printf("%s:%d\n",__FILE__,__LINE__);
	printf("%s,%s\n",__DATE__,__TIME__);
	
	return 0;
}
