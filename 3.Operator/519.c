#include <stdio.h>

int main(void) {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    num1 = num1 + 100;
    num2 = num2 % 10;
    printf("%d %d", num1, num2);
}