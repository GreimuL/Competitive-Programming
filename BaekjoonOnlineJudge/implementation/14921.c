#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	int a[100000];
	int b,left,right;
	b = -2147483647;
	scanf("%d", &n);
	left = 0;
	right = n - 1;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n-1; i++)
	{
		if (abs(b) >= abs(a[left] + a[right]))
		{
			b = a[left] + a[right];
		}
        if (a[left] + a[right] == 0)
		{
			b = 0;
			break;
		}
		if (a[left] + a[right] <0)
		{
			left++;
		}
		else if (a[left] + a[right] > 0)
		{
			right--;
		}
		
	}
	printf("%d", b);
}