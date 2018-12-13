#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

		int all, i,j;
		int save5 = 0;
		int save3 = 0;
		int check5check = 0;
		int check5right = 0;
		int check3right = 0;
		int only3 = 0;
		int real3cant = 0;
		int check17 = 0;
		scanf("%d", &all);

		for (i = 0; i <= 1000; i++)
		{
			if (i * 5 == all)
			{
				check5check = 1;
				check3right = 1;
				save5 = i;
			}
			if (i * 5 > all&&check5check == 0)
			{
				save5 = i - 1;
				i = 1001;
			}
		}
		if (check5check == 0)
		{
			for (i = 0; i < 1668; i++)
			{
				if (i * 3 == all - save5 * 5)
				{
					save3 = i;
					check3right = 1;
				}
			}
		}
		if (check3right == 0)
		{
			if (real3cant == 0)
			{
				for (j = 0; j < 1000; j++)
				{
					for (i = j; i < 1668; i++)
					{
						if (i * 3 == all - ((save5 - j) * 5) && save5>j)
						{
							save3 = i - 1;
							check3right = 1;
							real3cant = 1;
							i = 1669;
							j = 1001;
						}
					}
				}
			}

			if (real3cant == 0)
			{
				for (i = 0; i < 1668; i++)
				{
					if (i * 3 == all)
					{
						save3 = i;
						check3right = 1;
						only3 = 1;
					}
				}
			}
		}
		if (check3right == 0)
		{
			printf("-1");
		}
		if (check3right == 1 && check5check == 1 && only3 == 0)
		{
			printf("%d", save5);
		}
		if (check3right == 1 && check5check == 0 && only3 == 0)
		{
			for (i = 0; i < 1000; i++)
			{
				if (all == 17 + 5 * i)
				{
					printf("%d", save3 + save5 - 1);
					check17 = 1;
				}
			}
			if (check17 == 0)
			{
				printf("%d", save3 + save5);
			}
			
			
		}
		if (check3right == 1 && only3 == 1)
		{
			printf("%d", save3);
		}
	

	return 0;
}