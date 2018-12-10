#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000001];
	int count = 0;
	int i;
	scanf("%[^\n]s", a);
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' '&&a[i+1]!=' ')
		{
			if( a[i + 1] != '\0')
			count++;
		}
	}
	if (a[0] == ' ')
	{
		printf("%d", count);
	}
	else
	{
		printf("%d", count + 1);
	}
	return 0;
}