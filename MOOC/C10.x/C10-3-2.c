//
//  C10-3-2.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/18.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	union
//

#include <stdio.h>

typedef union {
	int i;
	char ch[sizeof(int)];
} CHI;

int main()
{
	CHI chi;
	chi.i = 1234;
	for (int i = 0; i < sizeof(int); i++) {
		printf("%02hhX",chi.ch[i]);
	}
	printf("\n");
	
	return 0;
}
