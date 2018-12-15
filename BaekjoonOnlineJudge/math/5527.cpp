
#include<iostream>
#include<cstdio>
#include<cstdlib>

int main()
{
	int num;
	int *templight;
	int ch = 0;
	int check = 0;
	int chlength = 0;

	scanf("%d", &num);

	templight = (int*)malloc(sizeof(int)*num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &templight[i]);
	}
	for (int i = 0; i < num; i++)
	{
		for (int k = i; k < num; k++)
		{
			if (k == i)
			{

			}
			else
			{
				if (templight[k] == templight[k - 1])
				{
					if (ch == 2)
					{
						break;
					}
					ch++;

				}

			}
			check++;

		}
		if (chlength < check)
		{
			chlength = check;
		}
		ch = 0;
		check = 0;
	}


	printf("%d", chlength);

	return 0;

}