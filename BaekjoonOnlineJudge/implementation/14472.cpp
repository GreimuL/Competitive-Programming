#include<iostream>

using namespace std;

int main()
{
	int n, m, d;
	char change;
	int a[100][100];
	int count = 0;
	int tempcount = 0;

	cin >> n >> m >> d;

	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			cin >> change;

			if (change == '.')
			{
				a[i][j] = 0;
			}
			else if (change == '#')
			{
				a[i][j] = 1;
			}
		}
	}
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i <= m-d; i++)
		{
			
				for (int j = i; j < i + d; j++)
				{
					if (a[k][j] != 1)
					{
						tempcount++;
					}
					else
					{
						tempcount = 0;
					}
				}
	
				if (tempcount == d)
				{
					count++;
				}
			
			tempcount = 0;
		}
	}
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i <= n-d; i++)
		{
			
				for (int j = i; j < i + d; j++)
				{
					if (a[j][k] != 1)
					{
						tempcount++;
					}
					else
					{
						tempcount = 0;
					}
				}
				if (tempcount == d)
				{
					count++;
				}
			
			tempcount = 0;
		}
	}
	cout << count << endl;

}