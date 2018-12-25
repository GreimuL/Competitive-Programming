#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	int* s;
	int* c;
	int* l;
	int high = 0;
	int hi[3] = {0};

	scanf("%d", &n);
	
	s = (int*)malloc(sizeof(int)*n);
	c = (int*)malloc(sizeof(int)*n);
	l = (int*)malloc(sizeof(int)*n);

	for (i = 0;i < n;i++)
	{
		scanf("%d %d %d", &s[i], &c[i], &l[i]);
	}

	for (i = 0;i < n;i++)
	{
		if (hi[0] < s[i])
		{
			high = i + 1;
			hi[0] = s[i];
			hi[1] = c[i];
			hi[2] = l[i];
		}
		if (hi[0] == s[i])
		{
			if (hi[1] > c[i])
			{
				high = i + 1;
				hi[0] = s[i];
				hi[1] = c[i];
				hi[2] = l[i];
			}
			if (hi[1] == c[i])
			{
				if (hi[2] > l[i])
				{
					high = i + 1;
					hi[0] = s[i];
					hi[1] = c[i];
					hi[2] = l[i];
				}
			}
		}
	}
	printf("%d", high);
}