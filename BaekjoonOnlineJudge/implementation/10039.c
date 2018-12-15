#include<stdio.h>
int main()
{
	int a[5];
	int avg, i;
	avg = 0;
	for (i = 0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
	{
		if (a[i] <40)
		{
			a[i] = 40;
		}
		avg += a[i];
	}
	printf("%d", avg / 5);
	return 0;
}