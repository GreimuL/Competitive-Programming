#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i;
	int* c;
	int* k;
	int result = 0;
	 
	scanf("%d", &n);

	c = (int*)malloc(sizeof(int)*n);
	k = (int*)malloc(sizeof(int)*n);

	for (i = 0;i < n;i++)
	{
		scanf("%d %d", &c[i], &k[i]);
	}
	for (i = 0;i < n;i++)
	{
		c[i] *= k[i];
		k[i]--;
	}
	for (i = 0;i < n;i++)
	{
		result += c[i];
	}
	printf("%d", result);
}