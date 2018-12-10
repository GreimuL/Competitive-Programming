#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int compare(void *first, void *second)
{
	if (*(int*)first < *(int*)second)
	{
		return 1;
	}
	else if (*(int*)first > *(int*)second)
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
	char word[1000001];
	int num[200] = { 0, };
	int checknum[26] = { 0, };
	int i, j;
	char a;
	a = '0';
	while (a != 10)
	{
		a = getchar();
		for (i = 0; i < 26; i++)
		{
			if (a == i + 65)
			{
				num[i]++;
			}
			if (a == i + 97)
			{
				num[i]++;
			}
		}

	}
	for (i = 0; i < 26; i++)
	{
		checknum[i] = num[i];
	}

	qsort(num, 26, sizeof(int), compare);
	if (num[0] == num[1])
	{
		printf("?");
	}
	else
	{
		for (i = 0; i < 26; i++)
		{
			if (num[0] == checknum[i])
			{
				printf("%c", i + 65);
			}
		}
	}
	return 0;
}