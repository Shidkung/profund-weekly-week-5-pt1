#include "stdio.h"
int main() {
    int num;
    scanf_s("%d", &num);
    for (int i = 1; i <= num ; i++) {
        for (int j = 1; j <= i; j++)printf("*");
        for (int j = 1; j <= (num * 2 - 1) - (i * 2); j++)printf(" ");
        printf("\n");
    }
    return 0;
}