#include <stdio.h>

int main(void) {
    double yard;
    printf("몇 야드인지 입력하시오. ");
    scanf("%lf", &yard);
    printf("%.1f야드 = %.1fcm", yard, yard * 91.44);
}