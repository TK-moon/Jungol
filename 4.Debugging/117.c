#include <stdio.h>

int main(void) {
    float subjects1, subjects2, subjects3;
    scanf("%f%f%f", &subjects1, &subjects2, &subjects3);
    printf("총점 %d점\n", (int)subjects1 + (int)subjects2 + (int)subjects3);
    printf("평균 %d점", (int)((subjects1 + subjects2 + subjects3) / 3));
}