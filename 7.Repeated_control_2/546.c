#include<stdio.h>
int main(void)
{
	int a = 0;
	int i = 0;
	int b = 0;
	float total = 0;
	scanf_s("%d", &a);
	while (i < a){
		scanf_s("%d", &b);
		total += b;
		i++;
	}
	printf("평균 : %.1f\n", total/a);
	if (total / a >= 80)
		printf("합격\n");
	else
		printf("불합격\n");
}