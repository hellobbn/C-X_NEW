//
//  4120_new.c
//  CProgDesign
//
//  Created by Chen LF on 2018/7/23.
//  Copyright © 2018 Chen LF. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* ways = malloc(sizeof(int) * 10001 * 201);
    int types, price;
    scanf("%d %d", &types, &price);
    int* coins = malloc(sizeof(int) * types);
    int sum = 0;
    int t;
    memset(ways, 0, 201 * 10001 * sizeof(int));
    ways[0] = 1;
    for (int i = 0; i < types; ++ i) {
        scanf("%d", coins + i);
        t = *(coins + i);
        sum += t;
        for (int j = price; j >= 0; -- j) {
            if (j >= t) {
                ways[j] = ways[j] + ways[j - t];
            }
        }
    }
    
    //    for(int i = 0; i <= price; ++ i) {
    //        printf("%d\t", ways[i]);
    //        if(i % 5 == 0) {
    //            printf("\n");
    //        }
    //    }
    //
    int checkCoin = 0;
    // let's find the way!
    int* tryWay = malloc(sizeof(int) * 10001);
    for (int i = 0; i < types; ++ i) {
        memset(tryWay, 0, sizeof(int) * 10001);
        tryWay[0] = 1;
        // check if coins[i] is a must
        checkCoin = coins[i];
        // without checkCoin, ways[x] == 0
        for (int j = 0; j <= price; ++ j) {
            if (j < checkCoin) {
                // it matters nothing
                tryWay[j] = ways[j];
            } else {
                // we need to delete possibilities where have 2
                tryWay[j] = ways[j] - ways[j - checkCoin];
            }
        }
        if (tryWay[price] == 0) {
            printf("%d ", checkCoin);
        }
    }
}
