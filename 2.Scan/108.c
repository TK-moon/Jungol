#include <stdio.h>

int main(void) {
    int num1 = 50;
    float num2 = 100.12;
    printf("%.2f * %d = %d", num2, num1, (int)(num1 * num2));
}