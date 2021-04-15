#include <stdio.h>

int main(void) {
    float clsius = 21.6;
    float fahrenheit = 110.3;
    
    printf("섭씨%6.1f도는 화씨%5.1f도이다.\n", 21.6, (clsius * 1.8) + 32);
    printf("화씨%6.1f도는 섭씨%5.1f도이다.", 110.3, (fahrenheit - 32) * 0.55);
}