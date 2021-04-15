#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    scanf("%d%d", &num1, &num2);
    num3 = num1++ * --num2;
    printf("%d %d %d", num1, num2, num3);
}