#include<iostream>

using namespace std;

long long fi[120];

long long likefibo(long long n)
{
	if (n == 1)
	{
		fi[n] = 1;
		return fi[n];
	}
	if (n == 2)
	{
		fi[n] = 1;
		return fi[n];
	}
	if (n == 3)
	{
		fi[n] = 1;
		return fi[n];
	}

	if (fi[n - 1] == 0&&fi[n-3] ==0)
	{
		fi[n] = likefibo(n - 1) + likefibo(n - 3);
	}
	else if (fi[n - 1] == 0 && fi[n - 3] != 0)
	{
		fi[n] = likefibo(n - 1) + fi[n - 3];
	}
	else if (fi[n - 1] != 0 && fi[n - 3] == 0)
	{
		fi[n] = fi[n-1]+ likefibo(n - 3);
	}
	else
	{
		fi[n] = fi[n - 1] + fi[n - 3];
	}
	return fi[n];
	
}

int main()
{
	long long n;

	
		cin >> n;

		likefibo(n);

		cout << fi[n]<<endl;
	
	return 0;
}