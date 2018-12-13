#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
		int a, i, j,f;
		int b = 0;
		int c = 0;
		int d = 0;
		int fcheck = 0;
		scanf("%d %d", &a,&f);
		for (i = a; i <=f; i++)
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
				if (d == 0)
				{
					if (fcheck == 0 || fcheck == 1)
					{
						fcheck = b;
					}
					c += b;
				}
			}
			if (b == 1)
			{
				c -= b;
			}
			if (b == 2)
			{
				if (fcheck == 0||fcheck == 1)
				{
					fcheck = b;
				}
				c += b;
			}
			d = 0;
		}
        if(c != 0)
        {
		printf("%d\n", c);
		printf("%d", fcheck);
        }
    if(c == 0)
    {
        printf("-1");
    }
	return 0;
}