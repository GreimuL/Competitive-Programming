#include<iostream>
#include<algorithm>
using namespace std;

int squ(int a, int b)
{
	int temp = 1;
	for (int i = 0; i < b; i++)
	{
		temp *= a;
	}
	return temp;
}

int main()
{
	int realpo;
	int n;
	int tempn = 0;
	int num[12];
	int po = 0;
	int i=0;
	cin >> n;
	while (tempn != n)
	{
		
		tempn = n % squ(10, po);
		po++;
	}
	po--;
	realpo = po;
	while (po>0)
	{
		
		num[i] = n / squ(10, po - 1);


		n %= squ(10,po-1);
		po--;
		i++;
		
	}

	sort(num, num + realpo);

	for (int i = realpo-1; i>=0; i--)
	{
		cout << num[i];
	}
}