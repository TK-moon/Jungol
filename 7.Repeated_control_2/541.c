#include<stdio.h>
int main(void)
{
	char a;
	int i = 0;
	scanf_s("%c", &a, 1000);
	while (i < 20){
		printf("%c", a);
		i++;
	}
}