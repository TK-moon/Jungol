#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	for (b= 0; b <= 9;b++){
		scanf_s("%d", &a);
		if (a % 2 == 0)
			i++;
		else
			j++;
	}
	printf("¦�� : %d��\n", i);
	printf("Ȧ�� : %d��\n", j);
}