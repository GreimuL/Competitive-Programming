#include<stdio.h>
int main()
{
	int a,i,j,k,q;
	scanf("%d", &a);
	k = a;
	q = 1;
	for (i = 0; i < a; i++)
	{
		for (j = 1; j < q; j++)
		{
			printf(" ");
		}
		q++;
		for (j = 0; j < k; j++)
		{
			printf("*");
			
		}
		k--;

		printf("\n");
	}
	return 0;
}
