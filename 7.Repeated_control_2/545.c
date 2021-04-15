#include<stdio.h>
int main(void)
{
	int a[11] = {0};
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < 10){
		scanf_s("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i < 10){
		if (a[i] % 3 == 0)
			j++;
		if (a[i] % 5 == 0)
			k++;
		i++;
	}
	printf("3의 배수 : %d개\n", j);
	printf("5의 배수 : %d개\n", k);
}