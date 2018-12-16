#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>

int num[500005];
int lefts;
int rights;
using namespace std;
void rightbinary(int left, int right, int num[], int card, int n)
{
	int mid;
	int find;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (num[mid] == card)
		{
			find = mid;
			rights = mid;
			rightbinary(find+1, n - 1, num, card,n);
			
			break;
		}
		if (num[mid] >card)
		{
			right = mid - 1;
		}
		else if (num[mid] < card)
		{
			left = mid + 1;
		}

	}
}
void leftbinary(int left, int right, int *num, int card, int n)
{
	int mid;
	int find;
	while (left <= right)
	{
		mid = (left + right) / 2;

		if (num[mid] == card)
		{
			find = mid;
			lefts = mid;
			leftbinary(0, find-1, num, card, n);
			
			break;
		}
		if (num[mid] >card)
		{
			right = mid - 1;
		}
		else if (num[mid] < card)
		{
			left = mid + 1;
		}

	}
}
int main()
{
	int n, m;
	int card;
	int left, right, mid, find;
	int count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	scanf("%d", &m);


	sort(num, num + n);

	left = 0;
	right = n - 1;
	find = -1;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &card);

		count = 0;
		find = -1;
		left = 0;
		right = n - 1;

		while (left <= right)
		{
			mid = (left + right) / 2;

			if (num[mid] == card)
			{
				find = mid;
				break;
			}
			if (num[mid] >card)
			{
				right = mid - 1;
			}
			else if (num[mid] < card)
			{
				left = mid + 1;
			}

		}
		if (find == -1)
		{
			printf("0 ");
		}
		if(find != -1)
		{
			left = mid;
			right = n - 1;

			rightbinary(find, n - 1, num, card, n);
			leftbinary(0, find, num, card, n);
			count = rights - lefts+1;
			printf("%d ", count);
		}
	}
    return 0;
}