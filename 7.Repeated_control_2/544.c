#include<stdio.h>
int main(void)
{
	int a;
	int total = 0;
	scanf_s("%d", &a);
	
	for (; 100 >= a; a++){
		total = total + a;
	}
	printf("%d", total);
}