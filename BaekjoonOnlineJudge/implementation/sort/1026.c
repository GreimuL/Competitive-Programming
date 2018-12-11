#include<stdlib.h>
#include<stdio.h>
int main()
{
	int num, i, j, changer;
	int* a;
	int* b;
	scanf("%d", &num);
	a = (int*)malloc(sizeof(int)*num);
	b = (int*)malloc(sizeof(int)*num);
	for (i = 0;i<num;i++)
	{
		scanf("%d", &a[i]);		
	}
	for (i = 0;i<num;i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0;i<num - 1;i++)
	{
		for (j = 0;j<num - 1;j++)
		{
			if (a[j]>a[j + 1])
			{
				changer = a[j];
				a[j] = a[j + 1];
				a[j + 1] = changer;
			}
		}
	}
	for (i = 0;i<num - 1;i++)
	{
		for (j = 0;j<num - 1;j++)
		{
			if (b[j]>b[j + 1])
			{
				changer = b[j];
				b[j] = b[j + 1];
				b[j + 1] = changer;
			}
		}
	}
	changer = 0;
	for (i = 0;i<num;i++)
	{
		changer += a[i] * b[num-i-1];
	}
	printf("%d", changer);
	return 0;
}