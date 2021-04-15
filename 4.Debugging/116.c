#include <stdio.h>

int main(void) {
    int subjects1, subjects2, subjects3;
    scanf("%d%d%d", &subjects1, &subjects2, &subjects3);
    printf("%.1f점", (float)(subjects1 + subjects2 + subjects3) / 3);
}