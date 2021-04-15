#include <stdio.h>

int main(void) {
    int width, length;
    scanf("%d%d", &width, &length);
    width = width + 5;
    length = length * 2;
    printf("가로 = %d\n", width);
    printf("세로 = %d\n", length);
    printf("넓이 = %d", width * length);
}