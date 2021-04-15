#include <stdio.h>

int main(void) {
    double num1, num2;
    char alphabet;
    scanf("%lf%lf %c", &num1, &num2, &alphabet);
    printf("%.2f\n", num1);
    printf("%.2f\n", num2);
    printf("%c\n", alphabet);
}