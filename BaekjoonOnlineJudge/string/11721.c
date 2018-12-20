#include<stdio.h>
int main()
{
	int i;
	char n[100];
	scanf("%s", n);
	for (i = 0; i < 100; i++)
	{
		if (n[i] == NULL)
		{
			break;
		}
		printf("%c", n[i]);
		if (i==9||i==19 || i == 29 || i == 39 || i == 49 || i == 59 || i == 69 || i == 79 || i == 89 || i == 99)
		{
			printf("\n");
		}
		
	}
	return 0;
}