#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *word;
	int length;
	int m,i,j;
	char n[5];
	int input;
	j = 0;
	scanf("%s %d", &n, &m);
	if (strlen(n) == 1)
	{
		input = n[0] - 48;
	}
	if (strlen(n) == 2)
	{
		input = (n[0] - 48) * 10 + (n[1] - 48);
	}
	if (strlen(n) == 3)
	{
		input = (n[0] - 48) * 100 + (n[1] - 48) * 10 + (n[2] - 48);
	}
	if (strlen(n) == 4)
	{
		input = (n[0] - 48) * 1000 + (n[1] - 48) * 100 + (n[2] - 48)*10+(n[3]-48);
	}
	word = (char*)malloc(sizeof(char)*m);
	for (i = 0;i < m;i++)
	{
		word[i] = n[j];
		j++;
		if(j>strlen(n)-1)
		{
			j = 0;
		}
		
	}
	if (input*strlen(n) < m)
	{
		for (i = 0;i < strlen(n)*input;i++)
		{
			printf("%c", word[i]);
		}
	}
	else
	{
		for (i = 0;i < m;i++)
		{
			printf("%c", word[i]);
		}
	}
}