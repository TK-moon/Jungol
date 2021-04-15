#include<stdio.h>
int main(void)
{
	int a, b = 1;
	int i = 1, j = 1;
	scanf_s("%d", &a);
	b = a;
	for (; j <= b; j++){
		for (i = 1; i <= a; i++){
			printf("(%d, %d) ", j, i);
		}
		printf("\n");
	}
}