#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int total = 0;
	int i = 0;
	scanf_s("%d", &a);
	for (; i < a; i++){
		scanf_s("%d", &b);
		total += b;
	}
	printf("%.2f\n", (float)total/a);
}