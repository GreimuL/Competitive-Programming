#include<iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int c1[41];
	int c0[41];
	int num;
	int n;
	c1[0] = 0;
	c0[0] = 1;

	c1[1] = 1;
	c0[1] = 0;

	for (int i = 2; i < 41; i++)
	{
		c1[i] = c1[i - 1] + c1[i - 2];
		c0[i] = c0[i - 1] + c0[i - 2];
	}
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> n;
		cout << c0[n] <<' '<< c1[n] << '\n';
	}
	return 0;
}