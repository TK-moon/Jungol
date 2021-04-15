#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;
    int count = 0;
    while (1) {
        scanf("%d", &num);
        sum = sum + num;
        count++;
        if (num >= 100) {
            break;
        }
    }
    printf("%d\n", sum);
    printf("%.1f", (float)sum / count);
}