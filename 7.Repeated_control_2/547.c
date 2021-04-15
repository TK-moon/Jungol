#include<stdio.h>
int main(void)
{
	int i = 2;
	int j = 6;
	for (; j <= 10; j++){
		i = j - 4;
		for (; i <= j; i++){
			printf("%d ", i);
		}
		printf("\n");
	}
}