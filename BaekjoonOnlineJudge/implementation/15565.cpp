#include<iostream>

int num[1000000];
int cnt;
using namespace std;

int main() {

	int n, k;
	int a;
	int min = 1000000;
	int templen;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 1) {
			num[cnt] = i;
			cnt++;
		}
	}
	if (cnt < k) {
		cout << "-1";
		return 0;
	}

	for (int i = 0; i < cnt; i++) {
		if (i + k - 1 > cnt - 1) {
			break;
		}
		templen = num[i + k - 1] - num[i];

		if (templen < min) {
			min = templen;
		}

	}
	cout << min+1;

	return 0;
}