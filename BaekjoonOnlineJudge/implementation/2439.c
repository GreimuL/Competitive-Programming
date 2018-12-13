#include<stdio.h>
int main()
{
	int a,i,j,k,q;
	scanf("%d", &a);
	k = a-1;
	q = 1;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < k; j++)
		{
			printf(" ");
			
		}
		k--;
		for (j = 0; j < q; j++)
		{
			printf("*");
		}
		q++;
		printf("\n");
	}
	return 0;
}