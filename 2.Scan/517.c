#include <stdio.h>

int main(void) {
    float num1, num2;
    double num3;
    scanf("%f%f%lf", &num1, &num2, &num3);
    printf("%.3f\n", num1);
    printf("%.3f\n", num2);
    printf("%.3f", num3);
}