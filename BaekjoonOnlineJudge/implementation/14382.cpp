#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int test;
	int num,temp,tempnum;
	int count[10] = { 0, };
	int mult = 2;
	int fnum;

	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		scanf("%d", &num);
		fnum = num;
		if (num == 0)
		{
			printf("Case #");
			printf("%d", i+1);
			printf(": INSOMNIA\n");
		}
		else
		{
			
			while (count[0] == 0 || count[1] == 0||count[2] == 0 || count[3] == 0 || count[4] == 0 || count[5] == 0 || count[6] == 0 || count[7] == 0 || count[8] == 0 || count[9] == 0)
			{
				tempnum = num;
				while (tempnum != 0)
				{
					temp = tempnum % 10;
					tempnum = tempnum / 10;
					for (int j = 0; j < 10; j++)
					{
						if (temp == j)
						{
							count[j]++;
						}
					}

				}
				num = fnum * mult;
				mult++;
			}
			printf("Case #");
			printf("%d", i + 1);
			printf(": %d\n", fnum*(mult-2));

			for (int j = 0; j < 10; j++)
			{
				count[j] = 0;
			}
			mult = 2;
		}
	}
	return 0;
}