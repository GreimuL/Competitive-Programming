#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n, i,j;
	int count = 0;
	int stack[10000];
	int push;
	char order[6];
	scanf("%d", &n);

	for (i = 0;i < n;i++)
	{
		scanf("%s", order);
		if (strcmp(order, "push") == 0)
		{
			scanf("%d", &push);
			count++;
			stack[count] = push;
		}
		if (strcmp(order, "pop") == 0)
		{
			if (count == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[1]);
				stack[1] = -1;
				for (j = 0;j < count;j++)
				{
					stack[j] = stack[j + 1];
				}
			}
			if (count > 0)
			{
				count--;
			}


		}
		if (strcmp(order, "size") == 0)
		{
			printf("%d\n", count);
		}
		if (strcmp(order, "empty") == 0)
		{
			if (count == 0)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		if (strcmp(order, "front") == 0)
		{
			if (count == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[1]);
			}
		}
		if (strcmp(order, "back") == 0)
		{
			if (count == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[count]);
			}
		}
	}
	return 0;
}