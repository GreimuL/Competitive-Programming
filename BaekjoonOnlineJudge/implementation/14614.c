#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long a, b;
	char c[100];
	int d;
	int e;
	scanf("%lld %lld %s", &a, &b,&c);
	e=strlen(c);
	d = atoi(&c[e-1]);
	if (d % 2 != 0)
	{
		a = a^b;
	}

	printf("%lld", a);
	return 0;
}