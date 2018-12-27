#include<cstdio>

using namespace std;

int main() {

	double K, P, X;
	double M;
	scanf("%lf %lf %lf", &K, &P, &X);
	double minp = 0x7fffffff;
	double pp = 0;
	while (1) {
		pp++;
		double res = X * pp + K * P / pp;

		if (minp > res) {
			minp = res;
		}
		else {
			break;
		}
	}
	printf("%.3lf", minp);
	return 0;
}