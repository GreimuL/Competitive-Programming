#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

int main()
{
	int len;
	int t;
	char str[101];
	int cout = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%s", str);

		len = strlen(str);

		for (int j = 0; j < len; j++)
		{
			if (j == 0)
			{
				cout++;
			}
			else if (str[j] != str[j - 1])
			{
				cout++;
			}
		}

		if (str[len - 1] == '+')
		{
			cout--;
		}

		printf("Case #%d: %d\n", i + 1, cout);
		cout = 0;
	}
	return 0;
}