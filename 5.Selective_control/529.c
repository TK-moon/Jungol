#include <stdio.h>

int main(void) {
    int height, weight;
    scanf("%d%d", &height, &weight);
    printf("비만수치는 %d입니다.\n", weight + 100 - height);
    if (weight + 100 - height > 0) {
        printf("당신은 비만이군요.");
    }
}