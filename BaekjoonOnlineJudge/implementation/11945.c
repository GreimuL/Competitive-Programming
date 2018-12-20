#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, m;
	char shape[11][11];
	int i, j;

	scanf("%d %d", &n, &m);

	for (i = 0;i < n;i++)
	{
		scanf("%s", shape[i]);
	}
	for (i = 0;i < n;i++)
	{
		for (j = m-1;j >= 0;j--)
		{
			printf("%c", shape[i][j]);
		}
		printf("\n");
	}
}