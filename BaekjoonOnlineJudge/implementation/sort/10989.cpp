#include<iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int count[10001] = { 0, };
	int temp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		count[temp]++;
	}
	for (int i = 1; i < 10001; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}
}