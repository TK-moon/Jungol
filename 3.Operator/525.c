#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf("1 ");
    else
        printf("0 ");
    if (num1 == num2 && num1 == num3)
        printf("1");
    else
        printf("0");
}