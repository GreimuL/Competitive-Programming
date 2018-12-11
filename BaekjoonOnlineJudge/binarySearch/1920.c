#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void * b)
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
	int num;
	int *a;
	int chnum;
	int *ch;
	int mid;
	int left;
	int right;
	int changer;

	scanf("%d", &num);

	a = (int*)malloc(sizeof(int)*num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &chnum);
	ch = (int*)malloc(sizeof(int)*chnum);

	for (int i = 0; i < chnum; i++)
	{
		scanf("%d", &ch[i]);
	}
	left = 0;
	right = num-1;
	mid = num / 2;
	
	qsort(a, num, sizeof(int), compare);

	for (int i = 0; i < chnum; i++)
	{
		while (a[left]<a[right])
		{
			if (a[mid] < ch[i])
			{
				left = mid + 1;
			}
			else if (a[mid] > ch[i])
			{
				right = mid - 1;
			}
			else if (a[mid] == ch[i])
			{
				break;
			}
			mid = (left + right) / 2;
		}
		if (a[mid] == ch[i])
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
		left = 0;
		right = num - 1;
		mid = (left + right) / 2;
	}
	return 0;
}