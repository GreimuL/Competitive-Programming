#include<stdio.h>
#include<string.h>
int main()
{
	char word[101];
	int a,i,j;
	int b[27];
	int c[27];
	char alpha[27];
	for (i = 0; i < 26; i++)
	{
		b[i] = 0;
	}
	for (i = 0; i < 26; i++)
	{
		c[i] = 0;
	}
	scanf("%s", word);
	a = strlen(word);
	j = 0;
	for (i = 97; i < 123; i++)
	{
		alpha[j] = i;
		j++;
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (word[i] == alpha[j] && b[j] == 0)
			{
				c[j] = i;
				b[j] = 1;
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (b[i] == 1)
		{
			printf("%d ", c[i]);
		}
		if (b[i] == 0)
		{
			printf("-1 ");
		}
	}
	return 0;
}