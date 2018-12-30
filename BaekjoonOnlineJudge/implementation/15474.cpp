#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	int n, a, b, c, d;
	int counta = 0;
	int tempa = 0;
	int tempb = 0;
	int countb = 0;
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

	while (tempa < n)
	{
		tempa += a;
		counta++;
	}
	while (tempb < n)
	{
		tempb += c;
		countb++;
	}

	if (counta*b < countb*d)
	{
		printf("%d", counta*b);
	}
	else
	{
		printf("%d", countb*d);
	}
}