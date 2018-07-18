#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 500

int DecideSmallBit(char* number, int length) {
    int i;
    for (i = length - 1; i >= 0; -- i) {
        if (number[i] == '.') {
            break;
        }
    }
    return length - i - 1;
}
int Maximum(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}
void ReverseNumber(char* inNumber, int* operateNumber, int smallLength, int maxSmallLength) {
    int length = (int)strlen(inNumber);
    for (int i = maxSmallLength - smallLength, j = length - 1; j >= 0; -- j, ++ i) {
        if (inNumber[j] != '.') {
            operateNumber[i] = inNumber[j] - '0';
        } else {
            operateNumber[i] = '.';
        }
    }
}
int main(void) {
    char wordA[MAX_WORDS] = {0};
    char wordB[MAX_WORDS] = {0};
    int operateA[MAX_WORDS] = {0};
    int operateB[MAX_WORDS] = {0};
    
    scanf("%s", wordA);
    scanf("%s", wordB);
    
    int aSmallLength = DecideSmallBit(wordA, (int)strlen(wordA));
    int bSmallLength = DecideSmallBit(wordB, (int)strlen(wordB));
    int aLength = (int)strlen(wordA);
    int bLength = (int)strlen(wordB);
    int aBigLength = aLength - aSmallLength;
    int bBigLength = bLength - bSmallLength;
    int maxSmallLength = Maximum(aSmallLength, bSmallLength);
    int maxBigLength = Maximum(aBigLength, bBigLength);
    int maxLength = maxSmallLength + maxBigLength;
    
    ReverseNumber(wordA, operateA, aSmallLength, maxSmallLength);
    ReverseNumber(wordB, operateB, bSmallLength, maxSmallLength);
    
    int metNoneZero = 0;
    for (int i = 0; i < maxSmallLength; ++ i) {
        operateA[i] = operateA[i] + operateB[i];
        if (operateA[i] >= 10) {
            operateA[i] -= 10;
            if (i == maxSmallLength - 1) {
                operateA[i + 2] ++;
            } else {
                operateA[i + 1] ++;
            }
        }
        if (operateA[i] != 0) {
            metNoneZero = 1;
        }
        if ((operateA [i]== 0) && (metNoneZero == 0)) {
            operateA[i] = 'a';
        }
    }
    for (int i = maxSmallLength + 1; i < maxLength; ++ i) {
        operateA[i] = operateA[i] + operateB[i];
        if (operateA[i] >= 10) {
            operateA[i] -= 10;
            operateA[i + 1] ++;
            if (i == maxLength - 1) {
                maxLength ++;
                break;
            }
        }
    }

    for (int i = maxLength - 1; i >= 0; -- i) {
        if (operateA[i] == 'a') {
            break;
        } else if (operateA[i] == '.') {
            if (metNoneZero == 0) {
                continue;
            }
            printf(".");
        } else {
            printf("%d", operateA[i]);
        }
    }
    printf("\n");
    return 0;
    
}
