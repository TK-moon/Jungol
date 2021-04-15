#include<stdio.h>
int main()
{
	int a = 0, i = 1;
	scanf_s("%d", &a);
	for (; i <= 10; i++){
		printf("%d ", a*i);
	}
}