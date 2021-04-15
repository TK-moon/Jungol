#include <stdio.h>

int main(void) {
    double num1, num2;
    scanf("%lf%lf", &num1, &num2);
    printf("%d ", (int)(num1 * num2));//두 수의 곱을 정수로 변환한 결과
    printf("%d", (int)num1 * (int)(num2));//두 수를 각각 정수로 변환하여 곱을 구한 결과
}