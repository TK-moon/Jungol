#include<stdio.h>
int main(void)
{
	int a = 0, b = 0;
	float d = 0;
	char c = 'y';

	while (c == 'y' || c == 'Y'){
		printf("밑변의 길이 = ");
		scanf_s("%d", &a);
		printf("높이 = ");
		scanf_s("%d", &b);
		d = (float)(a*b) / 2;
		printf("입력한 삼각형의 넓이는 %.1f입니다.\n", d);
		printf("계속하시겠습니까? ");
		scanf_s(" %c", &c, 100);
	}
}