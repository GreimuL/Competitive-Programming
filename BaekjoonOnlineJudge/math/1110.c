#include<stdio.h>
int main()
{
	int a[1000];
	int b;
	int i;
	b = 0;
	scanf("%d", &a[0]);
	for (i = 0; i<999; i++)
	{
		if (((a[i] - (a[i] % 10)) / 10) + a[i] % 10 >= 10)
		{
			a[i + 1] = (a[i] % 10)*10 + ((((a[i] - (a[i] % 10)) / 10) + a[i] % 10) % 10);
		}
		else
		{
			a[i + 1] = (a[i] % 10)*10 + (((a[i] - (a[i] % 10)) / 10) + a[i] % 10);
		}
		b++;
		if (a[i + 1] == a[0])
		{
			printf("%d", b);
			break;
		}
	}
	return 0;


}

