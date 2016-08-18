//
//  C10-2-8.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/18.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	Struct in a Struct
//

#include <stdio.h>

//	struct
struct point {
	int x;
	int y;
};
struct rec {
	struct point p1;
	struct point p2;
};

//	main
int main()
{
	struct rec r[] = {
		{{1,2},{3,4}},
		{{5,6},{7,8}},
		};
	return 0;
}
