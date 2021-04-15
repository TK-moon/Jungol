#include <stdio.h>

int main(void) {
    int i = 1;
    int num, sum = 0;
    scanf("%d", &num);
    while (i <= num ) {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
}