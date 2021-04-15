#include<stdio.h>
int main(void)
{
	int a = 2;
	int b = 1;

	for (; b <= 5; b++){
		printf("%d * %d = %2d   ", a, b, a*b);
	}
	a = 3;
	b = 1;
	printf("\n");
	for (; b <= 5; b++){
		printf("%d * %d = %2d   ", a, b, a*b);
	}
	printf("\n");
	a = 4;
	b = 1;
	for (; b <= 5; b++){
		printf("%d * %d = %2d   ", a, b, a*b);
	}
}