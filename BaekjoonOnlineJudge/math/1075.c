#include<stdio.h>
int main()
{
	int n, f,i,remain,real,reali;
	scanf("%d %d", &n, &f);

	remain = (int)(n / 100);
	real = remain * 100;

	for (i = 0;i <= 100;i++)
	{
		if (real%f == 0)
		{
			reali = i;
			break;
		}
		real++;
	}
	if (reali < 10)
	{
		printf("0%d", reali);
	}
	if (reali >=10)
	{
		printf("%d", reali);
	}
}