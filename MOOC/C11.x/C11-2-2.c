//
//  C11-2-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/19.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	Macros - 2
//

#include <stdio.h>

#define cube(x) ((x)*(x)*(x))
//Wrongly defined Macros Example
//#define TEST(y) (y * 57.29578)
//#define TEST2(z) (z) * 57.29578
//Compile'll not return error. But that's not the intention

int main() {
	int i;
	
	scanf("%d",&i);
	printf("%d\n",cube(i+2));
	
	return 0;
}
