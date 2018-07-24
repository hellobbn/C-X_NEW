//
//  4120.c
//  CProgDesign
//
//  Created by Chen LF on 2018/7/23.
//  Copyright © 2018 Chen LF. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int total = 0;

int CheckAva(int* coins, int* ableTable, int leftProce, int size) {
    if (size == 0) {
        return 0;
    }
    if (leftProce < *coins) {
        return 0;
    }
    if (leftProce == *coins) {
        return 1;
    }
    int ava = 0;
    int unava = 0;
    ava = CheckAva(coins + 1, ableTable + 1, leftProce - *coins, size - 1);
    unava = CheckAva(coins + 1, ableTable + 1, leftProce, size - 1);
    
    if ((ava == 0 && unava == 0) || (ava == 1 && unava == 0)) {
        // Don;t change it
    } else {
        *ableTable = 0;
    }
    if (total == size && (ava == 0) && (unava == 0)) {
        return -1;
    }
    if (ava || unava) {
        return 1;
    } else {
        return 0;
    }
    
}
int main(void) {
    int types, price;
    scanf("%d %d", &types, &price);
    total = types;
    int* coins = malloc(sizeof(int) * types);
    for (int i = 0; i < types; ++ i) {
        scanf("%d", coins + i);
    }
    int* able = malloc(sizeof(int) * types);
    for (int i = 0; i < types; ++ i) {
        able[i] = 1;
    }
    int c = CheckAva(coins, able, price, types);
    //    for (int i = 0; i < types; ++ i) {
    //        printf("%d", *(able + i));
    //    }
    int cnt = 0;
    for (int i = 0; i < types; ++ i) {
        if (able[i] == 1) {
            cnt++;
        }
    }
    if (c == -1) {
        printf("0\n");
    } else {
        printf("%d\n", cnt);
        for (int i = 0; i < types; ++ i) {
            if (able[i] == 1) {
                printf("%d ", *(coins+i));
            }
        }
    }
    return 0;
}
