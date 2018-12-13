#include<stdio.h>
#include<stdlib.h>

int compare(void *a, void *b)
{
	if (*(int*)a>*(int*)b)
	{
		return 1;
	}
	else if (*(int*)a<*(int*)b)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num;
	int *arr;
	int i;
	scanf("%d", &num);

	arr = (int*)malloc(sizeof(int)*num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, num, sizeof(int), compare);

	for (i = 0; i<num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}