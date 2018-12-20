#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int s;
	int m;
	int* t;
	int* t1;
	int remain;
	int i;
	int* count;
	int number=-1;
	scanf("%d", &n);
	scanf("%d", &s);
	scanf("%d", &m);

	remain = n - s;	
	t = (int*)malloc(sizeof(int)*m);
	t1 = (int*)malloc(sizeof(int)*m);
	count = (int*)malloc(sizeof(int)*m);
	for (i = 0;i < m;i++)
	{
		scanf("%d", &t[i]);
	}
	for (i = 0;i < m;i++)
	{
		t1[i] = t[i];
	}
	for (i = 0;i < m;i++)
	{
		remain--;
		count[i] = remain;
	}
	while (remain>0)
	{
		for (i = 0;i < m;i++)
		{
			t[i] -= 1;
		}
		for (i = 0;i < m;i++)
		{
			if (t[i] == 0)
			{
				remain--;
				count[i] = remain;		
				t[i] = t1[i];
			}
		}
	}
	for (i = 0;i < m;i++)
	{
		if (count[i] == 0)
		{
			number = i+1;
		}
	}
	printf("%d", number);
	
}
