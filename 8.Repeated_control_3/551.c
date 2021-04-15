#include <stdio.h>

int main(void) {
    int num;
    int i = 0, j = 0, k = 0;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        for (j = i; j > 0; j--) {
            printf(" ");
        }
        for (k = i; k < num; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}