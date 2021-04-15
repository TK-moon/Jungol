#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int num = 1;
    int ascii = 65;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            printf("%d ", num);
            num++;
        }
        for (int j=n; j>=n-i; j--) {
            printf("%c ", ascii);
            ascii++;
        }
        printf("\n");
    }
    
    return 0;
}