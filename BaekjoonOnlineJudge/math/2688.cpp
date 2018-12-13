#include<cstdio>
#include<cstdlib>

int main()
{
	long long t, n, a, b;
	long long left = 1;
	long long right = 1;
	long long check = 0;

	scanf("%lld", &t);

	for (long long i = 0; i < t; i++)
	{
		scanf("%lld", &n);

		a = 10 + n - 1;
		b = n;

		check = a - b;

		if (check < b)
		{
			b = check;
		}

		for (long long j =0; j<b; j++)
		{
			left *= a;
			a--;
		}
		for (long long k = 1; k <= b; k++)
		{
			right *= k;
		}

		printf("%lld\n", left / right);

		left = 1;
		right = 1;
	}
	return 0;
}