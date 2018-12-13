#include<stdio.h>
#include<stdlib.h>	

int main()
{
	int word[10];
	char com[2];
	int i, a,j;
	int result=1;
	int count = 0;
	int check = 0;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a);
		result *= a;
	}
	word[0] = result % 10;
	word[1] = (result /10) %10;
	word[2] = (result /100) % 10;
	word[3] = (result/ 1000) % 10;
	word[4] = (result/10000) % 10;
	word[5] = (result /100000) % 10;
	word[6] = (result/ 1000000) % 10;
	word[7] = (result/ 10000000) % 10;
	word[8] = (result / 100000000) % 10;
	word[9] = (result/ 1000000000) % 10;

	for (i = 9; i >=0; i--)
	{
		if (word[i] != 0)
		{
			check = 1;
		}
		if (word[i] == 0&&check ==1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	count = 0;

	for (j = 1; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (word[i] == j)
			{
				count++;
			}
		}
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}