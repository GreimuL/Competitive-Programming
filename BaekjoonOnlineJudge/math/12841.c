#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long n, i;
	long long* a;
	long long* b;
	long long* c;
	long long* s1;
	 long long* s2;
	 long long result = 0;
	 long long temp = 0;
	 long long count = 0;
	scanf("%lld", &n);

	a = ( long long*)malloc(sizeof( long long)*n);
	b = ( long long*)malloc(sizeof( long long)*(n - 1));
	c = ( long long*)malloc(sizeof( long long)*(n - 1));
	s1 = ( long long*)malloc(sizeof( long long)*(n));
	s2 = ( long long*)malloc(sizeof( long long)*(n));
	for (i = 0;i < n;i++)
	{
		scanf("%lld", &a[i]);
	}
	for (i = 0;i < n - 1;i++)
	{
		scanf("%lld", &b[i]);
	}
	for (i = 0;i < n - 1;i++)
	{
		scanf("%lld", &c[i]);
	}

	s1[0] = 0;
	s2[n - 1] = 0;

	for (i = 1;i < n;i++)
	{
		s1[i] = s1[i - 1] + b[i - 1];
	}
	for (i = n - 2;i >= 0;i--)
	{
		s2[i] = s2[i + 1] + c[i];
	}
	for (i = 0;i < n;i++)
	{
		temp = s1[i] + s2[i] + a[i];
		if (result == 0 || result > temp)
		{
			result = temp;
			count = i + 1;
		}
	}
	printf("%lld %lld", count, result);
}