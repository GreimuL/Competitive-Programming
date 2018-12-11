#include<stdio.h>
#include<math.h>
int main()
{
	int a, i, j;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d", &a);
	for (i = 0; i<a; i++)
	{
		scanf("%d", &b);
		if (b % 2 != 0)
		{
			for (j = 2; j <= sqrt(b); j++)
			{
				if (b%j == 0&&b!=j)
				{
					d += 1;
					break;
				}
			}
			if (d == 0)
			{
				c += 1;
			}
		}
		if (b == 1)
		{
			c -= 1;
		}
        if (b == 2)
		{
			c += 1;
		}
		d = 0;
	}
	printf("%d", c);
	return 0;
}