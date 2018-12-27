#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long long T, i, num, j;
	long long* result;
	long long sit[16];
	long long multi = 15;
	long long helper;
	long long judge = 0;
	scanf("%lld", &T);
	result = (long long*)malloc(sizeof(long long)*T);
	for (i = 0; i < T; i++)
	{
		scanf("%lld", &num);

		for (j = 0; j < 16; j++)
		{
			sit[j] = num / (long long)pow(10, multi);

			num -= ((num / (long long)pow(10, multi))*(long long)pow(10, multi));
			multi--;
		}
		for (j = 0; j < 16; j++)
		{
			if (j % 2 == 0)
			{
				sit[j] *= 2;
				if (sit[j] >= 10)
				{
					helper = sit[j] / 10;
					sit[j] -= helper * 10;
					sit[j] += helper;
				}
			}
		}
		for (j = 0; j < 16; j++)
		{
			judge += sit[j];
		}
		if (judge % 10 == 0)
		{
			result[i] = 0;
		}
		else
		{
			result[i] = 1;
		}
		judge = 0;
		multi = 15;
	}

	for (i = 0; i < T; i++)
	{
		if (result[i] == 0)
		{
			printf("T\n");
		}

		if (result[i] == 1)
		{
			printf("F\n");
		}
	}
}