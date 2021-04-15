#include <stdio.h>

int main(void) {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d ", num1 / num2);//첫번째 수를 두 번째 수로 나눈 몫
    printf("%.2lf", (double)num1 / num2);//첫 번째 수를 double 로 변환하여 두 번째 수로 나눈 값
}