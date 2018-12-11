#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

long long modfact = 1000000007;
long long sum[100];
long long pascaltri[100][100];

long long combi(long long n, long long k)
{
	long long tempn = 1;
	long long tempk = 1;

	if (n - k >= k)
	{
		for (long long i = n; i > n-k; i--)
		{
			tempn *= i;
			if (tempn > modfact)
			{
				tempn = tempn;
			}
		}
		for (long long i = 1; i <= k; i++)
		{
			tempk *= i;
			if (tempk > modfact)
			{
				tempk = tempk;
			}
		}

		return tempn / tempk;
	}
	else
	{
		combi(n, n - k);
	}
}

long long combipascal(long long n, long long k)
{
	long long tempcombi = 0;
	if (n == 0)
	{
		tempcombi = 1;
	}
	if (k == 0)
	{
		tempcombi = 1;
	}
	if (n == k)
	{
		tempcombi = 1;
	}
	if (n != 0 && k != 0&& n!= k)
	{
		tempcombi = (combipascal(n - 1, k - 1)%modfact + combipascal(n - 1, k)%modfact)%modfact;
	}

	return tempcombi;
}

long long pascaltricombi(long long n, long long k)
{
	long long tempcombi = 0;
	if (n == 0)
	{
		tempcombi = 1;
	}
	if (k == 0)
	{
		tempcombi = 1;
	}
	if (n == k)
	{
		tempcombi = 1;
	}
	if (n != 0 && k != 0 && n != k)
	{
		if (pascaltri[n - 1][k - 1] != -1 && pascaltri[n - 1][k] != -1)
		{
			tempcombi = (pascaltri[n - 1][k - 1] % modfact + pascaltri[n - 1][k] % modfact) % modfact;
		}
		else
		{
			tempcombi = (pascaltricombi(n - 1, k - 1) % modfact + pascaltricombi(n - 1, k) % modfact%modfact);
		}
	}

	pascaltri[n][k] = tempcombi;
	return tempcombi;
}


long long facto(long long n, long long k)
{
	long long factor = 1;

	for (int i = 0; i < k; i++)
	{
		factor = (factor%modfact *n%modfact)%modfact;
		
	}

	return factor;
}

long long fastfacto(long long n, long long k) {
	if (k == 0)
	{
		return 1;
	}
	if (k == 1)
	{
		return n % modfact;
	}

	long long x = fastfacto(n, k / 2);

	if (k %2 == 1)
	{
		return (((n*x) % modfact)*x) % modfact;
	}

	return (x*x) % modfact;
}

long long resultfunc(long long n, long long k)
{
	long long tempresult = 0;

	tempresult += fastfacto(n + 1, k + 1)%modfact;
	tempresult -= 1%modfact;
	
	for (int i = 0; i <= k - 1; i++)
	{
		if (sum[i] == -1)
		{
			tempresult -= ((pascaltricombi(k + 1, i)%modfact)*(resultfunc(n, i)%modfact))%modfact;
		}
		else
		{
			tempresult -= ((pascaltricombi(k + 1, i)%modfact)*(sum[i]%modfact))%modfact;
		}
	}


	tempresult = (((tempresult)%modfact) * (fastfacto(pascaltricombi(k+1,k),modfact-2)%modfact )%modfact);

	if (tempresult < 0)
	{
		tempresult += modfact;
	}


	sum[k] = tempresult%modfact;
	return tempresult%modfact;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		sum[i] = -1;
		for (int j = 0; j < 100; j++)
		{
			pascaltri[i][j] = -1;
		}
	}

	pascaltri[0][0] = 1;
	pascaltri[0][1] = 1;
	pascaltri[1][0] = 1;

	long long n, k;
	long long result = 0;
	
	scanf("%lld %lld", &n, &k);


	result = resultfunc(n, k);

	printf("%lld", result);

} 