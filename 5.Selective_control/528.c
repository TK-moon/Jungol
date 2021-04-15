#include <stdio.h>

int main(void) {
    int num1;
    scanf("%d", &num1);
    if (num1<0) {
        printf("%d\n", num1);
        printf("음수입니다.");
    }
    else
        printf("%d", num1);
}