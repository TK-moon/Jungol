#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int i,j;
    scanf("%d",&n);
    for(j = 0; j < n; j++){
        for(i = 1; i <= j; i++)
            printf(" ");
        for(i = 1; i <= n-j; i++)
            printf("*");
        for(i = n-j-1; i >= 1; i--)
            printf("*");
        printf("\n"); 
    }
    return 0;
}