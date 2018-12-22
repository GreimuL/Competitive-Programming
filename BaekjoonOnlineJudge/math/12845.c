#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int* L;
	int i,j;
	int changer;
	int result=0;
	scanf("%d", &n);

	L = (int*)malloc(sizeof(int)*n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &L[i]);
	}

	for (i = 0;i < n-1;i++)
	{
		for (j = i;j < n-1;j++)
		{
			if (L[j] > L[j + 1])
			{
				changer = L[j];
				L[j] = L[j + 1];
				L[j + 1] = changer;
			}
		}
	}
	for (i = 0;i < n-1;i++)
	{
		result += L[n - 1] + L[i];
	}
	printf("%d", result);
}
