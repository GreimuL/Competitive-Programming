#include<stdio.h>
#include<stdlib.h>


int compare(const void * a, const void *b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
	{
		return -1;
	}
	if (num1 > num2)
	{
		return 1;
	}

	return 0;
}

int main()
{
	int n, m, i, j;
	int *number;
	int check;
	int mid, left, right;
	scanf("%d", &n);

	number = (int*)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
	}

	qsort(number, n, sizeof(int), compare);
	scanf("%d", &m);

	for (i = 0; i < m; i++)
	{
		scanf("%d", &check);

		left = 0;
		right = n - 1;
		mid = (right + left) / 2;

		while (left < right)
		{
			if (number[mid] > check)
			{
				right = mid-1;
			}
			else if (number[mid] < check)
			{
				left = mid+1;
			}
			else if (number[mid] == check)
			{
				break;
			}

			mid = (left + right) / 2;
		}
		if (number[mid] == check)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	return 0;
}