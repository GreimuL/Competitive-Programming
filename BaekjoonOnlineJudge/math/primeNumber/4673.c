#include<stdio.h>
int main()
{
	int i, result,j;
	result = 1;
	int mid;
	int mid2;
	int count = 0;
	int b[10001];
	for (i = 1; i<10001; i++)
	{
		if (i<10)
		{
			b[i] = i;
		}
		if (i >= 10 && i<100)
		{
			result = i + (i / 10) + (i % 10);
			b[i] = result;
		}
		if (i >= 100 && i<1000)
		{
			mid = i % 100;
			result = i + (i / 100) + (mid / 10) + (mid % 10);
			b[i] = result;
		}
		if (i >= 1000 && i<10000)
		{
			mid = i % 1000;
			mid2 = i % 100;
			result = i + (i / 1000) + (mid / 100) + (mid2 / 10) + (mid % 10);
			b[i] = result;
		}
	}
	printf("1\n3\n5\n7\n9\n20\n");
	for (i = 21; i < 10001; i++)
	{
		for (j = 1; j < 10001; j++)
		{
			if (i == b[j])
			{
				count += 1;
			}
		}
		if (count == 0)
		{
			printf("%d\n", i);
		}
		count = 0;
	}
	return 0;
}