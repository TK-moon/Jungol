#include <stdio.h>

int main(void) {
    float a, b;
    scanf("%f%f", &a, &b);
    if (a>=4.0 && b>=4.0) {
        printf("A");
    }
    else if (a>=3.0 && b>=3.0) {
        printf("B");
    }
    else
        printf("C");
}