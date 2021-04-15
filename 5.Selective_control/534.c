#include <stdio.h>

int main(void) {
    char alphabet;
    scanf("%c", &alphabet);
    if (alphabet=='A') {
        printf("매우잘함");
    }
    else if (alphabet=='B') {
        printf("잘함");
    }
    else if (alphabet=='C') {
        printf("보통임");
    }
    else if (alphabet=='D') {
        printf("노력요함");
    }
    else if (alphabet=='F') {
        printf("낙제");
    }
    else {
        printf("잘못입력");
    }
}