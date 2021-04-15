#include <stdio.h>

int main(void) {
    printf("%10s%10s%10s\n", "item", "count", "price");
    printf("%10s%10d%10d\n", "pen", 20, 100);
    printf("%10s%10d%10d\n", "note", 5, 95);
    printf("%10s%10d%10d", "eraser", 110, 97);
}