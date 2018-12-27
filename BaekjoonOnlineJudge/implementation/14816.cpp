#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(void)
{
	int t, n, p;
	int *g;
	int even = 0;
	int odd = 0;
	int onecheck = 0;
	int twocheck = 0;
	int threecheck = 0;
	
	int numone = 0;
	int numtwo = 0;

	bool check0 = true;
	bool check1 = true;
	bool check2 = true;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &n, &p);
		
		g = (int*)malloc(sizeof(int)*n);


		for (int j = 0; j < n; j++)
		{
			scanf("%d", &g[j]);
		}

		if (p == 2)
		{
			for (int qw = 0; qw < n; qw++)
			{
				if (g[qw] % 2 == 0)
				{
					even++;
				}
				else
				{
					odd++;
				}
			}

			
			printf("Case #%d: ", i + 1);
			printf("%d\n", even + (odd+1)/2);
		}
		else if (p == 3)
		{
			for (int qw = 0; qw < n; qw++)
			{
				if (g[qw] % 3 == 0)
				{
					even++;
				}
				else
				{
					if (g[qw] % 3 == 1)
					{
						onecheck++;


					}
					else if (g[qw] % 3 == 2)
					{
						twocheck++;

					}
				}
			}
			int x;
			if (onecheck > twocheck)
			{
				x = twocheck;
				twocheck -= x;
				onecheck -= x;

				printf("Case #%d: ", i + 1);
				printf("%d\n", even +x+ (onecheck + 2) / 3);

			}
			else if (onecheck < twocheck)
			{
				x = onecheck;
				twocheck -= x;
				onecheck -= x;
				printf("Case #%d: ", i + 1);
				printf("%d\n", even+x + (twocheck + 2) / 3);
			}
			else
			{
				x = onecheck;
				printf("Case #%d: ", i + 1);
				printf("%d\n", even+x );
			}

		}
		else if (p == 4)
		{
			for (int qw = 0; qw < n; qw++)
			{
				if (g[qw] % 4 == 0)
				{
					even++;
				}
				else
				{
					if (g[qw] % 4 == 1)
					{
						onecheck++;
					}
					else if (g[qw] % 4 == 2)
					{
						twocheck++;
					}
					else if (g[qw] % 4 == 3)
					{
						threecheck++;
					}
				}
			}
			int x;
			if (onecheck > threecheck)
			{
				x = threecheck;
			}
			else
			{
				x = onecheck;
			}
			onecheck -= x;
			threecheck -= x;

			x += twocheck / 2;

			twocheck = twocheck % 2;

			if (twocheck > 0 && onecheck >= 2)
			{
				x++;
				onecheck -= 2;
				twocheck = 0;
			}
			if (twocheck > 0 && threecheck >= 2)
			{
				x++;
				threecheck -= 2;
				twocheck = 0;
			}
			if (twocheck ==1)
			{
				x++;
			}
			else
			{
				x += ((onecheck + 3) / 4) + ((threecheck + 3) / 4);
			}


			printf("Case #%d: ", i + 1);
			printf("%d\n", even + x);
		}
		check0 = true;
		check1 = true;
		check2 = true;

		onecheck = 0;
		twocheck = 0;
		threecheck = 0;

		numone = 0;
		numtwo = 0;
		even = 0;
		odd = 0;

	}

	return 0;
}