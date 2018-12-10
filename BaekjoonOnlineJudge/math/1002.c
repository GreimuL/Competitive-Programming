#include<stdio.h>
#include<math.h>
int main()
{
	int case1;
	int i;
	int x1, y1, r1, x2, y2, r2;
	int distance;
	int result[10000];
	scanf("%d", &case1);
	for (i = 0; i<case1; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		distance = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		if (distance<(r1 + r2)*(r1 + r2)&&distance!=0&&abs(r1-r2)<distance)
		{
			result[i] = 2;
		}
		if (distance == (r1 + r2)*(r1 + r2))
		{
			result[i] = 1;
		}
		if (distance>(r1 + r2)*(r1 + r2))
		{
			result[i] = 0;
		}
		if (distance == (r1 - r2)*(r1 - r2))
		{
			result[i] = 1;
		}
		if (distance < (r1 - r2)*(r1 - r2) && distance != 0)
		{
			result[i] = 0;
		}
		if (distance == 0&&r1!=r2)
		{
			result[i] = 0;
		}
		if (distance == 0 && r1 == r2)
		{
			result[i] = -1;
		}

	}
	for (i = 0; i<case1; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;



}