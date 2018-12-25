#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, m,i,j;
	int x, y;
	int count = 0;
	int* line;
	scanf("%d", &n);
	scanf("%d", &m);

	line = (int*)malloc(sizeof(int)*(n - 1));
	for (i = 0;i < n - 1;i++)
	{
		line[i] = 1;
	}
	for (i = 0;i < m;i++)
	{
		scanf("%d %d", &x, &y);
		for (j = x - 1;j <y-1;j++)
		{
			line[j] = 0;
		}
	}
	for (i = 0;i < n - 1;i++)
	{
		if (line[i] == 1)
		{
			count++;
		}
	}
	printf("%d", count + 1);
}