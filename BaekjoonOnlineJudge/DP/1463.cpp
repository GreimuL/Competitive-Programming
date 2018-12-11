#include<iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int count;
	cin >> n;
	int *num = new int[n+1];
	for (int i = 0; i < n+1; i++)
	{
		num[i] = 0;
	}
	for (int i = n; i > 1; i--)
	{

		if (i % 2 == 0)
		{
			if (num[i / 2] == 0)
			{
				num[i / 2] = num[i] + 1;
			}
			else if (num[i / 2] != 0 && num[i / 2] > num[i] + 1)
			{
				num[i / 2] = num[i] + 1;
			}
		}
		if (i % 3 == 0)
		{
			if (num[i / 3] == 0)
			{
				num[i / 3] = num[i] + 1;
			}
			else if (num[i / 3] != 0 && num[i / 3] > num[i] + 1)
			{
				num[i / 3] = num[i] + 1;
			}
		}
		if (i -1 >0)
		{
			if (num[i - 1] == 0)
			{
				num[i - 1] = num[i] + 1;
			}
			else if (num[i-1] != 0 && num[i -1] > num[i] + 1)
			{
				num[i-1] = num[i] + 1;
			}
		}

	}
	cout << num[1];
	return 0;
}