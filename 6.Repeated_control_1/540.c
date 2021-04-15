#include <stdio.h>

int main(void) {
    int num;
    while (1) {
        scanf("%d", &num);
        if (num % 3 == 0)
            printf("%d\n", num / 3);
        else if (num == -1)
            break;
    }
}