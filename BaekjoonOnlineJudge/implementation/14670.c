#include<stdio.h>
#include<stdlib.h>

int main()
{
	int meditype;
	int *medief;
	int *mediname;
	int painnum;
	int paintype;
	int *pain;
	int i,j,k,a;
	int miss = 0;
	int count = 0;
	int checknum[100];
	int c = 0;
	scanf("%d", &meditype);

	medief = (int*)malloc(sizeof(int)*meditype);
	mediname = (int*)malloc(sizeof(int)*meditype);

	for (i = 0; i < meditype; i++)
	{
		scanf("%d %d", &medief[i], &mediname[i]);
	}

	scanf("%d", &painnum);

	for (i = 0; i < painnum; i++)
	{
		scanf("%d", &paintype);
		pain = (int*)malloc(sizeof(int)*paintype);
		for (j = 0; j < paintype; j++)
		{
			scanf("%d", &pain[j]);
		}
		for (k = 0; k < paintype; k++)
		{
			for (a = 0; a < meditype; a++)
			{
				if (pain[k] == medief[a])
				{
					count++;
					checknum[c] = mediname[a];
					c++;
				}
				
			}
		}
		if (count == paintype)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d ", checknum[j]);
			}
		}
		if (count != paintype)
		{
			printf("YOU DIED\n");
		}
		else
		{
			printf("\n");
		}
		count = 0;
		c = 0;

	}

}