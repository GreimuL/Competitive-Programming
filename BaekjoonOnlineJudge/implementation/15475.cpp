#include<iostream>

using namespace std;

int main()
{
	int n;
	int a[1000];
	int highlength = 0;
	int length = 0;
	int check = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{

		if (a[i] == 1)
		{
			length++;
			if (highlength < length)
			{
				highlength = length;
			}
		}
		if (a[i] == 0)
		{
			if (highlength < length)
			{
				highlength = length;
			}
			length = 0;
		}
	}
	cout << highlength+1 << endl;
}