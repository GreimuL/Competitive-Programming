#include<stdio.h>
int main()
{
	int a, i, j;
	int count;
	int seq;
	int sum[100000];
	char word[81];
	count = 0;
	seq = 1;
	scanf("%d", &a);
	for (i = 0; i<a; i++)
	{
		scanf("%s", &word);
		for (j = 0; j<81; j++)
		{
			if (word[j] == NULL)
			{
				break;
			}
			if (word[j] == 'O')
			{
				count += seq;
				seq++;
			}

			if (word[j] == 'X')
			{
				seq = 1;
			}


		}
		sum[i] = count;
		count = 0;
		seq = 1;
	}
	for (i = 0; i<a; i++)
	{
		printf("%d\n", sum[i]);
	}
	return 0;
}