#include<stdio.h>
int main(void)
{
	int a = 0, b = 0;
	float d = 0;
	char c = 'y';

	while (c == 'y' || c == 'Y'){
		printf("�غ��� ���� = ");
		scanf_s("%d", &a);
		printf("���� = ");
		scanf_s("%d", &b);
		d = (float)(a*b) / 2;
		printf("�Է��� �ﰢ���� ���̴� %.1f�Դϴ�.\n", d);
		printf("����Ͻðڽ��ϱ�? ");
		scanf_s(" %c", &c, 100);
	}
}