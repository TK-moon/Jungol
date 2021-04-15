#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("정수 입력 ");
    scanf("%d%d", &num1, &num2);
    printf("곱 = %d\n", num1 * num2);
    printf("몫 = %d", num1 / num2);
}