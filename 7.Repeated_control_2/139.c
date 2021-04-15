#include <stdio.h>

int main(void) {
    int num1, num2;
    int i = 1, tmp;
    scanf("%d%d", &num1, &num2);
    if (num1 > num2) {
        tmp = num1;
        for (; i <= 9; i++) {
            for (; num1 >= num2; num1--) {
                printf("%d * %d = %2d   ", num1, i, num1 * i);
            }
            num1 = tmp;
            printf("\n");
        }
    }
    else {
        tmp = num1;
        for (; i <= 9; i++) {
            for (; num1 <= num2; num1++) {
                printf("%d * %d = %2d   ", num1, i, num1 * i);
            }
            num1 = tmp;
            printf("\n");
        }
    }
}