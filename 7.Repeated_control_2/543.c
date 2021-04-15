#include<stdio.h>
int main(void)
{
	int a = 0;
	int i = 1;
	scanf_s("%d", &a);
	for (; i <= a; i++){
		if (i % 2 == 0)
			printf("%d ", i);
	}
}