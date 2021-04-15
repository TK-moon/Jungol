#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num=0;
    scanf("%d", &num);
    for (int i=1; i<100; i++) {
        if (num*i>=100) {
            break;
        }
        printf("%d ", num*i);
        if (num*i%10==0) {
            break;
        }
    }
    
    return 0;
}