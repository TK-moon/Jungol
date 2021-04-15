#include <stdio.h>

int main(void) {
    int num;
    int i = 1, j = 1;
    scanf("%d", &num);
    for (; num >= i; i++) {
        for (j = i; num >= j; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i=1; i <= num ; i++) {
        for(j = i;j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }
}