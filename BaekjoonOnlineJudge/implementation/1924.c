#include<stdio.h>
int main()
{
	int x, y, i;
	int date[12][31];
	int j = 0;
	for (i = 0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[0][i] = j;
		j++;
	}
	for (i = 0; i < 28; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[1][i] = j;
		j++;
	}
	for (i = 0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[2][i] = j;
		j++;
	}
	for (i = 0; i < 30; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[3][i] = j;
		j++;
	}
	for (i = 0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[4][i] = j;
		j++;
	}
	for (i = 0; i < 30; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[5][i] = j;
		j++;
	}
	for (i = 0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[6][i] = j;
		j++;
	}
	for (i = 0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[7][i] = j;
		j++;
	}
	for (i = 0; i < 30; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[8][i] = j;
		j++;
	}
	for (i = 0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[9][i] = j;
		j++;
	}
	for (i = 0; i < 30; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[10][i] = j;
		j++;
	}
	for (i =0; i < 31; i++)
	{
		if (j == 7)
		{
			j = 0;
		}
		date[11][i] = j;
		j++;
	}
	scanf("%d %d", &x, &y);
	switch (date[x - 1][y - 1])
	{
		case 0:
			printf("MON");
			break;
		case 1:
			printf("TUE");
			break;
		case 2:
			printf("WED");
			break;
		case 3:
			printf("THU");
			break;
		case 4:
			printf("FRI");
			break;
		case 5:
			printf("SAT");
			break;
		case 6:
			printf("SUN");
			break;
	}

	return 0;
}
