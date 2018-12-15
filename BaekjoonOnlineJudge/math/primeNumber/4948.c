#include<stdio.h>
#include<math.h>
int main()
{
	int a = 1;
	while (a!=0)
	{
		int a, i, j,f;
		int b = 0;
		int c = 0;
		int d = 0;
		int fcheck = 0;
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		for (i = a+1; i <=2*a; i++)
		{
			b = i;
			if (b % 2 != 0)
			{
				for (j = 2; j <= sqrt(b); j++)
				{
					if (b%j == 0 && b != j)
					{
						d += 1;
						break;
					}
				}
				if (d == 0&& b != 1)
				{
					c += 1;
				}
			}
			if (b == 2)
			{
				c += 1;
			}
			d = 0;
		}
		printf("%d\n", c);
	}
	return 0;
}