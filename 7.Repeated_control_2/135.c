#include<stdio.h>
int main()
{
	int n = 0, a, b, i;
	int total = 0;
	float j;
	scanf_s("%d%d", &a, &b);
	if (a<b)
	for (i = a; i <= b; i++)
	{
		if (i % 15 == 0){
			total -= i; n--;
		}
		if (i % 3 == 0){
			total += i; n++;
		}
		if (i % 5 == 0){
			total += i; n++;
		}

	}
	else if (b<a)
	for (i = b; i <= a; i++)
	{
		if (i % 15 == 0){
			total -= i; n--;
		}
		if (i % 3 == 0){
			total += i; n++;
		}
		if (i % 5 == 0){
			total += i; n++;
		}
	}
	else
	for (i = b; i <= a; i++)
	{
		if (i % 15 == 0){
			total -= i; n--;
		}
		if (i % 3 == 0){
			total += i; n++;
		}
		if (i % 5 == 0){
			total += i; n++;
		}
	}
	j = (float)total / n;
	printf("�հ� : %d\n", total);
	printf("��� : %.1f\n", j);

}
