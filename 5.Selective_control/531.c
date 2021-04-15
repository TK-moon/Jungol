#include <stdio.h>

int main(void) {
    float num;
    scanf("%f", &num);
    if (num<=50.80) {
        printf("플라이급");
    }
    else if (num<=61.23) {
        printf("라이트급");
    }
    else if (num<=72.57) {
        printf("미들급");
    }
    else if (num<=88.45) {
        printf("크루저급");
    }
    else
        printf("헤비급");
}