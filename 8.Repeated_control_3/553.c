#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int i = 1, j;
    int ascii = 65;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--) {
            printf("%c", ascii);
            ascii++;
        }
        printf("\n");
    }
    
    return 0;
}