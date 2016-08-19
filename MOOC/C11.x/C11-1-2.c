//
//  C11-1-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/18.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	static
//

#include <stdio.h>

void f();
int main()
{
	f();
	f();
	f();
	
	return 0;
}

void f()
{
	static int i = 0;
	printf("i = %d\n", i);
	i += 2;
	printf("agn i = %d\n", i);
}
