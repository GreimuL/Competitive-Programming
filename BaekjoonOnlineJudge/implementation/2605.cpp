
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace std;
typedef struct seq
{
	struct NODE *next;

	int data=0;
}seq;
int main()
{
	int changer;
	int changer2;
	int *num;
	int st;
	int *stnum;
	scanf("%d", &st);

	num = (int*)malloc(sizeof(int)*st);

	for (int i = 0; i < st; i++)
	{
		scanf("%d", &num[i]);
	}
	stnum = (int*)malloc(sizeof(int)*st);

	for (int i = 0; i < st; i++)
	{
		stnum[i] = i + 1;
	}

	for (int i = 0; i < st; i++)
	{	
		if (i != 0)
		{
			changer = stnum[i];

			for (int j = i - 1; j >= num[i]; j--)
			{
				stnum[j + 1] = stnum[j];
			}

			stnum[num[i]] = changer;
		}
	}
	for (int i = st-1; i >= 0; i--)
	{
		printf("%d ", stnum[i]);
	}

}
