//
//  C10-3-1.c
//  C-X_NEW
//
//  Created by BBN on 2016/8/18.
//  Copyright © 2016年 BBN. All rights reserved.
//
//  Array anfd struct
//

#include <stdio.h>

//  Struct array.
struct time {
    int hour;
    int minute;
    int second;
};

//  Initial Func.
struct time* Time_Update(struct time *input_time);

//  main
int main() {
    struct time test_time[] = {
        {11,59,59} , {12,0,0} , {1,29,59}, {23,59,59}, {19,17,27}
    };
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Time is %i-%i-%i\n",
               test_time[i].hour,test_time[i].minute,test_time[i].second);
        test_time[i] = *Time_Update(&test_time[i]);
		printf("The time after is %i-%i-%i\n",
			   test_time[i].hour,test_time[i].minute,test_time[i].second);
    }
	
	return 0;
}

struct time* Time_Update(struct time *input_time){
	if (input_time->second == 59) {
		input_time->second = 00;
		if (input_time->minute == 59) {;
			input_time->minute = 00;
			if (input_time->hour == 23) {
				input_time->hour = 00;
			}else{
				input_time->hour = input_time->hour + 1;
			}
		}else{
			input_time->minute = input_time->minute + 1;
		}
	}else{
		input_time->second = input_time->second + 1;
	}
	
	return input_time;
}
