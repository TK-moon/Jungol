#include <stdio.h>

int main(void) {
    int year;
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 ==0 && year % 100 != 0))
        printf("윤년");
    else
        printf("평년");
}