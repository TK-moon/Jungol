#include <stdio.h>

int main(void) {
    int korean, english, math, computer;
    scanf("%d%d%d%d", &korean, &english, &math, &computer);
    printf("총점 %d점\n", korean + english + math + computer);
    printf("평균 %d점", (korean + english + math + computer) / 4);
}