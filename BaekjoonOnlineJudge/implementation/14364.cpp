#include<iostream>

using namespace std;
int n;
int t;
int check = 0;
int sum = 0;
int p[30];
int main()
{
	
	cin >> t;
	for (int test = 0; test < t; test++)
	{

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> p[i];
		}

		cout << "Case #" << test + 1 << ": ";

		for (int su = 0; su < n; su++)
		{
			sum += p[su];
		}
		while (sum > 0)
		{
			for (int pe = 0; pe < n; pe++)
			{
				if (sum == 2)
				{
					for (int re = 0; re < n; re++)
					{
						if (p[re] == 1)
						{
							p[re]--;
							cout << char('A' + re);
						}
					}
					sum -= 2;
					break;
				}
				if (p[pe] >= (sum / 2)&&p[pe]>1)
				{
					p[pe]--;
					sum--;
					cout << char('A' + pe);
					check++;
				}
				if (check == 2)
				{
					cout << " ";
					break;
				}

			}
			if (check == 1)
			{
				cout << " ";
			}
			if (check == 0)
			{
				for (int re = 0; re < n; re++)
				{
					if (p[re] > 0)
					{
						sum--;
						p[re]--;
						cout << char('A' + re)<<" ";
						break;
					}

				}
			}
			check = 0;

		}
		check = 0;
		sum = 0;
		cout << endl;

	}


}