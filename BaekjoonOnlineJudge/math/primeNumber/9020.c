#include<stdio.h>
int main()
{
	int i, j, k;
	int b = 0;
	int d = 0;
	int num = 0;
	int res[10000];
	int cal = 0;
	int chec[10000];
	int chec2[10000];
	int minus = 10000;
	int prime[1230];
	int primecount = 0;
	int right =1228;
	int left =0;
	int whilech = 1;


	prime[0] = 2;
	for (i = 0; i <10000; i++)
	{
		b = i + 1;
		if (b % 2 != 0 || b == 2)
		{
			for (j = 0; j < primecount; j++)
			{
				if (b%prime[j] == 0 && b != j)
				{
					d += 1;
					break;
				}
			}
			if (d == 0 && b != 1)
			{
				prime[cal] = b;
				primecount++;
				cal++;
			}
		}
		d = 0;
	}
	cal = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &res[i]);
	}
	for (i = 0; i < num; i++)
	{
		while (whilech)
		{
			if (prime[left] + prime[right] > res[i])
			{
				right--;
			}
			if (prime[left] + prime[right] < res[i])
			{
				left++;
			}
			if (prime[left] + prime[right] == res[i])
			{
				chec[cal] = prime[left];
				chec2[cal] = prime[right];
				cal++;
				left++;
			}
			if (right <= left)
			{
				whilech = 0;
			}

		}
		for (j = 0; j < cal; j++)
		{
			if (minus > chec2[j] - chec[j]&& chec2[j] - chec[j]>=0)
			{
				minus = chec2[j] - chec[j];
			}
		}
		
		for (j = 0; j <cal; j++)
		{
			if (minus == chec2[j] - chec[j])
			{
				printf("%d %d\n", chec[j], chec2[j]);
			}
		}
		minus = 10000;
		cal = 0;
		whilech = 1;
		left = 0;
		right = 1227;
	}
	return 0;
}