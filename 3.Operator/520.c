#include <stdio.h>

int main(void) {
    int num1;
    scanf("%d", &num1);
    printf("후치 %d\n", num1++);
    printf("전치 %d", ++num1);
}