#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

double num[21];

int main() {
	
	int n;
	double tmp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);
	tmp = num[0];
	for (int i = 1; i < n; i++) {
		tmp = (tmp + num[i]) / 2;
	}
	printf("%.6lf", tmp);
	return 0;
}