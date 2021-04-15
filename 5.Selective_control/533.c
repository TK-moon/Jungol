#include <stdio.h>

int main(void) {
    char sex;
    int age;
    scanf("%c%d", &sex, &age);
    if (sex=='F') {
        if (age>=18)
            printf("WOMAN");
        else
            printf("GIRL");
    }
    else {
        if (age>=18) {
            printf("MAN");
        }
        else
            printf("BOY");
    }
}