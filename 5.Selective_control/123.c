#include <stdio.h>

int main(void) {
    int num;
    printf("1. 개\n");
    printf("2. 고양이\n");
    printf("3. 병아리\n");
    printf("영어로 알고 싶은 번호를 입력하세요. ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("dog");
            break;
        case 2:
            printf("cat");
            break;
        case 3:
            printf("chick");
            break;
        default:
            printf("I don't know.");
    }
}