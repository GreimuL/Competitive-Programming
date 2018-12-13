#include<stdio.h>

	int main()
	{
		int n, i;

			scanf("%d", &n);
			if (n == 1)
			{
				printf("1");
			}
			for (i = 0; i < 1000000000; i++)
			{
				if (3 * i*(i + 1) + 1 < n&&n <= 3 * (i + 1)*(i + 2) + 1 && n != 1)
				{
					printf("%d\n", i + 2);
					break;
				}
				if (n == 1)
				{
					break;
				}
			}

		return 0;
	}