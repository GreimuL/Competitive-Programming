#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

double prob[6];
double di[6];
int main() {
	double sum = 0;
	for(int i = 0; i < 6; i++) {
		scanf("%lf", &di[i]);
		sum += di[i] * (double)(i + 1);
	}
	double diff = sum-3.5;

	for (int i = 0; i < 6; i++) {
		double tmp = (diff+di[i] * ((double)(i + 1))) / di[i];
		double tmp2 = abs(tmp - (double)(i + 1));
		prob[i] = tmp2;
	}
	sort(prob, prob + 6);
	printf("%.3lf", prob[0]);

	return 0;
}