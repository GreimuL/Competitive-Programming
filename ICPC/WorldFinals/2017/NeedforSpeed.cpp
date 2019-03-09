#include<cstdio>

using namespace std;

double d[1005];
double s[1005];
int n;
double t;
bool ps(double c) {
	double tp = 0;
	for (int i = 0; i < n; i++) {
		if (c + s[i] == 0) {
			tp += d[i];
			continue;
		}
		tp += d[i] / (c + s[i]);
	}
	if (tp > t) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	
	scanf("%d %lf", &n, &t);
	double ms = 10000;
	for (int i = 0; i < n; i++) {
		double a, b;
		scanf("%lf %lf", &a, &b);
		d[i] = a;
		s[i] = b;
		if (ms > b) {
			ms = b;
		}
	}

	double le = -ms+ 0.000000001;
	double ri = 10000000;
	while(le<ri) {
		double mid = (le + ri) / 2;
		if (!ps(mid)) {
			ri = mid - 0.000000001;
		}
		else {
			le = mid + 0.000000001;
		}
	}
	printf("%.9lf", le);
	return 0;
}