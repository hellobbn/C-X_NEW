//  4-14-1
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int row = 1, column = 1;
    printf("Enter the nember of *row*:");
    scanf("%d", &row);       // 行数
    printf("Enter the number of *column*:");
    scanf("%d", &column);    // 列数

    for (size_t i = 1; i <= row; i++) {
            printf("\n");
        for (size_t j = 1; j <= column; j++) {
            printf("  %lu  ", i * j);
        }
    }
    return 0;
}
