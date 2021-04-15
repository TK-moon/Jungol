#include <stdio.h>

int main(void) {
    int num;
    int even = 0, odd = 0;
    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;
        else if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("홀수 : %d개\n", odd);
    printf("짝수 : %d개", even);
}