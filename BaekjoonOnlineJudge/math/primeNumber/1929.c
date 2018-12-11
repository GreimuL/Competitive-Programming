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
				if (d == 0&& b != 1)
				{
					printf("%d\n", b);
				}
			}

			if (b == 2)
			{
				printf("%d\n", b);
			}
			d = 0;
		}
	
	return 0;
}