#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, i,j, high, changer;
	int score[1000];
	float sum = 0;
	float res[1000];
	scanf("%d", &a);
	for (i = 0; i<a; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i<a; i++)
	{
		for (j = i; j<a-1; j++)
		{
			if (score[j]>score[j + 1])
			{
				changer = score[j];
				score[j] = score[j + 1];
				score[j + 1] = changer;
			}
		}
	}
	
	high = score[a-1];
	for (i = 0; i<a; i++)
	{
		res[i] = score[i] / (float)high * 100;

	}
	
	for (i = 0; i<a; i++)
	{
		sum += res[i];
	}
	printf("%.2f", sum / (float)a);
	return 0;
}

