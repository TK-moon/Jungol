#include<stdio.h>
int main(void)
{
	int a;
	float b = 0;
	int count = 0;
	while (1){
		scanf_s("%d", &a);
		if (a <= 100 && a >= 0){
			b += a;
			count++;
		}
		else
			break;
	}
	printf("�հ� : %.0f��\n", b);
	printf("��� : %.1f��", b / count);
}