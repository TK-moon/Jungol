#include <stdio.h>

int main(void) {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d %d\n", ++num1, num2--);
    printf("%d %d", num1, num2);
}