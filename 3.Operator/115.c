#include <stdio.h>

int main(void) {
    int minsuHeight, minsuWight;
    int kiyoungHeight, kiyoungWight;
    printf("민수의 키와 몸무게 입력 ");
    scanf("%d%d", &minsuHeight, &minsuWight);
    printf("기영이의 키와 몸무게 입력 ");
    scanf("%d%d", &kiyoungHeight, &kiyoungWight);
    if (minsuHeight > kiyoungHeight && minsuWight > kiyoungWight)
        printf("1");
    else
        printf("0");
}