#include<iostream>
using namespace std;
int fir[205];
int sec[205];
int main() {

	int n, m;
	bool ck = true;
	cin >> n >> m;
	for (int i = 1; i <= 2 * n; i++) {
		fir[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int ord;
		cin >> ord;
		if (ord == 0) {
			if (ck == true) {
				int k = 1;
				for (int j = 1; j <=2* n; j += 2) {
						sec[j] = fir[k];
						sec[j + 1] = fir[k + n];	
						k++;
				}
				ck = false;
			}
			else {
				int k = 1;
				for (int j = 1; j <= 2*n; j += 2) {
					fir[j] = sec[k];
					fir[j + 1] = sec[k + n];
					k++;
				}
				ck = true;
			}
		}
		else {
			if (ck == true) {
				for (int j = 1; j <= 2*n-ord; j++) {
					sec[j] = fir[j+ord];
				}
				for (int j = 2 * n - ord + 1; j <= 2 * n; j++) {
					sec[j] = fir[j - 2 * n + ord];
				}
				ck = false;
			}
			else {
				for (int j = 1; j <= 2 * n - ord; j++) {
					fir[j] = sec[j + ord];
				}
				for (int j = 2 * n - ord + 1; j <= 2 * n; j++) {
					fir[j] = sec[j - 2 * n + ord];
				}
				ck = true;
			}
		}
	}
	for (int i = 1; i <= 2 * n; i++) {
		if (ck == true) {
			cout << fir[i]<<"\n";
		}
		else {
			cout << sec[i]<<"\n";
		}
	}
	return 0;
}