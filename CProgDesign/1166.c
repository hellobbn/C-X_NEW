//
//  1166.c
//  C-X_NEW
//
//  Created by Chen LF on 2018/7/18.
//  Copyright © 2018 BBN. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


#define MAX_TIME 5


int Sum(int* array, int number) {
    int sum = 0;
    for (int i = 0; i < number; ++ i) {
        sum += array[i];
    }
    return sum;
}

void MakeMoves(int* head) {
    int ways[9][9] = {
        {1,1,0,1,1,0,0,0,0},
        {1,1,1,0,0,0,0,0,0},
        {0,1,1,0,1,1,0,0,0},
        {1,0,0,1,0,0,1,0,0},
        {0,1,0,1,1,1,0,1,0},
        {0,0,1,0,0,1,0,0,1},
        {0,0,0,1,1,0,1,1,0},
        {0,0,0,0,0,0,1,1,1},
        {0,0,0,0,1,1,0,1,1}
    };
    int array[9] = {0};
    int times[9] = {8,8,8,8,8,8,8,8,8};
    int try[9] = {0,0,0,0,0,0,0,0,0};
    int valid = 1;
    for (try[0] = 0; try[0] < MAX_TIME; ++ try[0]) {
        for (try[1] = 0; try[1] < MAX_TIME; ++ try[1]) {
            for (try[2] = 0; try[2] < MAX_TIME; ++ try[2]) {
                for (try[3] = 0; try[3] < MAX_TIME; ++ try[3]) {
                    for (try[4] = 0; try[4] < MAX_TIME; ++ try[4]) {
                        for (try[5] = 0; try[5] < MAX_TIME; ++ try[5]) {
                            for (try[6] = 0; try[6] < MAX_TIME; ++ try[6]) {
                                for (try[7] = 0; try[7] < MAX_TIME; ++ try[7]) {
                                    for (try[8] = 0; try[8] < MAX_TIME; ++ try[8]) {
                                        for (int j = 0; j < 9; ++ j) {
                                            array[j] = head[j];
                                            for (int k = 0; k < 9; ++ k) {
                                                array[j] += try[k] * ways[k][j];
                                            }
                                            array[j] = array[j] % 4;
                                        }
                                        valid = 1;
                                        for (int j = 0; j < 9; ++ j) {
                                            if (array[j] != 0 ) {
                                                valid = 0;
                                                break;
                                            }
                                        }
                                        if (valid) {
                                            if (Sum(try, 9) < Sum(times, 9)) {
                                                for (int i = 0; i < 9; ++ i) {
                                                    times[i] = try[i];
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 9; ++ i) {
        if (times[i] != 0) {
            for (int j = 0; j < times[i]; ++ j) {
                printf("%d ", i + 1);
            }
        }
    }
}

int main(void) {
    int clock[9] = {0};
    for (int i = 0; i < 9; ++ i) {
        scanf("%d", &clock[i]);
    }
    MakeMoves(clock);
    return 0;
}

