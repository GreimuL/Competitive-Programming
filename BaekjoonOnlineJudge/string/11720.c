#include<stdio.h>
int main()
{
	int a, i;
	int sum;
	char n[100];
	int result;
	sum = 0;
	
	result=0;
	scanf("%d", &a);
	scanf("%s", n);
	for (i = 0; i < a; i++)
	{
		sum += (int)n[i] - '0';
	}
	printf("%d",sum);
	return 0;
}