#include<stdio.h>
int main()
{
	int count = 0;
	int n,i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i < 10)
		{
			count++;
		}
		if (i >= 10 && i < 100)
		{
			count++;
		}
		if (i >= 100 && i < 1000)
		{
			if ((i / 100) - (i % 100 / 10) == (i % 100 / 10) - (i % 100 % 10))
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}