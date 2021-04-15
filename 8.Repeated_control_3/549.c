#include <stdio.h>

int main(void) {
    int num;
    int i = 1;
    int count = 0;
    int sum = 0;
    scanf("%d", &num);
    while (1) {
        sum = sum + i;
        i = i + 2;
        count++;
        if (sum >= num) {
            break;
        }
    }
    printf("%d %d", count, sum);
}