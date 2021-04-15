#include <stdio.h>

int main(void) {
    int num;
    int count = 0;
    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        else if (num % 3 != 0 && num % 5 != 0)
            count++;
    }
    printf("%d", count);
}