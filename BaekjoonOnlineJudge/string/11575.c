#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//E(x) = (Ax+B) mod 26

int main()
{
	int t,a,b,i,j,word,k,wordresult;
	char* s;

	scanf("%d", &t);

	s = (char*)malloc(sizeof(char)*1000001);	

	for (i = 0;i < t;i++)
	{
		scanf("%d %d", &a, &b);
		scanf("%s", s);
		word = strlen(s);
		for (j = 0;j < word;j++)
		{
			for (k = 65;k <= 90;k++)
			{
				if (s[j] == k)
				{
					wordresult = (a*(k - 65) + b) % 26;
					wordresult += 65;
					
				}
			}
			s[j] = wordresult;
		}
		printf("%s\n", s);
	}
}