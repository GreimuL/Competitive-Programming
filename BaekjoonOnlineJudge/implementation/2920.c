#include<stdio.h>
int main()
{
	int a[8];
	int i,count;
	count = 0;
	for (i = 0; i<8; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 7; i++)
	{
		if (a[i] <a[i+1])
		{
			count += 1;
		}
		else
		{
			count -= 1;
		}
	}
	if (count == 7)
	{
		printf("ascending");
	}
	else if (count == -7)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}

	return 0;
}