#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;

int n;
int t[1500001];
int p[1500001];
int dynamic[1500001];

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &t[i], &p[i]);
	}
	dynamic[n] = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (i + t[i] < n + 1)
		{
			dynamic[i] = max(dynamic[i + 1], dynamic[i + t[i]] + p[i]);
		}
		else
		{
			dynamic[i] = dynamic[i + 1];
		}
		
	}

	printf("%d", dynamic[0]);

	return 0;
}