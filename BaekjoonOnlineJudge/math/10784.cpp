#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;

double price[1000005];

int main() {

	double p, a, b, c, d, n;
	double diff =0;
	double lema = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &p, &a, &b, &c, &d, &n);

	for (int i = 1; i <= n; i++) {
		price[i] = p * (sin(a*i + b) + cos(c*i + d) + 2);
	}
	lema = price[1];
	for (int i = 2; i <= n; i++) {
		if (lema < price[i]) {
			lema = price[i];
		}
		else if(lema>price[i]) {
			diff = max(diff, lema - price[i]);
		}
	}
	printf("%.6lf", diff);
	return 0;
}
