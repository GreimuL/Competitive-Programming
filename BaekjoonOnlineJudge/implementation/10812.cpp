#include<iostream>
using namespace std;
int fir[105];
int sec[105];
int main() {

	bool ck = true;
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		fir[i] = i;
		sec[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int ii, jj, kk;
		cin >> ii >> jj >> kk;
		int tp = ii;
		for (int j = kk;j<=jj; j++) {
			sec[tp] = fir[j];
			tp++;
		}
		for (int j = ii; j < kk; j++) {
			sec[tp] = fir[j];
			tp++;
		}
		for (int k = 1; k <= n; k++) {
			fir[k] = sec[k];
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << fir[i] << " ";
	}

	return 0;
}