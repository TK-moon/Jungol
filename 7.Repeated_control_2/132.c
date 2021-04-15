#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf_s("%d", &a);
	for (; i <= a; i++){
		if (i % 5 == 0){
			b += i;
		}
	}
	printf("%d\n", b);
}