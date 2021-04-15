#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    int sum=0;
    int i;
    for (i=0; i<20; i++) {
        scanf("%d", &num);
        if (num==0) {
            break;
        }
        sum += num;
    }
    printf("%d %d", sum, sum/i);
    
    return 0;
}