#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("합 = %d\n", num1 + num2 + num3);
    printf("평균 = %d", (num1 + num2 + num3) / 3);
}