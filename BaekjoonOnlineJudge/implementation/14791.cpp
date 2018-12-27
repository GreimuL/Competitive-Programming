#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

void minusone(long long a[], long long length)
{
	a[0]--;
	for (int i = 0; i < length; i++)
	{
		if (a[i] == -1)
		{
			a[i] = 9;
			a[i + 1]--;
		}
	}
}

int main()
{
	long long number[19] = { 0, };
	long long t;
	long long n;
	long long tempn;
	long long pos;
	long long q;
	long long temp;
	int count = 0;
	long long length = 0;
	bool check = true;
	scanf("%lld", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%lld", &n);
		q = 18;
		tempn = n;
		while (tempn>0)
		{
			temp = pow(10, q);

			pos = tempn / temp;
			tempn = tempn % (temp);

			number[q] = pos;
			q--;
			if (check == true && pos != 0)
			{
				length = q + 2;
				check = false;
			}
		}
		check = true;
		for(int bb=0;bb<length-1;bb++)
		{
		if (number[bb] <= -1)
		{
			number[bb] = 10 + number[bb];
			number[bb+1]--;
		}
		while (1)
		{

			if (number[bb] < number[bb+1] && number[bb] != 0)
			{
				number[bb]--;
			}
			if (number[bb] >= number[bb+1])
			{
				break;
			}
			if (number[bb] < number[bb+1] && number[bb] == 0)
			{
				number[bb] = 9;
				number[bb + 1]--;
				break;
				
			}

		}
		}
		for (int qwer = length - 2; qwer >= 0; qwer--)
		{
			if (number[qwer] < number[qwer + 1] && number[qwer + 1] != 9)
			{
				number[qwer] = 9;
				number[qwer + 1]--;
			}
			else if (number[qwer + 1] == 9)
			{
				number[qwer] = 9;
			}

		}
		printf("Case #%d: ", i + 1);
		int check2 = true;
		int count2 = 0;
		for (int j = length - 1; j >= 0; j--)
		{
			for (int v = j; v >= length - 1; v--)
			{
				if (number[v] != 0)
				{
					count2++;
				}
			}
			if (count2 == 0)
			{
				length = j;
			}
		}
		for (int j = length - 1; j >= 0; j--)
		{
			printf("%lld", number[j]);

		}
		printf("\n");
		check = true;
		for (int ha = 0; ha < 19; ha++)
		{
			number[ha] = 0;
		}
		count2 = 0;
		count = 0;
	}


}