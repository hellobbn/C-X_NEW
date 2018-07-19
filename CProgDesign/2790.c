//
//  2790.c
//  CProgDesign
//
//  Created by Chen LF on 2018/7/19.
//  Copyright © 2018 Chen LF. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int TransStste(int x, int y, int size) {
    return x * size + y;
}
int WalkTry(int misSize, int startX, int startY, int endX, int endY, char* mis, int** signs) {
    if (mis[TransStste(endX, endY, misSize)] == '#') {
        return -1;
    }
    if (startX == endX && startY == endY) {
        return 1;
    }
    int saver = 0;
    if (mis[TransStste(startX, startY, misSize)] == '#') {
        return -1;
    }
    // Go left
    if (startY > 0 && signs[startX][startY - 1] == 0) {
        signs[startX][startY - 1] = 1;
        if ((saver =WalkTry(misSize, startX, startY - 1, endX, endY, mis, signs)) == 1)
            return 1;
        else if (saver != -1)
            signs[startX][startY - 1] = 0;
    }
    
    // Go right
    if (startY < misSize - 1 && signs[startX][startY + 1] == 0) {
        signs[startX][startY + 1] = 1;
        if ((saver =WalkTry(misSize, startX, startY + 1, endX, endY, mis, signs)) == 1)
            return 1;
        else if (saver != -1)
            signs[startX][startY + 1] = 0;
    }
    
    // Go up
    if (startX > 0 && signs[startX - 1][startY] == 0) {
        signs[startX - 1][startY] = 1;
        if ((saver = WalkTry(misSize, startX - 1, startY, endX, endY, mis, signs)) == 1)
            return 1;
        else if (saver != -1)
            signs[startX - 1][startY] = 0;
        
    }
    
    // Go down
    if (startX < misSize - 1 && signs[startX + 1][startY] == 0) {
        signs[startX + 1][startY] = 1;
        if ((saver = WalkTry(misSize, startX + 1, startY, endX , endY, mis, signs)) == 1)
            return 1;
        else if (saver != -1)
            signs[startX + 1][startY] = 0;
    }
    return -1;
}
int main(void) {
    int times = 0;
    int size = 0;
    scanf("%d", &times);
    int result[times];
    for (int i = 0; i < times; ++ i) {
        scanf("%d", &size);
        int numberSize = size * size;
        int startR, startC, endR, endC;
        char* misTry = malloc(numberSize * sizeof(char));
        char c;
        int cnt = 0;
        int** signs = malloc(sizeof(int* ) * size);
        for (int i = 0; i < size; ++ i) {
            signs[i] = malloc(sizeof(int) * size);
        }
        for (int i = 0; i < size; ++ i) {
            for (int j = 0; j < size; ++ j) {
                signs[i][j] = 0;
            }
        }
        while (cnt < numberSize) {
            c = getchar();
            if (c != '\n' && c != ' ') {
                misTry[cnt] = c;
                cnt++;
            }
        }
        scanf("%d %d %d %d", &startR, &startC, &endR, &endC);
        signs[startR][startC] = 1;
        if (WalkTry(size, startR, startC, endR, endC, misTry, signs) == 1)
            result[i] = 1;
        else
            result[i] = -1;
    }
    
    for (int i = 0; i < times; ++ i) {
        if (result[i] == 1) {
            printf("YES\n");
        } else if (result[i] == -1) {
            printf("NO\n");
        }
    }
    return 0;
}
