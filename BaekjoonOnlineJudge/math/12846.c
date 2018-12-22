#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long n, i,j;
	long long* t;
	long long count=1;
	long long* size;
	long long moveright=1;
	long long high = 0;

	scanf("%lld", &n);

	t = (long long*)malloc(sizeof(long long)*n);
	size = (long long*)malloc(sizeof(long long)*n);
	for (i = 0;i < n;i++)
	{
		scanf("%lld", &t[i]);
	}
	for (i = 0;i < n;i++)
	{
		for (j = i;j < n-1;j++)
		{
			if (t[i] <= t[j + 1])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		for (j = i;j > 1;j--)
		{
			if (t[i] <= t[j - 1])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		size[i] = count * t[i];
		if (size[i] > high)
		{
			high = size[i];
		}
		count = 1;
	}
	printf("%lld", high);
}