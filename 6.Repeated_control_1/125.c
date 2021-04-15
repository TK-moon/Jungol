#include <stdio.h>

int main(void) {
    int num;
    int i = 1;
    scanf("%d", &num);
    while (i <= num) {
        printf("%d ", i);
        i++;
    }
}