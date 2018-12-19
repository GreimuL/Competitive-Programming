#include<iostream>

using namespace std;

int coin[15];

int main() {

	int n, k;
	int result = 0;
	int cnt = 0;
	int pt = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	pt = n - 1;
	result = k;
	while (result != 0) {
		if (coin[pt] <= result) {
			result -= coin[pt];
			cnt++;
		}
		else {
			pt--;
		}
	}
	cout << cnt;
	return 0;
}