#include<stdio.h>
int main(void)
{
	int x, y;
	int i = 0, j = 0, k = 1;
	int tmp = 0;
	scanf_s("%d%d", &y, &x);

	for (; j < y; j++){
		for (i=0; i < x; i++){
			tmp += k;
			printf("%d ", tmp);
		}
		printf("\n");
		k++;
		tmp = 0;
	}
}