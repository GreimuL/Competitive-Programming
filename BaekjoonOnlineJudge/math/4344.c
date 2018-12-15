#include<stdio.h>
int main()
{
	int testcase, number, i, j;
	int num[1000];
	int score[100][100];
	float avg[1000];
	int sum;
	int count;
	float ratio[1000];
	sum = 0;
	count = 0;
	scanf("%d", &testcase);
	for (i = 0; i<testcase; i++)
	{
		scanf("%d", &num[i]);
		for (j = 0; j<num[i]; j++)
		{
			scanf("%d", &score[i][j]);
			sum += score[i][j];
		}
		avg[i] = (float)sum / (float)num[i];
		for (j = 0; j<num[i]; j++)
		{
			if (score[i][j]>avg[i])
			{
				count += 1;
			}
		}
		ratio[i] = (float)count / (float)num[i];
		sum = 0;
		count = 0;
	}
	for (i = 0; i<testcase; i++)
	{
		printf("%.3f%\n", 100*ratio[i]);
	}
	return 0;
}

