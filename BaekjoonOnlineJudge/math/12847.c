#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long n,m,i;
	long long pack;
	long long* t;
	long long temp = 0;
	long long temppre = 0;
	long long result = 0;
	scanf("%lld", &n);
	scanf("%lld", &m);
	t = (long long*)malloc(sizeof(long long)*n);
	pack = n - m + 1;
	for (i = 0;i < n;i++)
	{
		scanf("%lld", &t[i]);
	}
	for (i = 0;i < m;i++)
	{
		result += t[i];
		temppre += t[i];
	}
	for (i = 1;i < pack;i++)
	{
		temp = temppre - t[i-1] + t[i + m-1];
		if (temp > result)
		{
			result = temp;
		}
		temppre = temp;
		temp = 0;
	}
	printf("%lld", result);
}