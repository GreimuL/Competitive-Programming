//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void landcheck(int*** arr, int i, int j, int w, int h)
{
	int land = 0;
	int check = 0;
	int checka;
	int checkb;
	while (check == 0)
	{
		if (i - 1 >= 0 && j - 1 >= 0)
		{
			if (arr[0][i - 1][j - 1] == 1 && arr[1][i - 1][j - 1] == 0)
			{
				check++;
				arr[1][i - 1][j - 1] = 1;
				landcheck(arr, i - 1, j - 1, w, h);
			}
		}
		if (j - 1 >= 0)
		{
			if (arr[0][i][j - 1] == 1 && arr[1][i][j - 1] == 0)
			{
				check++;
				arr[1][i][j - 1] = 1;
				landcheck(arr, i, j - 1, w, h);
			}
		}
		if (i + 1 <= w+1  && j - 1 >= 0)
		{
			if (arr[0][i + 1][j - 1] == 1 && arr[1][i + 1][j - 1] == 0)
			{
				check++;
				arr[1][i + 1][j - 1] = 1;
				landcheck(arr, i + 1, j - 1, w, h);
			}
		}
		if (i - 1 >= 0)
		{
			if (arr[0][i - 1][j] == 1 && arr[1][i - 1][j] == 0)
			{
				check++;
				arr[1][i - 1][j] = 1;
				landcheck(arr, i - 1, j, w, h);
			}
		}
		if (i + 1 <= w +1)
		{
			if (arr[0][i + 1][j] == 1 && arr[1][i + 1][j] == 0)
			{
				check++;
				arr[1][i + 1][j] = 1;
				landcheck(arr, i + 1, j, w, h);
			}
		}
		if (i - 1 >= 0 && j + 1 <= h+1 )
		{
			if (arr[0][i - 1][j + 1] == 1 && arr[1][i - 1][j + 1] == 0)
			{
				check++;
				arr[1][i - 1][j + 1] = 1;
				landcheck(arr, i - 1, j + 1, w, h);
			}
		}
		if (j + 1 <= h +1)
		{
			if (arr[0][i][j + 1] == 1 && arr[1][i][j + 1] == 0)
			{
				check++;
				arr[1][i][j + 1] = 1;
				landcheck(arr, i, j + 1, w, h);
			}
		}
		if (i + 1 <= w +1 && j + 1 <= h+1 )
		{
			if (arr[0][i + 1][j + 1] == 1 && arr[1][i + 1][j + 1] == 0)
			{
				check++;
				arr[1][i + 1][j + 1] = 1;
				landcheck(arr, i + 1, j + 1, w, h);
			}
		}

		break;


	}
}
int main()
{
	int** graph[2];
	int w;
	int h;
	int i;
	int j;
	int land = 0;

	while (1)
	{
		scanf("%d", &w);
		scanf("%d", &h);

		if (w == 0 && h == 0)
		{
			break;
		}
		graph[0] = (int**)malloc(sizeof(int*)*(w + 2));
		graph[1] = (int**)malloc(sizeof(int*)*(w + 2));
		for (i = 0; i < w + 2; i++)
		{
			graph[0][i] = (int*)malloc(sizeof(int)*(h + 2));
			graph[1][i] = (int*)malloc(sizeof(int)*(h + 2));
		}
		for (i = 0; i < w + 2; i++)
		{
			for (j = 0; j < h + 2; j++)
			{
				graph[1][i][j] = 0;
				graph[0][i][j] = 0;
			}
		}

		for (i = 0; i < h + 2; i++)
		{
			graph[1][0][i] = 1;
			graph[1][w + 1][i] = 1;
		}
		for (i = 0; i < w + 2; i++)
		{
			graph[1][i][0] = 1;
			graph[1][i][h + 1] = 1;
		}

		//for (i = 0; i < h + 2; i++)
		//{
		//	for (j = 0; j < w + 2; j++)
		//	{
		//		printf("%d", graph[1][j][i]);
		//	}
		//	printf("\n");
		//}

		for (i = 1; i < h + 1; i++)
		{
			for (j = 1; j < w + 1; j++)
			{
				scanf("%d", &graph[0][j][i]);
			}
		}
		//for (i = 0; i < h + 2; i++)
		//{
		//	for (j = 0; j < w + 2; j++)
		//	{
		//		printf("%d", graph[0][j][i]);
		//	}
		//	printf("\n");
		//}

		for (i = 1; i < w + 1; i++)
		{
			for (j = 1; j < h + 1; j++)
			{
				if (graph[0][i][j] == 1 && graph[1][i][j] == 0)
				{
					graph[1][i][j] = 1;

					if (i > 0)
					{
						landcheck(graph, i, j, w + 2, h + 2);
						land++;
					}
				}

			}
		}
		printf("%d\n", land);
		land = 0;

	}
}