//
//  C10-2-6.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/17.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Use a pointer.
//

//Header
#include <stdio.h>

//  struct:
struct point {
    int x;
    int y;
};

//  Initial Functions
struct point* get_struct(struct point *in);         //  get_struct reads the input.
void output(struct point out);                      //  output() does not using pointer
void print(const struct point *output);                   //  print() uses pointer

//  Where the program begins
int main()
{
    struct point test;
    output(*get_struct(&test));
    print(get_struct(&test));
    
    return 0;
}

//  all functions
struct point* get_struct(struct point *in)
{
    //  Method 1
    scanf("%d",&(*in).x);
    scanf("%d",&(*in).y);
    return in;
}

void output(struct point out)
{
    //  Method 2 -- which I prefer 
    printf("x = %d\n",out.x);
    printf("y = %d\n",out.y);
}

void print(const struct point *output)
{
    printf("x = %i\n",output->x);
    printf("y = %i\n",output->y);
}
