#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int ma[100][100];

int main() {

	int h, w;
	int minres = 0x7fffffff;
	int tmp = 0;
	cin >> h >> w;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> ma[i][j];
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			for (int k = 0; k < h; k++) {
				for (int m = 0; m < w; m++) {
					tmp += min(abs(i - k), abs(j - m))*ma[k][m];
				}
			}
			if (tmp < minres) {
				minres = tmp;
			}
			tmp = 0;
		}
	}
	cout << minres;
	return 0;
}